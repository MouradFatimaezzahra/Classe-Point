// Classe Point.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Point.h"
#include"Segment.h"
using namespace geom;
using namespace std;

int main()
{
    Point P1(2, 4,"P1");
    Point P2(3, 5, "P2");
    Point *P3=new Point(5, 1 ,"P3");
    P1.afficher();
    P2.afficher();
    P3->afficher();
    /*geom::*/Segment S1(&P1, &P2, "S1");
    S1.afficher();
    Segment *S2=new Segment (&P1, P3, "S1");
    S2->afficher();
   cout<<"la distance entre les deux points est "<<P1.distance(P2);

    delete P3;
    delete S2;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
