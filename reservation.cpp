#include "reservation.h"

Reservation::Reservation() : roomNo(0), checkInDate(""), checkOutDate(""), customerID(0) {}  // Default constructor

Reservation::Reservation(int num, string checkin, string checkout, int id) : roomNo(num), checkInDate(checkin), checkOutDate(checkout), customerID(id) {}

//Getters
int Reservation::getRoomNum() const{return roomNo;}
string Reservation::getCheckInDate() const{return checkInDate;}
string Reservation::getCheckOutDate() const{return checkOutDate;}
int Reservation::getCustomerID() const{return customerID;}

void Reservation::displayReservationInfo() const{
    cout << "Room Number: " << roomNo << endl;
    cout << "Check-in-date: " << checkInDate << endl;
    cout << "Check-out-date: " << checkOutDate << endl;
    cout << "CustomerID: " << customerID <<endl;
}
