function Rectangle() {
    var longueur = prompt("Donne une longueur");
    var largeur = prompt("Donne une largeur");
    var resultatPerim = 2 * (longueur += largeur);
    var resultatAir = longueur * largeur;
    alert("Le périmètre est de " + resultatPerim + " cm");
    alert("L'air est de " + resultatAir + " cm²");


}