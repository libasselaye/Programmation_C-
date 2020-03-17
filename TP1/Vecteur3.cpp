#include "Vecteur3.hpp"
#include <iostream>
#include <math.h>

Vecteur3 vector;
void afficher(Vecteur3 vector){
	std::cout << vector.x << " " << vector.y << " " << vector.z << std::endl;
}

double norme(Vecteur3 vector){
	double somme= (vector.x*vector.x) + (vector.y*vector.y) + (vector.z * vector.z); 
	return sqrt(somme);
}
double produit_scalaire(Vecteur3 vector1 , Vecteur3 vector2){
	return (vector1.x*vector2.x) + (vector1.y*vector2.y) + (vector1.z*vector2.z);
	}
Vecteur3 addition(Vecteur3 vector1 , Vecteur3 vector2){
	Vecteur3 vecteur;
	vecteur.x = vector1.x+vector2.x;
	vecteur.y = vector1.y+vector2.y;
	vecteur.z = vector1.z+vector2.z;
	return vecteur;
	}

/*void print_element() {
		std::cout << vector.x << std::endl;
		std::cout << vector.y << std::endl;
		std::cout << vector.z << std::endl;
}
*/
