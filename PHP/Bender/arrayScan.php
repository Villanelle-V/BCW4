<?php
	function arrayScan($read, $array, $limit) {
		$count;

		for ( $count = 0; $count < $limit && !feof($read); $count++ ) {
			$array[$count] = fgets($read);
		}
		return $count;
	}

	$read = fopen('task.in', 'r');
	$size = 8;
	$array = array($size);

	echo arrayScan($read, $array, $size);

	fclose($read);
?>
