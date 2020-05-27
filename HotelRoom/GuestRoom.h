#ifndef GUESTROOM_H
#define GUESTROOM_H
#include "HotelRoom.h"
// Lets compiler know GuestRoom is a subclass of hotelroom
class GuestRoom :public HotelRoom {
private:
	int capacity;
	int status;
	int days;
public:
	GuestRoom() {
		capacity = 0;
		status = 0;
		days = 0;
	}
	// takes in capacity, status, days, number and rate as parameters
	GuestRoom(int c, int s, int d, int n, double r) {
		if (status > capacity) {
			throw out_of_range("Too many guests!");
		}
		capacity = c;
		status = s;
		days = d;
		// instead of direct initialization, call the parent class setter method, in this case, setNumber and setRate.
		// Setting number = n and rate = r won't work. Which is why calling the parent class setter method was needed
		setNumber(n);
		setRate(r);
	}
	// get methods
	int getCapacity() {
		return capacity;
	}
	int getStatus() {
		return status;
	}
	int getDays() {
		return days;
	}
	// set methods
	void setCapacity(int c) {
		capacity = c;
	}
	void setStatus(int s) {
		if (s > capacity) {
			throw out_of_range("Too many guests!");
		}
		status = s;
	}
	void setDays(int d) {
		days = d;
	}
	// Calculates guest's bill
	double calculateBill() {
		// return number of days stayed x rate
		return getRate() * days;

	}
	string toString() {
		return ("GuestRoom Number: " + to_string(getNumber()) + " Rate: $" + to_string(getRate()) + "\n" +
			to_string(status) + " of max " + to_string(capacity) + " occupants staying " + to_string(days) + " day(s)");

	}
};
#endif // !GUESTROOM_H

