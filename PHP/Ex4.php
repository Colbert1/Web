<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link href="stylephp.css" rel="stylesheet">
    <title>Exercice 4 PHP</title>
</head>
    <body>
        <div>
        <?php
        $a=21;
		$b=2;
        $c=1;
            echo "L'équation est $a*x²+$b*x+$c . ";
            $delta = $b*$b - (4 * $a * $c);
                if ($delta < 0)
                {
                    echo "Cette équation n'a pas de solution.";
                }
                if ($delta == 0)
                {
                    echo "Cette équation a une racine double égale à ".-$b/(2*$a);
                }
                if ($delta > 0)
                {
                $R1 = (-$b - sqrt($delta))/(2*$a);
                $R2 = (-$b + sqrt($delta))/(2*$a);
                    echo "Cette équation a deux racines : $R1 et $R2";
                }    
        ?>       
        </div>
        <a href="../ExPHP.php">Retour</a><br>
    </body>
</html>
<xmp>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link href="stylephp.css" rel="stylesheet">
    <title>Exercice 4 PHP</title>
</head>
    <body>
        <div>
        <php
        $a=21;
		$b=2;
        $c=1;
            echo "L'équation est $a*x²+$b*x+$c . ";
            $delta = $b*$b - (4 * $a * $c);
                if ($delta < 0)
                {
                    echo "Cette équation n'a pas de solution.";
                }
                if ($delta == 0)
                {
                    echo "Cette équation a une racine double égale à ".-$b/(2*$a);
                }
                if ($delta > 0)
                {
                $R1 = (-$b - sqrt($delta))/(2*$a);
                $R2 = (-$b + sqrt($delta))/(2*$a);
                    echo "Cette équation a deux racines : $R1 et $R2";
                }    
        ?>       
        </div>
        <a href="../ExPHP.php">Retour</a><br>
    </body>
</html>
