#include <iostream>
#include <string>
#include <vector>

#include <gtest/gtest.h>
#include "../src/Fraction.hpp"

//test si 3/2 = 3/2
TEST(stringAfficher, afficher)
{
	Fraction *fraction = new Fraction(3,2);
	EXPECT_EQ("3/2",fraction->Afficher());
}

//test si 1/2 + 1 = 3/2
TEST(stringAfficher, addition)
{
	Fraction *fraction = new Fraction(1,2);
	fraction->addition(1);
	EXPECT_EQ("3/2",fraction->Afficher());
}

//test si 1/2 + 4/2 = 10/4
TEST(stringAfficher, additionfraction)
{
	Fraction *fraction = new Fraction(1,2);
	Fraction *fraction1 = new Fraction(4,2);
	fraction->addition(*fraction1);
	EXPECT_EQ("10/4",fraction->Afficher());
}

//test si 1/2 + 1 = 3/2
TEST(stringAfficher, operateur) {
	Fraction *fraction = new Fraction(1,2);
	fraction->operator +(1);
	EXPECT_EQ("3/2",fraction->Afficher());
}

//test si 1/2 + 4/2 = 10/4
TEST(stringAfficher, operateurfraction) {
	Fraction *fraction = new Fraction(1,2);
	Fraction *fraction1 = new Fraction(4,2);
	fraction->operator +(*fraction1);
	EXPECT_EQ("10/4",fraction->Afficher());
}
