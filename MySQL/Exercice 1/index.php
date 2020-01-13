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

    <h2> EXERCICE 1 :</h2>

    <?php echo "Coucou";
    $User1 = new User();
    $User1->setNom("Grégoire");
    $User1->AfficherNom();
    $User1->setMdp("Grégoire");
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