#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "reservation.h"
#include <iostream>
#include <vector>
using namespace std;

class Customer{
    private:
        int customerID;
        string customerName;
        string customerContact;
        vector<Reservation> reservations;
    
    public:
        Customer();   // Default constructor
        Customer(int id, string name, string info);

        //Getters
        int getID() const;
        string getName() const;
        string getInfo() const;
        //Setter
        void addReservation(const Reservation& reservation);

        //display customer informations
        void customerAbouts() const;

        void displayReservations() const;
};

#endif