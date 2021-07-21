<?php 
    class Gun {
    	private $amount;
    	private $capacity;
    	private $isReady;
    	private $model;
    	private $totalShots;

    	private function validate($value) {
            if ( is_numeric($value) ) {
                return $value;
            }
            throw new Exception("Invalid param");
        }

        private function validateStr($str) {
            if ( is_string($str) ) {
                return $str;
            }
            throw new Exception("Invalid param");
        }

        public function __construct($model="TT", $capacity=8) {
            $this->amount = 0;
            $this->capacity = $this->validate($capacity);
            $this->isReady = FALSE;
            $this->model = $this->validateStr($model);
            $this->totalShots = 0;
        }

        public function __get($name) {
        	return $this->name;
        }

        public function ready() {
        	return $this->isReady;
        }

        public function prepare() {
        	$this->isReady = !$this->isReady;
        }

        public function reload() {
        	$this->amount = $this->capacity;
        }

        public function shoot() {
        	if ( !$this->ready() ) {
        		throw new Exception("Not ready");
        	}
        	if ( $this->amount == 0 ) {
        		throw new Exception("Out of rounts");
        	}

        	echo "Bang!" . PHP_EOL;
        	$this->amount -= 1;
        	$this->totalShots += 1;
        }

        public function __toString() {
            return "Gun - " . "'" . $this->model . "'" . 
                    "\nloads with\t" . $this->amount . 
                    "\nrounds out of\t " . $this->capacity . 
                    "\ntotal shots are\t " . $this->totalShots;
        }
    }
