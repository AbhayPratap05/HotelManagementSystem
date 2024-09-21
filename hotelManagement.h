#ifndef HOTEL_MANAGEMENT_H
#define HOTEL_MANAGEMENT_H

#include <iostream>
#include <unordered_map>
#include "customer.h"
#include "reservation.h"

using namespace std;

class HotelManagement{
    private:
        unordered_map<int, Customer> customers;
        unordered_map<int, Reservation> reservations;
        unordered_map<int, bool>roomAvailability;
    
    public:
        HotelManagement(int totalRooms);

        void addCustomer(const int& id, const string& name, const string& contact);

        void makeReservation(const int& roomNo, const string& checkin, const string& checkout, const int& customerID);

        void checkRoomAvailability() const;

        void cancelReservation(int reservationID);

        void viewCustomer() const;

        void viewReservations() const;
};

#endif