# R308-
consolidation programmation
// language C++

// Ne pas oublier d'inclure la bibliothèque : wininet.lib

#include "Client_FTP.h"
#include <iostream>

using namespace std;

int main() {
    // Déclaration des variables de connexion
    LPCSTR Adresse_Site_FTP = "192.168.103.230";  // Remplacer par l'adresse IP du serveur FTP
    INTERNET_PORT portFTP = 21;                   // Remplacer par le port FTP (21 par défaut)
    LPCSTR Utilisateur = "Etudiant RT1";          // Remplacer par votre identifiant
    LPCSTR MotDePasse = "RT1";                    // Remplacer par votre mot de passe

    // Création d'un objet de type Client_FTP
    Client_FTP clientFTP;

    // Connexion au site FTP
    clientFTP.ConnexionauSiteenFTP(Adresse_Site_FTP, portFTP, Utilisateur, MotDePasse);

    // Afficher le nom du répertoire courant
    clientFTP.NomRepertoireCourant();

    // Lister les fichiers dans le répertoire courant
    clientFTP.AfficherRepertoire();

    // Accéder à un répertoire spécifique (ex : "Etudiant 1")
    LPCSTR Repertoire = "Etudiant 1";  // Remplacer par votre répertoire
    clientFTP.AccederauRepertoire(const_cast<LPTSTR>(Repertoire));  // Conversion pour LPTSTR

    // Vérifier le répertoire courant après le changement
    clientFTP.NomRepertoireCourant();

    // Fermer la connexion FTP
    clientFTP.FindeConnexion();

    system("PAUSE");
    return 0;
}
