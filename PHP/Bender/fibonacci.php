<?php
	function fibonacci($n) {
		if ( $n < 0 ) {
			return fibonacci($n+2) - fibonacci($n+1);
		}

		if ( $n <= 1 ) {
			return $n;
		}

		return fibonacci($n-1) + fibonacci($n-2);
	}
	
	echo fibonacci(8);
?>
