#ifndef MEETINGROOM_H
#define MEETINGROOM_H
#include "HotelRoom.h"
class MeetingRoom : public HotelRoom {
private:
	// represent the number of seats in room
	int seats;
	// 1 if room is booked and 0 if not
	int status;
public:
	MeetingRoom() {
		status = 0;
		seats = 0;
	}
	MeetingRoom(int seats, int bookedStatus, int n, double r) {
		status = bookedStatus;
		this->seats = seats;
		setNumber(n);
		setRate(r);

	}
	// getter methods
	int getSeats() {
		return seats;
	}
	int getStatus() {
		return status;
	}
	// setter methods- never return anything, void
	void setSeats(int seat) {
		seats = seat;
	}
	void setStatus(int status) {
		this->status = status;
	}
	string toString() {
		return ("Meeting Room Number: " + to_string(getNumber()) + " Rate: $" + to_string(getRate()) + "\nNumber of Seats: " + to_string(seats) + " Status: " + to_string(status));
	}
	double calculateBill()
	{
		// # of seats multiplied by 10 plus 500
		// cast seats an integer to a double to return a double
		return (double)seats * 10.00 + 500.00;
	}
};
#endif 


