<?php

    function add($a, $b) {
        $GLOBALS['z'] = $a + $b;
    }
    add(5, 10);
    echo '5 + 10 = ' . $z . '<br><br>';

    echo 'PHP_SELF: ' . $_SERVER['PHP_SELF'] . '<br>';
    echo 'SERVER_NAME: ' . $_SERVER['SERVER_NAME'] . '<br>';
    echo 'HTTP_HOST: ' . $_SERVER['HTTP_HOST'] . '<br>';
    echo 'HTTP_REFERER: ' . $_SERVER['HTTP_REFERER'] . '<br>';
    echo 'SCRIPT_NAME: ' . $_SERVER['SCRIPT_NAME'] . '<br><br>';

    echo 'If link ends with: ?name=Peter&age=35,<br>';
    $_GET['name'] = 'Peter';
    $_GET['age'] = 35;
    echo '$_GET: ';
    print_r($_GET);
    echo '<br><br>';

    echo 'If this page was reached through a form with POST method,<br>';
    $_POST['name'] = 'Ben';
    $_POST['age'] = 25;
    echo '$_POST: ';
    print_r($_POST);
    echo '<br><br>';

    setcookie('user', 'John Doe', time() + (86400 * 30));
    echo 'User: ' . $_COOKIE['user'];
    echo '<br>';

    session_start();
    $_SESSION['favcolor'] = 'green';
    echo 'Favorite color: ' . $_SESSION['favcolor'] . '<br>';
?>