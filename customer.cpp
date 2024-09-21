#include "customer.h"
#include "reservation.h"


Customer::Customer() : customerID(0), customerName(""), customerContact("") {};   // Default constructor
Customer::Customer(int id, string name, string info) : customerID(id), customerName(name), customerContact(info) {}

//Getters
int Customer::getID() const{return customerID;}
string Customer::getName() const {return customerName;}
string Customer::getInfo() const{return customerContact;}

//Setter
void Customer::addReservation(const Reservation& reservation){
    reservations.push_back(reservation);
}

//display customer informations
void Customer::customerAbouts() const{
    cout << "Customer ID: " << customerID << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Customer Contact: " << customerContact << endl;
    cout << "Total Reservations: " << reservations.size() << endl;
}

void Customer::displayReservations() const{
    if (reservations.empty())
    {
        cout << "No reservations for " << customerName << " found" << endl;
    }
    else{
        cout << "Reservations for " << customerName << ": " << endl;
        for(const auto& res : reservations){
            res.displayReservationInfo();
            cout << "----------------------------------------" << endl;
        }
    }
    
}
