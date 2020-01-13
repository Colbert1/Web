function Cercle() {
    var longueur = prompt("Donne une longueur");
    var resultatPerim = 2 * Math.PI * longueur;
    var resultatAir = longueur * longueur * Math.PI;
    var Perim = Number(resultatPerim);
    var Air = Number(resultatAir);
    alert("Le périmètre est de " + resultatPerim + " cm");
    alert("L'air est de " + resultatAir + " cm²");

}