<?php
    class Mohican {
    	private $id;
    	private static $list = array();
    	private static $last = NULL;
    	private static $count;

    	private function validateStr($str) {
            if ( is_string($str) ) {
                return $str;
            }
            throw new Exception("Invalid param");
        }

    	public function __construct() {
    		self::$count += 1;
    		$this->id = self::$count;
    		array_push(self::$list, $this);
    		self::$last = end(self::$list);

    	}

    	public function __destruct() {
    		foreach ( self::$list as $key => $item ) {
    			if ( $item == $this ) {
    				unset(self::$list[$key]);
    			}
    		}
    		self::$last = end(self::$list);
    	}

    	public function getId() {
    		return $this->id;
    	}

    	static public function getLastMohican() {
    		return self::$last;
    	}

    	public function __toString() {
            return "Number - " . "'" . $this->id . "'";
        }
    }

    $m1 = new Mohican();
    $m2 = new Mohican();

    echo Mohican::getLastMohican();

    $m3 = new Mohican();
    $m4 = new Mohican();

    $m4->__destruct();

    echo Mohican::getLastMohican();
?>
