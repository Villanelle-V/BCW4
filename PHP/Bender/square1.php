<?php

   $size = fgets(STDIN);

    for ( $line = 0; $line < $size; $line++ ) {
        for ( $column = 1; $column < $size; $column++ ) {
            echo $column . ' ';
        }
        echo $size . PHP_EOL;
    } 

?>