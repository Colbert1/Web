<!DOCTYPE HTML>
<html>
    <head>
        <link href="stylephp.css" rel="stylesheet">
        <title>Exercice 2.2 PHP</title>
    </head>
    <body>
        <div>
            <table border=1>
                <tr>
                <?php
                    $chiffres = array ("Colbert"=>12,"Col"=>24);
                    foreach ($chiffres as $indice => $valeur)
                    {
                ?>
                    <td>
                <?php
                        echo "Nom:". $indice ."Mdp:".$valeur.".";
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
        <title>Exercice 2.2 PHP</title>
    </head>
    <body>
        <div>
            <table border=1>
                <tr>
                <php
                    $chiffres = array ("Colbert"=>12,"Col"=>24);
                    foreach ($chiffres as $indice => $valeur)
                    {
                ?>
                    <td>
                <php
                        echo "Nom:". $indice ."Mdp:".$valeur.".";
                ?>
                    </td>
                <php
                    }
                ?>
                    </tr>
            </table>
        </div>
        <a href="../ExPHP.php">Retour</a><br>
    </body>    
</html>