function boucle() {
    var Tab = [-2, 1, 4];
    for (i = 0; i < 3; i++) {
        resultat = i * i;
        alert(resultat);
    }
}
function boucle2() {
    var tailleDuTab = prompt("Quelle taille de tableau désires-tu ? ");

    for (i = 0; i < tailleDuTab; i++) {

        resultat = i * i;
        alert(resultat);
    }
}
