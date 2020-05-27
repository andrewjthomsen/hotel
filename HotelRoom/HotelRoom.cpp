// HotelRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "GuestRoom.h"
#include "MeetingRoom.h"
int main()
{
	HotelRoom deluxeSuite(43, 1999.55);
	GuestRoom spareRoom(2, 2, 3, 2, 399.99);
	// params: seats, status, number, rate
	MeetingRoom aztecGrandHall(202, 1, 2012, 1500.77);
	deluxeSuite.displayHotelRoom(deluxeSuite);
	spareRoom.displayHotelRoom(spareRoom);
	aztecGrandHall.displayHotelRoom(aztecGrandHall);
	return 0;
}