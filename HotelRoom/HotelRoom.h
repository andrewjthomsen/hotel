#ifndef HOTELROOM_H
#define HOTELROOM_H
#include <string>
#include <iostream>
#include <exception>

using namespace std;

class HotelRoom {
private:
	int number;
	double rate;

public:
	HotelRoom() {
		number = 0;
		rate = 0.0;
	}

	HotelRoom(int n, double r) {
		if (n < 0 || r < 0) {
			throw invalid_argument("Negative Parameter!");
		}
		number = n;
		rate = r;
	}
	// get functions
	int getNumber() {
		return number;
	}
	double getRate() {
		return rate;
	}
	// set functions
	void setNumber(int number) {
		if (number < 0) {
			throw invalid_argument("Negative Parameter!");
		}
		this->number = number;
	}
	void  setRate(double rate) {
		if (rate < 0) {
			throw invalid_argument("Negative Parameter!");
		}
		this->rate = rate;
	}
	// virtual keyword allows for polymorphism in the method. Allows other subclasses to inherit from the super class
	virtual double calculateBill() {
		// return number of days stayed x rate
		return 0.0;

	}
	virtual string toString() {
		return ("Room Number: " + to_string(number) + " Rate: $" + to_string(rate));
	}
	void displayHotelRoom(HotelRoom& room) {
		cout << "$" << room.calculateBill() << endl;
		cout << room.toString() << endl;
	}
};


#endif