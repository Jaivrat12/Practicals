<?php

    // Indexed Array
    $cars = ['Volvo', 'BMW', 'Toyota'];
    echo 'Cars we have: ';
    for ($i = 0; $i < count($cars); $i++)
        echo $cars[$i] . ', ';
    echo '<br><br>';

    // Associative Array
    $ages = ['Peter' => 35, 'Ben' => 37, 'Joe' => 43];
    foreach($ages as $name => $age)
        echo $name . ' is ' . $age . ' years old.<br>';
    echo '<br>';

    // Multidimensional Array
    $cars = [
        ['Volvo', 22, 18], ['BMW', 15, 13],
        ['Saab', 5, 2], ['Land Rover', 17, 15]
    ];
?>

<html>
    <head>
        <style>
            table, th, td { border: 1px solid }
        </style>
        <title>PHP Arrays</title>
    </head>
    <body>
        <table>
            <tr>
                <th>Name</th>
                <th>Stock</th>
                <th>Sold</th>
            </tr>
            <?php for ($i = 0; $i < count($cars); $i++): ?>
                <tr>
                    <?php for ($j = 0; $j < count($cars[$i]); $j++): ?>
                        <td><?php echo $cars[$i][$j]; ?></td>
                    <?php endfor; ?>
                </tr>
            <?php endfor; ?>
        </table>
    </body>
</html>