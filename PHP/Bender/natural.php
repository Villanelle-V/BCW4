<?php
    $increase = fgets(STDIN);

    echo implode(' ', range(1, $increase)) . PHP_EOL;
?>