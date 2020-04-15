#include <iostream>
#include "Livre.hpp"

int main() {
   Livre l1("t1","a1",2005);
   Livre l2("t2","a2",2019);
   std::cout << (l1 < l2 ) <<std::endl;
   std::cout << l1.operator<(l2) << std::endl;
   return 0;
}

