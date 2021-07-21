<?php
	class Unit {
		private $damage;
		private $hitPoints;
		private $hitPointsLimit;
		private $name;

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

        public function __construct($name="Unit", $hp=100, $dmg=10) {
            $this->damage = $this->validate($dmg);
            $this->hitPoints = $this->validate($hp);
            $this->hitPointsLimit = $this->validate($hp);
            $this->name = $this->validateStr($name);
        }

        public function ensureIsAlive() {
        	if ( $this->hitPoints == 0 ) {
        		throw new Exception("Unit is Dead");
        	}
        }

        public function __get($name) {
        	return $this->name;
        }

        public function addHitPoints($hp) {
        	$this->ensureIsAlive();

    		$result = $this->hitPoints + $hp;

    		if ( $result > $this->hitPointsLimit ) {
        			$this->hitPoints = $this->hitPointsLimit;
        		return;
    		}
    		$this->hitPoints = $result;
        }

        public function takeDamage($dmg) {
        	$this->ensureIsAlive();

        	if ( $this->damage > $this->hitPoints ) {
        		$this->hitPoints = 0;
        		return;
        	}
        	$this->hitPoints -= $dmg;
        }

        public function attack(Unit $enemy) {
        	$enemy->ensureIsAlive();

        	if ( $this->damage > $enemy->hitPoints ) {
        		$enemy->hitPoints = 0;
        		return;
        	}
        	$enemy->hitPoints -= $this->damage;
        	$this->counterAttack($enemy);
        }

        public function counterAttack(Unit $enemy) {
        	$this->ensureIsAlive();

        	$newDamage = $enemy->damage / 2;

        	if ( $newDamage > $this->hitPoints ) {
        		$this->hitPoints = 0;
        		return;
        	}
        	$this->hitPoints -= $newDamage;
    	}

        public function __toString() {
            return "Unit - " . "'" . $this->name . "'" . 
                    "\nhas power:\t" . $this->damage . 
                    "\npoints amount is:\t " . $this->hitPoints; 
        }
	}
?>
