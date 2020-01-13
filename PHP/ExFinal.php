<?php session_start(); 

  define('LOGIN','Julien'); 
  define('PASSWORD','1234'); 
  $message = 'Bienvenue';    
    if(!empty($_POST))
    {  
    if(empty($_POST['login']))
    {
      $message = 'Indiquer votre login';
    }
      elseif(empty($_POST['motDePasse']))
    {
      $message = 'Indiquer votre mot de passe';
    }   
      elseif($_POST['login'] !== LOGIN)
    {
      $message = 'Login Erreur ';
    }  
      elseif($_POST['motDePasse'] !== PASSWORD)
    {
      $message = 'Mot de passe non valide';
    }
      else
    {    
      $message = 'Bienvenue '. LOGIN .' !';
    }
  }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link href="stylephp.css" rel="stylesheet">
    <title>Exercice Final PHP</title>
</head>
    <body>
    <?php if(!empty($message)) : ?>
      <p><?php echo $message; ?></p>
    <?php endif; ?>
    <form action="<?php echo htmlspecialchars($_SERVER['REQUEST_URI'], ENT_QUOTES); ?>" method="post">
      <fieldset>
        <legend>Identification</legend>
          <p>
            <label for="login">Identifiant :</label> 
            <input type="text" name="login" id="login" value="<?php if(!empty($_POST['login'])) { echo htmlspecialchars($_POST['login'], ENT_QUOTES); } ?>" />
          </p>
          <label for="password">Mot de passe :</label>
          <input type="password" name="motDePasse" id="password" value="" /> 
          <p>
            <input type="submit" name="submit" value="Valider" />
          </p>
      </fieldset>
    </form>
    <form action="ExFinal.php" method="post">
     <input type="submit" name="logout" value="Déconnexion" />
    </form>
    <br> <a href="../ExPHP.php">Retour</a> 
    </body>
</html>
<xmp>
<php session_start(); 

  define('LOGIN','Julien'); 
  define('PASSWORD','1234'); 
  $message = 'Bienvenue';    
    if(!empty($_POST))
    {  
    if(empty($_POST['login']))
    {
      $message = 'Indiquer votre login';
    }
      elseif(empty($_POST['motDePasse']))
    {
      $message = 'Indiquer votre mot de passe';
    }   
      elseif($_POST['login'] !== LOGIN)
    {
      $message = 'Login Erreur ';
    }  
      elseif($_POST['motDePasse'] !== PASSWORD)
    {
      $message = 'Mot de passe non valide';
    }
      else
    {    
      $message = 'Bienvenue '. LOGIN .' !';
    }
  }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <link href="stylephp.css" rel="stylesheet">
    <title>Exercice Final PHP</title>
</head>
    <body>
    <php if(!empty($message)) : ?>
      <p><php echo $message; ?></p>
    <php endif; ?>
    <form action="<php echo htmlspecialchars($_SERVER['REQUEST_URI'], ENT_QUOTES); ?>" method="post">
      <fieldset>
        <legend>Identification</legend>
          <p>
            <label for="login">Identifiant :</label> 
            <input type="text" name="login" id="login" value="<?php if(!empty($_POST['login'])) { echo htmlspecialchars($_POST['login'], ENT_QUOTES); } ?>" />
          </p>
          <label for="password">Mot de passe :</label>
          <input type="password" name="motDePasse" id="password" value="" /> 
          <p>
            <input type="submit" name="submit" value="Valider" />
          </p>
      </fieldset>
    </form>
    <form action="ExFinal.php" method="post">
     <input type="submit" name="logout" value="Déconnexion" />
    </form>
    <br> <a href="../ExPHP.php">Retour</a> 
    </body>
</html>