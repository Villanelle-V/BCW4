<?php

   $size = fgets(STDIN);
   $step = 1;

    for ( $line = 0; $line < $size; $line++ ) {
        for ( $column = 1; $column < $size; $column++ ) {
            echo $step . ' ';
            $step += 1;
        }
        echo $step . PHP_EOL;
        $step += 1;
    } 

?>