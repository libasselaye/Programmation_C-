#include "Liste.hpp"

#include <gtest/gtest.h>
#include <sstream>

TEST(GroupListe, TestListe_1)  {
	Liste liste;
    ASSERT_EQ(liste.empty(), true);
}

TEST(GroupListe, TestListe_2)  {
	Liste liste;
	liste.push_front(1);
    ASSERT_EQ(liste.empty(), false);
    ASSERT_EQ(liste.front(), 1);
}

TEST(GroupListe, TestListe_3)  {
	Liste liste;
	liste.push_front(1);
	liste.push_front(2);
    ASSERT_EQ(liste.empty(), false);
    ASSERT_EQ(liste.front(), 2);
}

TEST(GroupListe, TestListe_4)  {
	Liste liste;
	liste.push_front(1);
	liste.push_front(2);
	liste.clear();
    ASSERT_EQ(liste.empty(), true);
}

TEST(GroupListe, TestListe_5)  {
	Liste liste;
    ASSERT_EQ(liste.begin() != liste.end(), false);
}

TEST(GroupListe, TestListe_6)  {
	Liste liste;
	liste.push_front(37);
    ASSERT_EQ(liste.begin() != liste.end(), true);
}

TEST(GroupListe, TestListe_7)  {
	Liste liste;
	liste.push_front(37);
	Liste::iterator iter = liste.begin();
    ASSERT_EQ(iter != liste.end(), true);
	++iter;
    ASSERT_EQ(iter != liste.end(), false);
}

TEST(GroupListe, TestListe_8)  {
	Liste liste;
	liste.push_front(37);
	Liste::iterator iter = liste.begin();
    ASSERT_EQ(*iter, 37);
}

TEST(GroupListe, TestListe_9)  {
	Liste liste;
	liste.push_front(37);
	liste.push_front(42);
	std::ostringstream stream;
	stream << liste;
    ASSERT_EQ(stream.str(), "42 37 ");
}

