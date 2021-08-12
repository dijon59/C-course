#include <iostream>
#include <vector>
#include <string>
using namespace std;

const double COST = 1600.00; // cost for economy class

struct TimeOptionDetail {
    double departureTime;
    double arrivedTime;
    string fSeatNumberArray[4][6] = {{"A1", "A2", "A3", "A4", "A5", "A6"},
                                        {"B1", "B2", "B3", "B4", "B5", "B6"},
                                        {"C1", "C2", "C3", "C4", "C5", "C6"},
                                        {"D1", "D2", "D3", "D4", "D5", "D6"},};
    string ecSeatNumberArray[4][6] = {{"E1", "E2", "E3", "E4", "E5", "E6"},
                                         {"F1", "F2", "F3", "F4", "F5", "F6"},
                                         {"G1", "G2", "G3", "G4", "G5", "G6"},
                                         {"H1", "H2", "H3", "H4", "H5", "H6"}};
    string ecLastSeatNumberArray[2] = {"I1", "I2"};
    vector<string> bookedSeats{};
    string passengerName;
    string flightClass;
};
void bookSeat (string seat_number, TimeOptionDetail array_time[], int index, bool &isCorrectOption);
void displaySeats (TimeOptionDetail array_time[], int index, string passenger_name);
bool contains (vector<string> array, string elem);
bool contains (vector<string> array);
void displayTicket (TimeOptionDetail array_time[], int index, string seat_number);
string getSeatNumber (vector<string> booked_seats, string seat_number);
void continueBookingChoice (bool &anotherBooking);
void displayBookings(TimeOptionDetail arrayTime[]);
void displayTimeOption(TimeOptionDetail arrayTime[], bool isCorrectOption, int time_slot,
                      string passenger_name, bool &anotherBooking, string seat_number);
void validateSeat(TimeOptionDetail arrayTime[], int index, string seat_number);


int main() {
    bool anotherBooking = false;
    bool isCorrectOption = true;
    int time_slot;
    string passenger_name;
    char seat_number[1];
    TimeOptionDetail array_time[] = {{7.00,  9.30},
                               {9.00,  11.30},
                               {11.00, 13.30},
                               {13.00, 15.30},
                               {15.00, 17.00}};
    do {
        cout << "Welcome to COS1511 Flight Booking System";
        cout << "\n";
        cout << "Enter full name\n";
        getline(cin, passenger_name);
        displayTimeOption(array_time, isCorrectOption, time_slot, passenger_name, anotherBooking, seat_number);
    }while(anotherBooking);
    displayBookings(array_time);
    return 0;
}

void displayTimeOption(TimeOptionDetail arrayTime[], bool isCorrectOption, int time_slot,
        string passenger_name, bool &anotherBooking, string seat_number) {
    cout << "The available travel times for flights are:" << "\n";
    cout << "\tdepart\tArrive" << "\n";
    int count = 1;
    for (int i = 0; i < 5; i++) {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << to_string(count) << ".\t" << arrayTime[i].departureTime << "\t" << arrayTime[i].arrivedTime
             << "\n";
        count++;
    }
    cout << "Choose the time by entering the option number from displayed list:";
    isCorrectOption = true;
    while (isCorrectOption) {
        cin >> time_slot;
        cin.ignore();
        switch (time_slot) {
            case 1: {
                displaySeats(arrayTime, 0, passenger_name);
                bookSeat(seat_number, arrayTime, 0, isCorrectOption);
                continueBookingChoice(anotherBooking);
                break;
            }
            case 2: {
                displaySeats(arrayTime, 1, passenger_name);
                bookSeat(seat_number, arrayTime, 1, isCorrectOption);
                continueBookingChoice(anotherBooking);
                break;
            }
            case 3: {
                displaySeats(arrayTime, 2, passenger_name);
                bookSeat(seat_number, arrayTime, 2, isCorrectOption);
                continueBookingChoice(anotherBooking);
                break;
            }
            case 4: {
                displaySeats(arrayTime, 3, passenger_name);
                bookSeat(seat_number, arrayTime, 3, isCorrectOption);
                continueBookingChoice(anotherBooking);
                break;
            }
            case 5: {
                displaySeats(arrayTime, 4, passenger_name);
                bookSeat(seat_number, arrayTime, 4, isCorrectOption);
                continueBookingChoice(anotherBooking);
                break;
            }
            default:
                cout << "Incorrect option! Please choose from 1-5.\n";
        }
    }
}

void displayBookings(TimeOptionDetail arrayTime[]) {
    string ref;
    for (int i = 0; i < 5; i++) {
        ref = arrayTime[i].departureTime < 12 ? "a.m": "p.m";
        cout << "Number of bookings made for " << arrayTime[i].departureTime << " " << ref << ":"
             << arrayTime[i].bookedSeats.size() << "\n";
    }
}

void continueBookingChoice(bool &anotherBooking) {
    char choice;
    cout << "Do you want to make another booking(Y/N)?";
    cin >> choice;
    cin.ignore();
    if (toupper(choice) == 'Y') {
        anotherBooking = true;
    }
    else if (toupper(choice) == 'N') {
        anotherBooking = false;
    }
}

