<?php
    $even = fgets(STDIN);

    if ( $even % 2 != 0 ) {
        $even -= 1;
    }

    for ( $i = 0; $i < $even; $i++ ) {
        if ( $i % 2 == 0 )
            echo $i . ' ';
    } 
    echo $even . PHP_EOL;
?>