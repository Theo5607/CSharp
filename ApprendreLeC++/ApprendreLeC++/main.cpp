﻿#include <array>
#include <iostream>
#include <list>
#include <string>
#include <vector>

template <typename Collection>
void afficher(Collection const& iterable)
{
    for (auto const& e : iterable)
    {
        std::cout << e << std::endl;
    }
}

int main()
{
    // Un std::vector est itérable, donc aucun problème.
    std::vector<int> tableau_entiers{ 1, 3, 5, 7, 9 };
    afficher(tableau_entiers);

    std::cout << std::endl;

    // De même que pour un std::array.
    std::array<double, 4> const tableau_reels{ 1.2, 3.1415, 12.5, 2.7 };
    afficher(tableau_reels);

    std::cout << std::endl;

    // Ou bien une std::list.
    std::list<std::string> const liste_chaines{ "Hello", "World", "Les templates", u8"C'est génial !" };
    afficher(liste_chaines);

    std::cout << std::endl;

    // Une chaîne de caractères est tout à fait itérable.
    std::string const chaine{ u8"Ça marche même avec des chaînes de caractères !" };
    afficher(chaine);

    return 0;
}