function centrage_h1()
        {
            titre=(document.getElementsByTagName("h1"))[0];
            titre.setAttribute("align", "center");
        }
        
    function modif_paragraphe()
        {
            par=document.getElementById("premier");
            par.innerHTML="Premier paragraphe <i>modifié<\/i>.";
        }
