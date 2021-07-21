<?php 
	function arrayShiftLeft(&$array, $size) {
		$last = $size - 1;
		$temp = $array[0];

		for ( $i = 0; $i < $last; $i++ ) {
			$array[$i] = $array[$i+1];
		}
		$array[$last] = $temp;
	}

	$size = 6;
	$array = array(2, 5, 0, 8, 4, 1);

	arrayShiftLeft($array, $size);

	print_r($array);
?>