// MoyenneNotes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

float moyenne(float* tab, unsigned taille)
{
    float somme = 0.0;

    for (unsigned i = 0; i < taille; ++i)
        somme += tab[i];

    float moyenne = somme / taille;
    
    return moyenne;
}

int main(void)
{   
    float notes_theo[] = { 17.0, 16.0, 10.0 };

    float moyenne_theo = moyenne(notes_theo, 3);
    std::cout << moyenne_theo;
}
