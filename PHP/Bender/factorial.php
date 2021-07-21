<?php
	function facorial($n) {
        if ( $n < 0 ) {
            return -1;
        }

        if ( $n <= 1 ) {
            return 1;
        }

        return factorial($n - 1) * $n;
    }

    echo factorial(5) . PHP_EOL;

?>