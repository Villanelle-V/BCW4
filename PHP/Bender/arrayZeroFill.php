<?php
	function arrayZeroFill($array, $limit) {
		$result = array_fill_keys(0, $limit-1), '0');
		print_r($result);
	}

	$size = 10;
	$array = array($size);

	arrayZeroFill($array, $size);
?>
