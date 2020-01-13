<!DOCTYPE html>
<html lang="fr">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link href="stylephp.css" rel="stylesheet">
    <title>Exercice 1</title>
</head>

<body>
    <?php
    function AfficherTableauHTML()
    { ?>
        <table border='2'>
            <thead>
                <tr>
                    <th>COUCOU</th>
                    <th>COUCOU1</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>COUCOU2</td>
                    <td>COUCOU3</td>
                </tr>
            </tbody>
        </table>
    <?php
    }
    AfficherTableauHTML();
    ?>
    <a href="../ExPHPFonction.php">Retour</a><br>
</body>

</html>