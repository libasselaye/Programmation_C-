#include "Image.hpp"

Image::Image(int largeur,int hauteur):
    _largeur(largeur), _hauteur(hauteur)
{
    _pixels = new int[_largeur * _hauteur];
    /*for (int k=0;k<_largeur * _hauteur;k++)
        _pixels[k] = 0;*/
}

Image::~Image(){
    delete [] _pixels;
}

int Image::getLargeur() const{
    return _largeur;
}

int Image::getHauteur() const{
    return _hauteur;
}

int Image::getPixel(int i ,int j) const{
     return _pixels[i*_largeur +j];
}

void Image::setPixel(int i ,int j, int couleur) const{
    _pixels[i*_largeur +j] =couleur;
}

//getter
int Image::pixel(int i , int j) const{
    return _pixels[i*_largeur +j];
}

//setter
int & Image::pixel(int i , int j){
    return _pixels[i*_largeur +j];
}
