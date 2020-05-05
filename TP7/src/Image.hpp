#ifndef IMAGE_HPP_
#define IMAGE_HPP_

class Image {
private :
    int _largeur;
    int _hauteur;
    int * _pixels;
public:
    Image(int largeur,int hargeur);
    int getLargeur() const;
    int getHauteur() const;
    int getPixel(int i ,int j) const;
    void setPixel(int i ,int j, int couleur) const;
};

#endif
