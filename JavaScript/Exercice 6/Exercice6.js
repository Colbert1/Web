function soustrait(x) {
    var Tab = [-2, 1, 4];

    var resultat = x - 2;
    if (resultat >= 0) {

        alert(resultat);
    } else {

        alert("Nombre négatif");
    }
}

function affiche() {
    var Tab = [-2, 1, 4];
    soustrait(Tab[0]);
    soustrait(Tab[Tab.length - 1]);
}
