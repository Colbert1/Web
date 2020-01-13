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
    <h2> EXERCICE 4 :</h2>

    <?php
    function afficher_requet_select($marequete)
    {
        $marequete = ['SELECT * FROM `Médicament`'];
        ?>

        <form action="index.php" method="POST">
            <input type="text" name="Requete">
            <input type="submit" value="Valider">
        </form>
    <?php
        if ($marequete = NULL) {
            echo '<p class="texte">Pas de résultats</p>';
        } else {
            echo "<table>";
            echo "<tr>";
            echo "<td>" . $marequete . "</td>";
            echo '</tr>';
        }
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