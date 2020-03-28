#ifndef PRODUIT_HPP
#define PRODUIT_HPP
#include <string>

class Produit
{
private:
     std::string _description;
     int _id;

public:
    Produit(int id , const std::string & description );
    int getId() const;
    const std::string & getDescription() const;
    void afficherProduit() const;
};

#endif // PRODUIT_HPP
