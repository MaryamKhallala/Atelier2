// Atelier1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <deque>
#include<list>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string X[5]; 
    deque<string> d;
    list<string> lst;

    for (int i = 0; i < 5; i++)
    {
        cout << "Entrer un mot :" << endl;
        cin >> X[i];
        d.push_back(X[i]);
    }
   
    for (int i = 0; i <5; i++)
    {
        lst.push_back(d[i]);
    }

   //    //On ajoute le mot début
    cout << "*****************************" << endl;
  //  cout << "les mot stocker dans le deque sont :" << endl;

    cout << "La liste contient " << lst.size() << " Mot:\n";//utilisation d’un itérateur pour parcourir la liste lst 
    for(list<string>::iterator it=lst.begin();it!=lst.end();++it)
        cout<<"" << *it << endl ;

    std::cout << "Hello World!\n";
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
