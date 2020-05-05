#include "Inventaire.hpp"

std::ostream & operator<<(std::ostream & os, const Inventaire & in){
	
	for (const Bouteille b : in._bouteilles) 
	   os <<b;

   return os;
}

