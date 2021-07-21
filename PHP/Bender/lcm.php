<?php 
	function gcd($a, $b) {
		if ( $b == 0 ) {
			return $a;
		}
		return gcd($b, $a % $b);
	}

	function lcm($a, $b) {
		return $a / gcd($a, $b) * $b;
	}

	$read = fopen('task.in', 'r');
	$write = fopen('task.out', 'w');

	$num1 = fgets($read);
	$num2 = fgets($read);
	
	fwrite($write, lcm($num1, $num2));

	fclose($read);
	fclose($write);
?>
