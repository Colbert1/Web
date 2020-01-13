<!DOCTYPE HTML>
<html>

<head>
    <link href="stylephp.css" rel="stylesheet">
    <title>Exercice 2.1 PHP</title>
</head>

<body>
    <div>
        <table border=1>
            <tr>
                <?php
                $chiffres = array(1, 2, 3, 4, 5);
                for ($i = 0; $i <= 4; $i++) {
                    ?>
                    <td>
                        <?php
                            echo $chiffres[$i];
                            ?>
                    </td>
                <?php
                }
                ?>
            </tr>
        </table>
    </div>
    <a href="../ExPHP.php">Retour</a><br>
</body>

</html>
<xmp>
    <!DOCTYPE HTML>
    <html>

    <head>
        <link href="stylephp.css" rel="stylesheet">
        <title>Exercice 2.1 PHP</title>
    </head>

    <body>
        <div>
            <table border=1>
                <tr>
                    <php $chiffres=array (1,2,3,4,5); for ($i=0; $i <=4; $i++) { ?>
                        <td>
                            <php echo $chiffres[$i]; ?>
                        </td>
                        <php } ?>
                </tr>
            </table>
        </div>
        <a href="../ExPHP.php">Retour</a><br>
    </body>

    </html>