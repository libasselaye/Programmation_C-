#include "Inventaire.hpp"

#include <gtest/gtest.h>
#include <sstream>

TEST(GroupInventaire, Inventaire_1) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	Inventaire inventaire;
	inventaire._bouteilles.push_back(Bouteille{"cyanure", "2013-08-18", 0.25});
	inventaire._bouteilles.push_back(Bouteille{"mescaline", "2013-06-18", 0.1});
	std::ostringstream oss;
	// TODO decommenter
	//oss << inventaire;
	//ASSERT_EQ(oss.str(), "cyanure;2013-08-18;0,25\nmescaline;2013-06-18;0,1\n");
	std::locale::global(vieuxLoc);
}

TEST(GroupInventaire, Inventaire_2) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	Inventaire inventaire;
	std::istringstream iss("cyanure;2013-08-18;0,25\nmescaline;2013-06-18;0,1\n");
	// TODO decommenter
	//iss >> inventaire;
	std::ostringstream oss;
	// TODO decommenter
	//oss << inventaire;
	//ASSERT_EQ(oss.str(), "cyanure;2013-08-18;0,25\nmescaline;2013-06-18;0,1\n");
 	std::locale::global(vieuxLoc);
}

TEST(GroupInventaire, Inventaire_3) {
	auto funcCompare2Bouteilles =
			[] (const Bouteille &b1, const Bouteille &b2)
			{ return b1._nom < b2._nom; };
	Bouteille b1{"nom1", "date", 42};
	Bouteille b2{"nom0", "date", 37};
	ASSERT_EQ( funcCompare2Bouteilles(b1,b2), false );
}

TEST(GroupInventaire, Inventaire_4) {
	auto funcCompare2Bouteilles =
			[] (const Bouteille &b1, const Bouteille &b2)
			{ return b1._nom < b2._nom; };
	Bouteille b1{"nom1", "date", 42};
	Bouteille b2{"nom2", "date", 37};
	ASSERT_EQ( funcCompare2Bouteilles(b1,b2), true );
}

