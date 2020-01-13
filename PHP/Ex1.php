<!DOCTYPE HTML>
<html>
    <head>
        <link href="stylephp.css" rel="stylesheet">
        <title>Exercice 1 PHP</title>
    </head>
    <body>
        <div>
        <?php $NombreAleatoire = rand ( 0 , 100 );
        if ($NombreAleatoire%2 == 1){
            ?>
            <div id="couleurrouge">ici c'est impair</div>
            <?php
            echo "$NombreAleatoire";
        }
      
     else{
        ?>
        <div id="couleurbleue">ici c'est pair</div>
        <?php
        echo "$NombreAleatoire";
     }
      ?>
        </div>
        <a href="../ExPHP.php">Retour</a><br>
    </body>    
</html>
<xmp>
<!DOCTYPE HTML>
<html>
    <head>
        <link href="stylephp.css" rel="stylesheet">
        <title>Exercice 1 PHP</title>
    </head>
    <body>
        <div>
        <php $NombreAleatoire = rand ( 0 , 100 );
        if ($NombreAleatoire%2 == 1){
            ?>
            <div id="couleurrouge">ici c'est impair</div>
            <php
            echo "$NombreAleatoire";
        }
      
     else{
        ?>
        <div id="couleurbleue">ici c'est pair</div>
        <php
        echo "$NombreAleatoire";
     }
      ?>
        </div>
        <a href="../ExPHP.php">Retour</a><br>
    </body>    
</html>
