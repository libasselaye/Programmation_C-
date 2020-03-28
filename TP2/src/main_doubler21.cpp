#include "Doubler.hpp"
#include "liste.hpp"
#include <iostream>

int main() {
   // std::cout << doubler(21) << std::endl;
   // std::cout << doubler(21.f) << std::endl;
    int a= 42;
    int *p;
    p= &a;
    *p=37;
    std::cout <<a << std::endl;
    
    int *t;
    t= new int [10];
    t[2]=42;
    std::cout <<t[0] << t[2] << std::endl;
    delete [] t ;
    t=nullptr;
    
    
    Liste liste ;
    for(int i=13; i<37; i++){
		liste.ajouterDevant(i);
		}
	int x=liste.getTaille();
	std::cout << x << std::endl;
    return 0;
}

