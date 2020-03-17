// main.cpp
#include <iostream>

#include "Fibonacci.hpp"
#include "Vecteur3.hpp"

int main() {
    /*std::cout << "Hello world Libasse!" << std::endl;
    std::cout << fibonacciRecursif(7) << std::endl;
    std::cout << fibonacciIteratif(7) << std::endl;
    */
    Vecteur3 vector;
    Vecteur3 vector1;
     Vecteur3 vecteur;
    double la_norme;
    double le_produi_sca;
    vector.x=2;
    vector.y=3;
    vector.z=6;
    
    vector1.x=1;
    vector1.y=2;
    vector1.z=3;
    afficher(vector);
    afficher(vector1);
    la_norme=norme(vector);
    le_produi_sca=produit_scalaire(vector,vector1);
    vecteur=addition(vector,vector1);
    std::cout <<" Sa norme est " << la_norme<< std::endl;
    std::cout <<" Le produit scalaire est " << le_produi_sca<< std::endl;
    afficher(vecteur);
   // print_element();
    return 0;
}
