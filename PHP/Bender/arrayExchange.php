<?php 
	function arrayExchange(&$array, $size) {
		for ( $i = 0, $j = 1; $j < $size; $i += 2, $j += 2 ) {
			$temp = $array[$i];

			$array[$i] = $array[$i+1];
			$array[$i+1] = $temp;
		}
	}

	$size = 6;
	$array = array(2, 5, 0, 8, 4, 1);

	arrayExchange($array, $size);

	print_r($array);
?>
