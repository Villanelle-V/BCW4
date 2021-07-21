<?php
   $max = fgets(STDIN);
   $multiple = fgets(STDIN);

   if ( $multiple < 0 ) {
       $multiple *= -1;
   }

   $max -= $max % $multiple;

    for ( $i = 0; $i < $max; $i += $multiple ) {
        echo $i . ' ';
    } 

    echo $max . PHP_EOL;
?>
