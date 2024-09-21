#include "room.h"
#include "customer.h"
#include "reservation.h"
#include "hotelManagement.h"

int main(){
    HotelManagement hotel(10); //hotel with 10 rooms
    int choice;

    do
    {
        cout << "\n\n************ Hotel Management System ************\n";
        cout << "1. Add Customer\n";
        cout << "2. Make Reservation\n";
        cout << "3. Check Room Availability\n";
        cout << "4. View All Customers\n";
        cout << "5. View All Reservations\n";
        cout << "6. Cancel Reservation\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:{
            cout << "\n1. Add Customer\n\n";
            string name, contact;
            int id;
            cout << "Enter Customer Name: ";
            cin >> name;
            cout << "Enter Contact Info: ";
            cin >> contact;
            cout << "Create Customer ID: ";
            cin >> id;
            hotel.addCustomer(id, name, contact);
            break;
        }
        case 2:{
            cout << "\n2. Make Reservation\n\n";
            int roomNum, id;
            string checkin, checkout;
            cout<< "Enter the Customer ID: ";
            cin >> id;
            cout << "Enter Room Number: ";
            cin >> roomNum;
            cout << "Enter Check-in-Date: ";
            cin >> checkin;
            cout << "Enter Check-out-Date: ";
            cin >> checkout;
            hotel.makeReservation(roomNum,checkin,checkout,id);
            break;
        }
        case 3: {
            cout << "\n3. Check Room Availability\n\n";
            hotel.checkRoomAvailability();
            break;
        }
        case 4: {
            cout << "\n4. View All Customers\n\n";
            hotel.viewCustomer();
            break;
        }
        case 5: {
            cout << "\n5. View All Reservations\n\n";
            hotel.viewReservations();
            break;
        }
        case 6: {
            cout << "\n6. Cancel Reservation\n\n";
            int reservationId;
            cout << "Enter Reservation ID: ";
            cin >> reservationId;
            hotel.cancelReservation(reservationId);
            break;
        }
        case 0:{
            cout << "Exiting...\n";
            break;
        }
        
        default:
            break;
        }

    } while (choice != 0);

    return 0;
}