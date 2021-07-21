<?php
	function arrayPrint($write, $array, $size) {
		for( $i = 0; $i < $size; $i++ ) {
			fwrite($write, $array[$i] . ' ');
		}
	}

	$array = array();

	$array[0] = 1;
	$array[1] = 2;
    $array[2] = 3;
    $array[3] = 4;
    $array[4] = 5;

	$write = fopen('task.out', 'w');

	arrayPrint($write, $array, 5);

	fclose($write);
?>
