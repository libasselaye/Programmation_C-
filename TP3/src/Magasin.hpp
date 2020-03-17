#ifndef MAGASIN_HPP
#define MAGASIN_HPP
#include "client.hpp"
#include "Produit.hpp"
#include "Location.hpp"
#include <string>
#include <vector>



class Magasin
{
private:
     std::vector<client> _clients;
     std::vector<Produit> _produits;
     std::vector<Location> _locations;
     int _idCourantClient;
     int _idCourantProduit;
public:
    Magasin();
    long nbClients() const;
    void ajouterClient(const std::string & nom);
    void afficherClients() const;
    void supprimerClient(int idClient) ;
};
#endif // MAGASIN_HPP
