<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP</title>
</head>
<body>
    <?php
    $n1 = $_POST['numero1'];
    $n2= $_POST['numero2'];
    $valido = false;
    $risultato = NULL;
    switch($_POST['operazioni']) {
        case'somma':
            $risultato = $n1 + $n2;
            break;
        case'sottrazione':
            $risultato = $n1 - $n2;
            break;
        case'moltiplicazione':
            $risultato =$n1 * $n2;
            break;
        case'divisione':
            if($n1 % 2) {
                $risultato = $n1/$n2;
                break;
            }
        default:
            echo"Operazione non valida!";
    }
    echo"Il risultato è uguale a:$risultato";
    ?>
</body>
</html>