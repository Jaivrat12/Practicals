<?php

    function db_connect($dbname = null) {

        global $conn;
        $conn = mysqli_connect('localhost', 'elite', 'elite', $dbname);
        if (!$conn)
            die('Connection Error: ' . mysqli_connect_error());
    }

    function execute($sql) {

        global $conn;
        $result = mysqli_query($conn, $sql);
        if (!$result)
            die("Error: " . mysqli_error($conn));
        return $result;
    }

    // Create Connection
    db_connect();

    // Create DB
    $sql = "CREATE DATABASE db";
    execute($sql);

    // Connect to DB
    db_connect('db');

    // Create Table
    $sql = "CREATE TABLE users (
        id INT(6) AUTO_INCREMENT PRIMARY KEY,
        firstname VARCHAR(30) NOT NULL,
        lastname VARCHAR(30) NOT NULL
    )";
    execute($sql);

    // Insert Data
    $users = [['John', 'Doe'], ['Mary', 'Moe'], ['Julie', 'Dooley']];
    for ($i = 0; $i < count($users); $i++) {
        $sql = "INSERT INTO users (firstname, lastname)
                VALUES ('" . $users[$i][0] . "', '" . $users[$i][1] . "')";
        execute($sql);
    }

    // Select Data
    $sql = "SELECT id, firstname, lastname FROM users";
    $result = execute($sql);
?>

<html>
    <head>
        <style>
            table, th, td { border: 1px solid black; }
        </style>
        <title>PHP MySQL</title>
    </head>
    <body>
        <h2>Users</h2>
        <table>
            <tr>
                <th>ID</th>
                <th>First Name</th>
                <th>Last Name</th>
            </tr>
            <?php while ($row = mysqli_fetch_assoc($result)): ?>
                <tr>
                    <?php foreach ($row as $data): ?>
                        <td><?php echo $data; ?></td>
                    <?php endforeach; ?>
                </tr>
            <?php endwhile; ?>
        </table>
    </body>
</html>