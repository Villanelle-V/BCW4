<?php 
	function arrayMin($array, $size) {
		$min = $array[0];

		for ( $i = 1; $i < $size; $i++ ) {
			if ( $array[$i] < $min ) {
				$min = $array[$i];
			}
		}
		return $min;
	}

	$size = 5;
	$array = array(2, 5, 3, 8, 4);

	echo arrayMin($array, $size);
?>
