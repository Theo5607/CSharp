// TrouverLeNombre.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <random>
#include <iostream>
using namespace std;

int main()
{
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100); // distribution in range [1, 6]

    const int nombre_secret = dist(rng);
    int guess = 0;
    
    do
    {
        cout << "Entrez un nombre entre 1 et 100. ";
        cin >> guess;

        if (guess > nombre_secret)
            cout << "Trop grand! ";
        else if (guess < nombre_secret)
            cout << "Trop petit! ";
        else
            cout << "Bien joué!";
    } while (guess != nombre_secret);
}
