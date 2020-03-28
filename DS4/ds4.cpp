
class Personne {
    private:
        std::string _nom;
    public:
        Personne(const std::string & nom) : _nom(nom) {}
        void afficher() const {
            std::cout << _nom << std::endl;
        }
};
/////////////////////////////////////////////////// icilabas
class Personne {
    protected:
        std::string _nom;
    public:
        Personne(const std::string & nom) : _nom(nom) {}
        void afficher() const {
            std::cout << _nom << std::endl;
        }
};

class Etudiant : public Personne {
    private:
        float _moyenne;
    public:
        Etudiant(const std::string & nom, float moyenne) :
            Personne(nom), _moyenne(moyenne) {}
        void afficher() const {
            std::cout << _nom << ";" << _moyenne << std::endl;
        }
};

/////////////////////////////////////////////////////
int main() {
    Personne p1("toto");
    p1.afficher();
    Etudiant e1("tutu", 42.f);
    e1.afficherEtudiant();
    return 0;
}

//////////////////////////////////////////////// reponse de icilabas
class Personne {
    protected:
        std::string _nom;
    public:
        Personne(const std::string & nom) : _nom(nom) {}
        virtual void afficher() const {
            std::cout << _nom << std::endl;
        }
};

////////////////////////////////////////////////////////////
class Prof : public Personne {
    private:
        float _salaire;
    public:
        Prof(const std::string & nom, float salaire) :
            Personne(nom), _salaire(salaire) {}
        void afficher() const override {
            std::cout << _nom << ";" << _salaire << std::endl;
        }
};

////////////////////////////afficher est en virtual pur
virtual void afficher() const = 0;

/////////////////////////////////////////////////////////////
class ProfAbstrait : public Personne {
    protected:
        float _salaire;
    public:
        ProfAbstrait(const std::string & nom, float salaire) :
            Personne(nom), _salaire(salaire) {}
};

class Prof: public ProfAbstrait {
    public:
        Prof(const std::string & nom, float salaire) :
            ProfAbstrait(nom, salaire) {}
        void afficher() const override {
            std::cout << _nom << ";" << _salaire << std::endl;
        }
};
