#include "Magasin.hpp"
#include "client.hpp"


Magasin::Magasin():
 _idCourantClient(0) , _idCourantProduit(0)
 {}

 long Magasin::nbClients() const{
    return _clients.size();
}

 void Magasin::ajouterClient(const std::string & nom){
     client client(_idCourantClient,nom);

     _clients.push_back(client);
     _idCourantClient++;
 }

 void Magasin::afficherClients() const {
     for(int i=0; i<_clients.size();++i){
            _clients[i].afficherClient();
     }
 }

 void Magasin::supprimerClient(int idClient){


 }
