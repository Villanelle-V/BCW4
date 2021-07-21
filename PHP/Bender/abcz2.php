<?php
    $a = fgets(STDIN);

    if ( $a % 2 == 0 ) {
        echo "alpha" . PHP_EOL;
    } else if ( $a % 3 == 0  ) {
        echo "bravo" . PHP_EOL;
    } else if ( $a % 5 == 0 ) {
        echo "charlie" . PHP_EOL;
    } else {
        echo "zulu" . PHP_EOL;
    }
?>