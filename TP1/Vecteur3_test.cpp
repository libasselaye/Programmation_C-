#include "Vecteur3.hpp"
#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(GroupVecteur3) { };

TEST(GroupVecteur3, test_norme) {  // premier test
	Vecteur3 vector;
    vector.x=2;
    vector.y=3;
    vector.z=6;
       double result = norme(vector);
       CHECK_EQUAL(7, result);   
}

TEST(GroupVecteur3, test_produit_scalaire) {  // premier test
	Vecteur3 vector;
	Vecteur3 vector1;
    vector.x=2;
    vector.y=3;
    vector.z=6;
    
    vector1.x=1;
    vector1.y=2;
    vector1.z=3;
       double result = produit_scalaire(vector,vector1);
       CHECK_EQUAL(26, result);   
}
