// HotelRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "GuestRoom.h"
int main()
{
	try {
		HotelRoom highRollerSuite(4, -500);
		cout << highRollerSuite.toString();
	}
	catch  (exception & ex) {
		cout << ex.what() << endl;
	}
	HotelRoom deluxeSuite(43, 1000);
	GuestRoom spareRoom(2, 2, 3, 2, 200);
	cout << spareRoom.calculateBill() << endl;
	cout << deluxeSuite.toString() << endl;
	return 0;
}