#include "Bouteille.hpp"

#include <gtest/gtest.h>
#include <sstream>

TEST(GroupBouteille, Bouteille_1) {
    Bouteille b{"cyanure", "2013-08-18", 0.25};
    ASSERT_EQ(b._nom, "cyanure");
    ASSERT_EQ(b._date, "2013-08-18");
    ASSERT_EQ(b._volume, 0.25);
}

TEST(GroupBouteille, Bouteille_2) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	Bouteille b{"cyanure", "2013-08-18", 0.25};
	std::ostringstream stream;
	stream << b;
    ASSERT_EQ(stream.str(), "cyanure;2013-08-18;0,25\n");
	std::locale::global(vieuxLoc);
}

TEST(GroupBouteille, Bouteille_3) {
	std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));
	Bouteille b{"a", "b", 2};
	std::istringstream stream("cyanure;2013-08-18;0,25\n");
	stream >> b;
    ASSERT_EQ(b._nom, "cyanure");
    ASSERT_EQ(b._date, "2013-08-18");
    ASSERT_EQ(b._volume, 0.25);
	std::locale::global(vieuxLoc);
}
