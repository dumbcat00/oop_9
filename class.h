#pragma once
#include <iostream>
using namespace std;

class Property {
protected:
	double worth;
public:
	Property(double w=0) {
		worth = w;
	}
	virtual double tax() = 0;
};

class Apartment : public Property {
public:
	Apartment(double w = 0) {
		worth = w;
	}
	double tax() override {
		return worth / 1000;
	}
};

class Car :public Property {
public:
	Car(double w = 0) {
		worth = w;
	}
	double tax() override {
		return worth / 200;
	}
};

class CountryHouse :public Property {
public:
	CountryHouse(double w = 0) {
		worth = w;
	}
	double tax() override {
		return worth / 500;
	}
};
