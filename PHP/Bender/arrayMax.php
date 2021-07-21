<?php 
	function arrayMax($array, $size) {
		$max = $array[0];

		for ( $i = 1; $i < $size; $i++ ) {
			if ( $array[$i] > $max ) {
				$max = $array[$i];
			}
		}
		return $max;
	}

	$size = 5;
	$array = array(2, 5, 0, 8, 4);

	echo arrayMax($array, $size);
?>
