#ifndef VECTEUR3_HPP_
#define VECTEUR3_HPP_


struct Vecteur3 {
 float x,y,z;
};

void afficher(Vecteur3 vector);
//void print_element();
double norme(Vecteur3 vector);
double produit_scalaire(Vecteur3 vector1 , Vecteur3 vector2);
Vecteur3 addition(Vecteur3 vector1 , Vecteur3 vector2);
#endif
