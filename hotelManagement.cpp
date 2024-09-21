#include "hotelManagement.h"

HotelManagement::HotelManagement(int totalRooms){
    // initialising rooms

    for(int i = 1; i <= totalRooms; i++){
        roomAvailability[i] = true;
    }
}

void HotelManagement::addCustomer(const int& id, const string& name, const string& contact){
    Customer newCustomer(id, name, contact);
    customers[id] = newCustomer;    
    cout << "Customer added: " << name << endl;
}

void HotelManagement::makeReservation(const int& roomNo, const string& checkin, const string& checkout, const int& customerID){
    if (roomAvailability[roomNo])
    {
        roomAvailability[roomNo] = false;
        Reservation newReservation(roomNo, checkin, checkout, customerID);
        int reservationID = reservations.size() + 1;
        reservations[reservationID] = newReservation;
        customers[customerID].addReservation(newReservation);
        cout << "Reservation made for customer #" << customerID << " in room " << roomNo << endl;
    }
    else{
        cout << "Room " << roomNo << " is already reserved." << endl; 
    }
    
}

void HotelManagement::checkRoomAvailability() const{
    for(const auto& room : roomAvailability){
        cout << "Room "<< room.first << " is " << (room.second ? "available" : "reserved") << endl;
    }
}

void HotelManagement::cancelReservation(int reservationID) {
    if (reservations.find(reservationID) != reservations.end())
    {
        Reservation res = reservations[reservationID];
        roomAvailability[res.getRoomNum()] = true;
        reservations.erase(reservationID);  // Remove reservation
        std::cout << "Reservation " << reservationID << " canceled.\n";
    } else {
    std::cout << "Reservation ID not found.\n";
    }
}

void HotelManagement::viewCustomer() const{
    cout << "Customer List: " << endl;
    for(const auto& customerPair : customers){
        customerPair.second.customerAbouts();
    }
}

void HotelManagement::viewReservations() const{
    cout << "Reservation List: " << endl;
    for(const auto& resPair : reservations){
        resPair.second.displayReservationInfo();
    }
}