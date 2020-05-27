// HotelRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "GuestRoom.h"
#include "MeetingRoom.h"
int main()
{
	// Error handling
	try {
		HotelRoom highRollerSuite(4, -500);
		cout << highRollerSuite.toString();
	}
	catch (exception& ex) {
		cout << ex.what() << endl;
	}

	HotelRoom deluxeSuite(43, 1999.55);
	GuestRoom spareRoom(2, 2, 3, 2, 399.99);
	// params: seats, status, number, rate
	MeetingRoom aztecGrandHall(202, 1, 2012, 1500.77);
	cout << deluxeSuite.toString() << endl;
	cout << spareRoom.calculateBill() << endl;
	cout << aztecGrandHall.calculateBill() << endl;
	cout << spareRoom.toString() << endl;

	return 0;
}