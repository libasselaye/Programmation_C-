#include <iostream>
#include "Livre.hpp"
#include "Bibliotheque.hpp"

int main() {
   Livre l1("t1","a1",2005);
   Livre l2("t2","a2",2019);
   Livre l3("t2","a2",2030);
   //std::cout << (l1 < l2 ) << std::endl;
   //std::cout << l1.operator<(l2) << std::endl;
   //std::cout << (l2 == l3 ) << std::endl;

   //std::cout << l1 << " " << l1 << std::endl;
   Bibliotheque b;
   b.push_back(l1);
   b.push_back(l2);
   b.push_back(l3);
   b.trierParAnnee();
   b.afficher();
   b.ecrireFichier("toto.txt");
   return 0;
}

