#include <iostream>
#include <string>
#include <vector>

#include <gtest/gtest.h>
#include "../src/Fraction.hpp"

//test si = 3/2
TEST(stringAfficher, afficher)
{
	Fraction *fraction = new Fraction(3,2);
	EXPECT_EQ("3/2",fraction->Afficher());
}

