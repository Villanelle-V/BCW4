<?php

include 'Paper.php';

	class Pen {
		private $inkAmount;
		private $inkCapacity;

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

        public function __construct($inkCapacity) {
        	$this->inkAmount = $this->validate($inkCapacity);
        	$this->inkCapacity = $this->validate($inkCapacity);
        }

        public function __get($name) {
        	return $this->$name;
        }

        public function write(Paper $paper, $message) {
        	if ( $this->inkAmount == 0 ) {
        		throw new Exception("Out of ink");
        	}

        	$paper->addContent(substr($this->validateStr($message), 0, $this->inkAmount));
            
            $this->inkAmount -= strLen($message);
            
            if ( $this->inkAmount < 0 ) {
                $this->inkAmount = 0;
            }
        }

        public function refill() {
        	$this->inkAmount = $this->inkCapacity;
        }
	}
	