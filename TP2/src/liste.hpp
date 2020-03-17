#ifndef LISTE_HPP
#define LISTE_HPP

 struct Noeud {
     int valeur;
     Noeud *suivant;
 };

 struct Liste {
     Noeud *tete;
     Liste();
     void ajouterDevant(int val);
     int getTaille() const;
     int getElement(int val) const;
 };

#endif // LISTE_HPP
