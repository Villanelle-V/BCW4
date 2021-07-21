<?php 
	function arrayShiftRight(&$array, $size) {
		$last = $size - 1;
		$temp = $array[$last];

		for ( $i = $last; $i > 0; $i-- ) {
			$array[$i] = $array[$i-1];
		}
		$array[0] = $temp;
	}

	$size = 6;
	$array = array(2, 5, 0, 8, 4, 1);

	arrayShiftRight($array, $size);

	print_r($array);
?>