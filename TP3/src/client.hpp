#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <string>

class client
{
private:
     std::string _nom;
     int _id;

public:
    client(int id , const std::string & nom );
    int getId() const;
    const std::string & getNom() const;
    void afficherClient() const;
};

#endif // CLIENT_HPP
