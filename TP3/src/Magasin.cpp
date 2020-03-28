#include "Magasin.hpp"
#include "client.hpp"
#include <iostream>
#include <vector>
#include <string>


  Magasin::Magasin():
 _idCourantClient(0) , _idCourantProduit(0)
 {}

 int Magasin::nbClients() const{
    return _clients.size();
 }

 void Magasin::ajouterClient(const std::string & nom){
     client client(_idCourantClient,nom);
     _clients.push_back(client);
     _idCourantClient++;
 }

 void Magasin::afficherClients() const {
     for(int i=0; i<nbClients();++i){
            _clients[i].afficherClient();
     }
 }

 void Magasin::supprimerClient(int idClient){

     try {
         if (idClient<0 || idClient >=nbClients())
             throw  std::string ("erreur : ce client n’existe pas");
         else {
             std::swap(_clients[idClient],_clients[nbClients()-1]);
             _clients.pop_back();
         }
     } catch ( std::string const& chaine) {
         std::cerr << chaine << std::endl;
     }
 }

 // PARTIE LOCATION
 int Magasin::nbLocations() const{
    return _locations.size();
 }

 void Magasin::ajouterLocation(int idClient , int idProduit){
     Location locat;
     locat._idClient=idClient;
     locat._idProduit=idProduit;
     _locations.push_back(locat);
 }

 void Magasin::afficherLocations() const {
     for(int i=0; i<nbLocations();++i){
            _locations[i].afficherLocation();
     }
 }

 void Magasin::supprimerLocation(int idClient , int idProduit){
     for(int i=0; i<nbLocations();++i){
         if(_locations[i]._idClient==idClient && _locations[i]._idProduit==idProduit){
              std::swap(_locations[i],_locations[nbLocations()-1]);
              _locations.pop_back();
         }

     }
 }

 bool Magasin::trouverClientDansLocation(int idClient) const{
     for(int i=0; i<nbLocations();++i){
        if(_locations[i]._idClient==idClient){
            return true;
        }
     }
     return false;
 }

 //std::vector<int> calculerClientsLibres() const {}
 //bool trouverProduitDansLocation(int idProduit) const {}
 //std::vector<int> calculerProduitsLibres() const{}









