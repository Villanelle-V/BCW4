<?php
   $divident = fgets(STDIN);
   $divisor = fgets(STDIN);

   if ( $divisor < 0 ) {
       $divisor *= -1;
   }

   $multiple = $divident - $divident % $divisor;

    if ( $multiple > $divident ) {
        $multiple -= $divisor;
    } 

    echo $multiple . PHP_EOL;
?>