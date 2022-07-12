// RenduDeMonnaie.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{
    int tab[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int pieces[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    std::cout << "Entrez un montant : ";

    int montant = 0;
    std::cin >> montant;

    while (montant > 0) {
        for (unsigned i = 0; i < 9; i++)
            if (montant >= tab[i]) {
                montant -= tab[i];
                pieces[i] += 1;
                break;
            }
    }

    for (unsigned i = 0; i < 9; i++) {
        printf("Nombre de pièce de %d est %d.\n", tab[i], pieces[i]);
    }
}
