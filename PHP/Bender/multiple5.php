<?php
   $multiple = 5;
   $max = fgets(STDIN);

   $max -= $max % $multiple;

    for ( $i = 0; $i < $max; $i += $multiple ) {
        echo $i . ' ';
    } 
    echo $max . PHP_EOL;
?>