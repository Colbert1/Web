<!DOCTYPE HTML>
<html>

<head>
    <link href="stylephp.css" rel="stylesheet">
    <title>Ex Formulaire PHP</title>
</head>

<body>

    <?php
    if (isset($_GET['LeChiffre']) && !empty($_GET['LeChiffre'])) {
        echo "Ma Valeur est :" . $_GET['LeChiffre'];
    } else {
        echo "Formulaire non saisie";
    ?>
        <form action="ExFormulaire.php" method="GET">
            <label> Votre Chiffre </label>
            <input type="text" name="LeChiffre" />
            <input type="submit" name="Valider" value="Cliquer pour valider" />
        </form>
    <?php
    }
    ?>
    <br><a href="../ExPHP.php">Retour</a><br>
</body>

</html>
<xmp>
    <!DOCTYPE HTML>
    <html>

    <head>
        <link href="stylephp.css" rel="stylesheet">
        <title>Ex Formulaire PHP</title>
    </head>

    <body>

        <php if(isset($_GET['LeChiffre']) && !empty($_GET['LeChiffre'])){ echo "Ma Valeur est :" .$_GET['LeChiffre']; }else{ echo "Formulaire non saisie" ; ?>
            <form action="ExFormulaire.php" method="GET">
                <label> Votre Chiffre </label>
                <input type="text" name="LeChiffre" />
                <input type="submit" name="Valider" value="Cliquer pour valider" />
            </form>
            <php } ?>
                <br><a href="../ExPHP.php">Retour</a><br>
    </body>

    </html>