#ifndef ROOM_H
#define ROOM_H
 
#include <iostream>
using namespace std;

class Room{
    private:
        int roomNo;
        string roomType;
        double roomPrice;
        bool roomAvailability = true;

    public:
        Room(int num, string type, double price);

        //Getters
        int getRoomNum() const;
        string getRoomType() const; 
        double getRoomPrice() const; 
        bool getRoomAvailability() const;

        //Setters
        bool setRoomAvailability(bool availability);

        //display room details
        void roomDetails() const;
};

#endif