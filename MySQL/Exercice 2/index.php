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
    <h2> EXERCICE 2 :</h2>

    <?php echo "Coucou";
    $User1 = new User();
    $User1->setNom("Grégoire");
    $User1->AfficherNom();
    $User1->setMdp("Grégoire");
    ?>
    <form action="index.php" method="POST">
        <input type="text" name="nom">
        <input type="text" name="motdepasse">
        <input type="submit" value="Valider">
    </form>

    <?php
    if (isset($_POST["motdepasse"])) {

        $User1->verifMdp($_POST["motdepasse"]);
    } else {
        echo 'Veuillez remplir le formulaire';
    } ?>
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