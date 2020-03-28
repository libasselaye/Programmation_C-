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
    int nbClients() const;
    void ajouterClient(const std::string & nom);
    void afficherClients() const;
    void supprimerClient(int idClient) ;

    int nbLocations() const;
    void ajouterLocation(int idClient , int idProduit);
    void afficherLocations() const;
    void supprimerLocation(int idClient , int idProduit) ;
    bool trouverClientDansLocation(int idClient) const ;
    std::vector<int> calculerClientsLibres() const;
    bool trouverProduitDansLocation(int idProduit) const ;
    std::vector<int> calculerProduitsLibres() const;

};
#endif // MAGASIN_HPP
