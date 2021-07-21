<?php
	function arrayScan($read, $array, $limit) {
		$count;
		for ( $i = 0; $i < $limit; $i++ ) {
			fread($read, $array[i]);
			$count += 1;
		}
		return $count;
	}

	$array = array();

	$array[0] = 1;
	$array[1] = 2;
    $array[2] = 3;
    $array[3] = 4;
    $array[4] = 5;

	$read = fopen('task.out', 'r');

	arrayScan($read, $array, 5);

	fclose($read);
?>
