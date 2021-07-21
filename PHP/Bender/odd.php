<?php
    $odd = fgets(STDIN);

    if ( $odd % 2 == 0 ) {
        $isOdd -= 1;
    }

    for ( $i = 0; $i < $odd; $i++ ) {
        if ( $i % 2 != 0 )
            echo $i . ' ';
    } 
    echo $odd . PHP_EOL;
?>