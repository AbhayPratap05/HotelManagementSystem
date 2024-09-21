#include "room.h"

    Room::Room(int num, string type, double price):
    roomNo(num), roomType(type), roomPrice(price), roomAvailability(true){}

        //Getters
        int Room::getRoomNum() const{return roomNo;}
        string Room::getRoomType() const{return roomType;}
        double Room::getRoomPrice() const{return roomPrice;}
        bool Room::getRoomAvailability() const{return roomAvailability;}

        //Setters
        bool Room::setRoomAvailability(bool availability){return roomAvailability = availability;}

        //display room details
        void Room::roomDetails() const{
            cout << "Room No: " << roomNo << endl;
            cout << "Room Type: " << roomType << endl;
            cout << "Room Price (per night) $: " << roomPrice << endl;
            cout << "Room Availability: " << (roomAvailability ? "Available" : "Booked") << endl;
        }
