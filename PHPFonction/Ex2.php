<!DOCTYPE html>
<html lang="fr">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link href="stylephp.css" rel="stylesheet">
    <title>Exercice 2</title>
</head>

<body>
    <?php
    function AfficherTableau3C($hauttab1, $hauttab2, $hauttab3)
    { ?>
        <table border='2'>
            <tr>
                <th><?php echo $hauttab1 ?></th>
                <th><?php echo $hauttab2 ?></th>
                <th><?php echo $hauttab3 ?></th>
            </tr>
            <tr>
                <td>1</td>
                <td>2</td>
                <td>3</td>
            </tr>
            <tr>
                <td>4</td>
                <td>5</td>
                <td>6</td>
            </tr>
        </table>
    <?php
    }
    AfficherTableau3C("Salut", "Coucou", "Hello");
    ?>

    <a href="../ExPHPFonction.php">Retour</a><br>
</body>

</html>