#ifndef FIGUREGEOMETRIQUE_HPP_
#define FIGUREGEOMETRIQUE_HPP_
#include "Couleur.hpp"

class FigureGeometrique{
protected:
   Couleur _couleur;

public:
  FigureGeometrique(const Couleur & couleur);
  virtual ~FigureGeometrique() = default;
  const Couleur & getCouleur() const ;
  virtual void afficher() const = 0;
};

#endif
