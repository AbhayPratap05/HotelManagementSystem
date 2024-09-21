#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
using namespace std;

class Reservation{
    private:
        int roomNo;
        string checkInDate;
        string checkOutDate;
        int customerID;
    
    public:
        Reservation();

        Reservation(int num, string checkin, string checkout, int id);

        //Getters
        int getRoomNum() const;
        string getCheckInDate() const;
        string getCheckOutDate() const;
        int getCustomerID() const;

        void displayReservationInfo() const;
};

#endif