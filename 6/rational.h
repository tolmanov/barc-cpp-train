/*
 * rational.h
 *
 *  Created on: 20 Mar 2020
 *      Author: peter
 */
#pragma once
#include<iostream>

template<typename T> class rational;

template<typename T>
std::ostream& operator <<(std::ostream &out, const rational<T> &a);
template<typename T>
std::istream& operator >>(std::istream &in, rational<T> &a);

template<typename T> T gcd(T a, T b);

template<typename T> T gcd(T a, T b) {
	while ((a != 0) && (b != 0)) {
		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	return (a == 0) ? b : a;
}


template<typename T> class rational {
private:
	T m, n;
public:
	rational<T>(T m, T n) :
			m { m }, n { n } {
	}
	rational<T>() {
	}
	friend std::ostream& operator << <>(std::ostream &out, const rational<T> &a);
	friend std::istream& operator >> <>(std::istream &in, rational<T> &a);
	rational<T> operator+(rational<T> const &b) const;
	rational<T> operator-(const rational<T> &b) const;
	rational<T> operator*(const rational<T> &b) const;
	rational<T> operator/(const rational<T> &b) const;
};


template<typename T>
rational<T> rational<T>::operator+(rational<T> const &b) const{
	T numer = m * b.n + n * b.m;
	T denom = n * b.n;
	T div = gcd<T>(numer, denom);
	auto sum = rational<T>(numer / div, denom / div);
	return sum;
}

template<typename T>
rational<T> rational<T>::operator-(const rational<T> &b) const {
	int numer = m * b.n - n * b.m;
	int denom = n * b.n;
	int div = gcd<T>(numer, denom);
	auto sum = rational<T>(numer / div, denom / div);
	return sum;
}

template<typename T>
rational<T> rational<T>::operator*(const rational<T> &b) const {
	int numer = m * b.m;
	int denom = n * b.n;
	int div = gcd<T>(numer, denom);
	auto mult = rational<T>(numer / div, denom / div);
	return mult;
}

template<typename T>
rational<T> rational<T>::operator/(const rational<T> &b) const {
	int numer = m * b.n;
	int denom = n * b.m;
	int div = gcd<T>(numer, denom);
	auto mult = rational<T>(numer / div, denom / div);
	return mult;
}

template <typename T>
std::ostream& operator <<(std::ostream &out, const rational<T>&a) {
	out << a.m;
	out << "/" << a.n << std::endl;
	return out;
}

template <typename T>
std::istream& operator >>(std::istream &in, rational<T>&a) {
	std::cout << "Enter numerator";
	in >> a.m;
	std::cout << "Enter denominator";
	in >> a.n;
	return in;
}


