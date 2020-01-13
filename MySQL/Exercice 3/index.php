<?php require("user.php"); ?>
<!DOCTYPE html>
<html lang="fr">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link href="StyleMYSQL.css" rel="stylesheet">
    <title>MySQL</title>
</head>

<body>
    <h2> EXERCICE 3 :</h2>

    <?php
    try {
        $BaseConsultation = new PDO('mysql:host=192.168.65.206; dbname=Consultation; charset=utf8', 'Colbert', 'Colbert');
        echo "SELECT * FROM `Médicament`";
        $DonneesDeLaBdd = $BaseConsultation->query("SELECT * FROM `Médicament`");

        echo "<table>";
        while ($TableauDeDonnee  = $DonneesDeLaBdd->fetch()) {
            echo "<tr>";
            echo '<td>' . $TableauDeDonnee["Id_CodeSS"] . ' </td><td> ' . $TableauDeDonnee["NomCommercial"] . '</td>';
            echo "</tr>";
        }
        echo "</table>";
        $DonneesDeLaBdd->closeCursor();
    } catch (Exception $erreur) {
        die('Erreur : ' . $erreur->getMessage());
    }
    ?>
    <?php
    echo
        highlight_file(
            './' .
                basename(
                    __FILE__
                ),
            true
        );
    ?>
</body>

</html>