string getSeatNumber(vector<string> booked_seats, string seat_number) {
    string seat;
    for (int i = 0; i < booked_seats.size(); i++) {
        if (seat_number == booked_seats[i]) {
            seat = seat_number;
        }
    }
    return seat;
}

double calculateTicketCost(string ticketClass) {
    return "First class" == ticketClass ? (COST + (COST*20)/100): COST;
}

void displayTicket(TimeOptionDetail array_time[], int index, string seat_number) {
    string ticketClass = array_time[index].flightClass;

    cout << "***********************\n";
    cout << "Travel ticket for FLIGHT\n";
    cout << "***********************\n";

    cout << "Name\t\t\t: " << array_time[index].passengerName << "\t\t" << "\tTravel Ticket class: " << ticketClass << "\n";
    cout << "\t\t\t\t\t\tSeat No\t\t\t: " << getSeatNumber(array_time[index].bookedSeats, seat_number) << "\n";
    cout << "Departure\t\t: " << "Johannesburg\t\tDeparture Time\t\t: "  << array_time[index].departureTime << "\n";
    cout << "Destionation\t\t: " << "Cape Town\t\tArrival Time\t\t: " << array_time[index].arrivedTime << "\n";

    cout << "************************\n";
    cout << calculateTicketCost(ticketClass) << " Thank you for booking with COS1511. Your travel agent for queries is Annie Mathew\n";
    cout << "************************\n";
}

void validateSeat(TimeOptionDetail arrayTime[], int index, string seat_number) {
    while (contains(arrayTime[index].bookedSeats, seat_number)) {
        cout << "Sorry, the seat is taken. Please choose a seat that is available" << "\n";
        cin >> seat_number;
    }
}

void bookSeat(string seat_number, TimeOptionDetail array_time[], int index, bool &isCorrectOption) {
    cout << "Please key in a seat number to choose a seat(eg:A2):";
    cin >> seat_number;
    cin.ignore();
    validateSeat(array_time, index, seat_number);
    array_time[index].bookedSeats.push_back(seat_number);
    isCorrectOption = false;
    for (int i = 0; i < 4; i++) {
        for (int y = 0; y < 6; y++) {
            if (seat_number == array_time[index].fSeatNumberArray[i][y]) {
                array_time[index].fSeatNumberArray[i][y] = "**";
                array_time[index].flightClass = "First class";
            }
            if (seat_number == array_time[index].ecSeatNumberArray[i][y]) {
                array_time[index].ecSeatNumberArray[i][y] = "**";
                array_time[index].flightClass = "Economy class";
            }
            if (seat_number == array_time[index].ecLastSeatNumberArray[y]) {
                array_time[index].ecLastSeatNumberArray[y] = "**";
                array_time[index].flightClass = "Economy class";
            }
        }
    }
    displayTicket(array_time, index, seat_number);
}

void displaySeats(TimeOptionDetail array_time[], int index, string passenger_name) {
    cout << "The available seats for 7.00 are as follows:" << "\n";
    cout << "First class(1920.00)" << "\n";
    array_time[index].passengerName = passenger_name;
    for (int i = 0; i < 4; i++) {
        cout << "|" << array_time[index].fSeatNumberArray[i][0]<< "|" << array_time[index].fSeatNumberArray[i][1] << "|"
             << array_time[index].fSeatNumberArray[i][2] << "|" << " --- " << "|" << array_time[index].fSeatNumberArray[i][3] << "|"
             << array_time[index].fSeatNumberArray[i][4] << "|" << array_time[index].fSeatNumberArray[i][5] << "|" << "\n";
    }
    cout << "|Economy class(1600.0)" << "\n";
    for (int i = 0; i < 4; i++) {
        cout << "|" << array_time[index].ecSeatNumberArray[i][0] << "|" << array_time[index].ecSeatNumberArray[i][1] << "|"
             << array_time[index].ecSeatNumberArray[i][2] << "|" << " --- " << "|" << array_time[index].ecSeatNumberArray[i][3] << "|"
             << array_time[index].ecSeatNumberArray[i][4] << "|" << array_time[index].ecSeatNumberArray[i][5] << "|" << "\n";
    }
    cout << "|" << array_time[index].ecLastSeatNumberArray[0] << "|" << array_time[index].ecLastSeatNumberArray[1] << "|" << "\n";

    string warn = contains(array_time[index].bookedSeats) ? "Seats that are already taken are indicated with an asterisk": "";
    cout << warn << "\n";
}

bool contains (vector<string> array, string elem) {
    bool result = false;
    if (array.size() > 0) {
        for (int i = 0; i < array.size(); i++) {
            if (elem == array.at(i)) {
                result = true;
            }
        }
    }
    return result;
}
bool contains (vector<string> array) {
    bool result = false;
    if (array.size() > 0) {
        result = true;
    }
    return result;
}
