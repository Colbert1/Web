<?php
class user
{
    //Propriétés
    private $_nom;
    private $_mdp;
    private $marequete;
    //Méthode
    public function afficherNom()
    {
        echo "<p>Le nom est " . $this->_nom . ".</p>";
    }

    public function setNom($NewNom)
    {
        $this->_nom = $NewNom;
    }

    public function setMdp($NewMDP)
    {
        $this->_mdp = $NewMDP;
        echo "<p>Le MDP est " . $this->_mdp . ".</p>";
    }

    public function verifMdp($NewMDP)
    {
        if ($NewMDP == $this->_mdp) {
            echo "<p>Correcte</p>";
        } else {
            echo "<p>Incorrecte</p>";
        }
    }
}
