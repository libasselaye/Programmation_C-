// Location.cpp
#include "Location.hpp"

#include <iostream>
void Location::afficherLocation() const {
		std::cout << "Location (" << _idClient << ", " << _idProduit << " )" << std::endl;

}
