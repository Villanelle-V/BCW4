<?php
   $size = fgets(STDIN);
   $value = $size * ($line - 1) + 1;

    for ( $line = $size; $line > 0; $line-- ) {
        //$value = $size * ($line - 1) + 1;
        for ( $column = 1; $column < $size; $column++, $value++ ) {
            echo $value . ' ';
        }
        echo $value . PHP_EOL;
    } 
?>