<?php 
	function arraySearch($array, $size, $needle) {
		for ( $i = 0; $i < $size; $i++ ) {
			if ( $array[$i] == $needle ) {
				return $i;
			}
		}
		return -1;
	}

	$size = 5;
	$array = array(2, 5, 0, 8, 4);

	echo arraySearch($array, $size, 9);
?>
