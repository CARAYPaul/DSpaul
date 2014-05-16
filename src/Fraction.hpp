/*
 * Fraction.hpp
 *
 *  Created on: 16 mai 2014
 *      Author: paul
 */

#ifndef FRACTION_HPP_
#define FRACTION_HPP_
#include <vector>
#include <string>
#include <sstream>

using namespace std;


class Fraction {

	public:
		Fraction();
		Fraction(int n, int d);

		string Afficher();
		string toString(const int nb);

		// setters & getters
		const int getNumerateur() const;
		const int getDenominateur() const;
		void setNumerateur(const int iNumerateur);
		void setDenominateur(const int iDenominateur);

		void addition(const int add);
		void addition(const Fraction& ma_fraction);

	private:
		int _numerateur;
		int _denominateur;
};

#endif /* FRACTION_HPP_ */
