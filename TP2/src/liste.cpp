#include "liste.hpp"
#include <iostream>

Liste::Liste(){
    tete =nullptr;
}

void Liste::ajouterDevant(int val){
 Noeud* head = new Noeud ;
 head->valeur=val;
 head->suivant=tete;
 tete=head;
}

int Liste::getTaille() const{
   int taille=0;
   Noeud* courant = tete;
   while(courant !=nullptr){
       taille++;
       courant=courant->suivant;
   }
  return taille;
}

int Liste::getElement(int i) const{
  Noeud* courant = tete;
  int compt=0;
  while (courant){
    if(compt==i)
        return courant->valeur;
    else{
        courant=courant->suivant;
        compt++;
    }
  }
}
