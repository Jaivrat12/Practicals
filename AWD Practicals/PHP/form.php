<?php

    $name = $email = $age = '';
    if (isset($_POST['submit'])) {

        $name = trim($_POST['name']);
        $email = trim($_POST['email']);
        $age = $_POST['age'];
    }
?>

<h2>PHP Form Validation</h2>
<form method="POST" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    Name: <input type="text" name="name"><br>
    Email: <input type="email" name="email"><br>
    Age: <input type="number" name="age"><br>
    <input type="submit" name="submit" value="Submit">
</form>

<?php

    echo '<h2>Your Input:</h2>';
    echo $name . '<br>';
    echo $email . '<br>';
    echo $age;
?>