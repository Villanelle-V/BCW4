<?php
	function arrayCopy($destination, $source) {
		$result = array_merge($destination, $source);
		return $result;
	}

	$destination = array(1, 2, 3, 4, 5);
	$source = array();

	$source = arrayCopy($destination, $source);

	print_r($destination);
	print_r($source);
?>
