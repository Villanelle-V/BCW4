<?php 
	function arrayReverse(&$array, $size) {
		$result = array_reverse($array);
		return $result;
	}

	$size = 6;
	$array = array(2, 5, 0, 8, 4, 1);

	$arrayRev = arrayReverse($array, $size);

	print_r($arrayRev);
?>