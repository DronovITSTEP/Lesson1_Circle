#pragma once
#include <iostream>

template <class T>
class Circle
{
	T R;
	const float pi = 3.14;

public:
	Circle(T R) : R{ R } {}


private:

	// все ф-и сделаем дружественными (можно еще реализовать через отделые методы)
	friend bool operator==(Circle& c1, Circle& c2) {
		return c1.R == c2.R;
	}
	friend bool operator >(Circle& c1, Circle& c2) {
		return c1.getLength() > c2.getLength();
	}
	friend bool operator <(Circle& c1, Circle& c2) {
		return c1.R < c2.R;
	}

	friend Circle operator +=(Circle& c1, T r) {
		return c1.R += r;
	}

	// сделать обязательнуй проверку
	friend Circle operator -=(Circle& c1, T r) {
		if (c1.R >= r) return c1.R -= r;
		std::cout << "Error";
	}

public:
	double getLength() {
		return 2 * R * pi;
	}
};

