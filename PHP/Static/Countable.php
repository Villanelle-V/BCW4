<?php
	class Count {
		private static $counts = 0;

		public function __construct() {
			self::$counts += 1;
		}

		public function __destruct() {
			self::$counts -= 1;
		}

		public static function count() {
			return self::$counts . PHP_EOL;
		}
	}

	$a = new Count();
    $b = new Count();

    echo Count::count() . PHP_EOL;

    $c = new Count();

    echo Count::count() . PHP_EOL;
?>
