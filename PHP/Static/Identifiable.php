<?php
	class Identifiable {
		private $id;
		public static $count = 0;

		public function __construct() {
			self::$count += 1;
			$this->id = self::$count;
		}

		public function getId() {
			return $this->id;
		}

		public static function count() {
			return self::$count . PHP_EOL;
		}
	}

	$a = new Identifiable();
    $b = new Identifiable();

    echo Identifiable::count() . PHP_EOL;
    echo $a->getId() . PHP_EOL;

    $c = new Identifiable();

    echo Identifiable::count() . PHP_EOL;