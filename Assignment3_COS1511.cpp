#include <iostream>
#include <vector>
#include <string>
using namespace std;

// todo: check the rubric and refactor the code according to it;

struct timeOption {
    double departure_time;
    double arrived_time;
    string f_seat_number_array[4][6] = {{"A1", "A2", "A3", "A4", "A5", "A6"},
                                        {"B1", "B2", "B3", "B4", "B5", "B6"},
                                        {"C1", "C2", "C3", "C4", "C5", "C6"},
                                        {"D1", "D2", "D3", "D4", "D5", "D6"},};
    string ec_seat_number_array[4][6] = {{"E1", "E2", "E3", "E4", "E5", "E6"},
                                         {"F1", "F2", "F3", "F4", "F5", "F6"},
                                         {"G1", "G2", "G3", "G4", "G5", "G6"},
                                         {"H1", "H2", "H3", "H4", "H5", "H6"}};

    // todo: Add I1 AND I2 seat numbers;
    // todo: replace vector with basic array e.g(string booked_seat[50] = {})
    vector<string> booked_seats{}; // replace it with string booked_seat[50] = {};
//    string booked_seat[50] = {}; // to be used
    string passenger_name;
};
void book_seats (string seat_number, timeOption array_time[], int index, bool &isCorrectOption);
void display_seats (timeOption array_time[], int index, string passenger_name);
bool contains (vector<string> vec, string elem);
bool contains (vector<string> vec);
void display_ticket (timeOption array_time[], int index, string seat_number);
string get_seat_number (vector<string> booked_seats, string seat_number);
void continueBookingChoice (bool &anotherBooking);
void displayBookings(timeOption arrayTime[]);
int length(vector<string> vec);


int main() {
    bool another_booking = false;
    bool isCorrectOption = true;
    int time_slot;
    string passenger_name;
    char seat_number[1];
    timeOption array_time[] = {{7.00,  9.30},
                               {9.00,  11.30},
                               {11.00, 13.30},
                               {13.00, 15.30},
                               {15.00, 17.00}};
    do {
        cout << "Welcome to COS1511 Flight Booking System";
        cout << "\n";
        cout << "Enter full name\n";
        getline(cin, passenger_name);
        cout << "The available travel times for flights are:" << "\n";
        cout << "\tdepart\tArrive" << "\n";
        int count = 1;
        for (int i = 0; i < 5; i++) {
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            cout << to_string(count) << ".\t" << array_time[i].departure_time << "\t" << array_time[i].arrived_time
                 << "\n";
            count++;
        }
        cout << "Choose the time by entering the option number from displayed list:";
        cout << isCorrectOption;
        isCorrectOption = true;
        while (isCorrectOption) {
            cin >> time_slot;
            cin.ignore();
            switch (time_slot) {
                case 1: {
                    display_seats(array_time, 0, passenger_name);
                    book_seats(seat_number, array_time, 0, isCorrectOption);
                    continueBookingChoice(another_booking);
                    break;
                }
                case 2: {
                    display_seats(array_time, 1, passenger_name);
                    book_seats(seat_number, array_time, 1, isCorrectOption);
                    continueBookingChoice(another_booking);
                    break;
                }
                case 3: {
                    display_seats(array_time, 2, passenger_name);
                    book_seats(seat_number, array_time, 2, isCorrectOption);
                    continueBookingChoice(another_booking);
                    break;
                }
                case 4: {
                    display_seats(array_time, 3, passenger_name);
                    book_seats(seat_number, array_time, 3, isCorrectOption);
                    continueBookingChoice(another_booking);
                    break;
                }
                case 5: {
                    display_seats(array_time, 4, passenger_name);
                    book_seats(seat_number, array_time, 4, isCorrectOption);
                    continueBookingChoice(another_booking);
                    break;
                }
                default:
                    cout << "Incorrect option! Please choose from 1-5.\n";
            }
        }
    }while(another_booking);

    displayBookings(array_time);
    return 0;
}
// todo: calculate length of array;
int length (vector<string> vec) {
//    int count = 1;
//    for (int i = 0; i < vec.size(); i++) {
//        count++;
//    }
//#define NUM_OF_ELEMS 10
//int arr[NUM_OF_ELEMS];
//size_t NumberOfElements = sizeof(arr)/sizeof(arr[0]);
}

void displayBookings(timeOption arrayTime[]) {
    string ref;
    for (int i = 0; i < 5; i++) {
        ref = arrayTime[i].departure_time < 12 ? "a.m": "p.m";
        cout << "Number of bookings made for " << arrayTime[i].departure_time << " " << ref << ":"
             << arrayTime[i].booked_seats.size() << "\n";
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

string get_seat_number(vector<string> booked_seats, string seat_number) {
    string seat;
    for (int i = 0; i < booked_seats.size(); i++) {
        if (seat_number == booked_seats[i]) {
            seat = seat_number;
        }
    }
    return seat;
}

void display_ticket(timeOption array_time[], int index, string seat_number) {
    // todo: use calculation amount displayed on ticket;
    // todo: determine the Travel ticket class;
    cout << "***********************\n";
    cout << "Travel ticket for FLIGHT\n";
    cout << "***********************\n";

    cout << "Name\t\t\t: " << array_time[index].passenger_name << "\t\t" << "\tTravel Ticket class: First class\n";
    cout << "\t\t\t\t\t\tSeat No\t\t\t: " << get_seat_number(array_time[index].booked_seats, seat_number) << "\n";
    cout << "Departure\t\t: " << "Johannesburg\t\tDeparture Time\t\t: "  << array_time[index].departure_time << "\n";
    cout << "Destionation\t\t: " << "Cape Town\t\tArrival Time\t\t: " << array_time[index].arrived_time << "\n";

    cout << "************************\n";
    cout << "R1920.00 Thank you for booking with COS1511. Your travel agent for queries is Annie Mathew\n";
    cout << "************************\n";
}

void book_seats(string seat_number, timeOption array_time[], int index, bool &isCorrectOption) {
    cout << "Please key in a seat number to choose a seat(eg:A2):";
    cin >> seat_number;
    cin.ignore();
    while (contains(array_time[index].booked_seats, seat_number)) {
        cout << "Sorry, the seat is taken. Please choose a seat that is available" << "\n";
        cin >> seat_number;
    }
    array_time[index].booked_seats.push_back(seat_number);
    isCorrectOption = false;

    for (int i = 0; i < 4; i++) {
        if (seat_number == array_time[index].f_seat_number_array[i][0]) {
            array_time[index].f_seat_number_array[i][0] = "**";
        } else if (seat_number == array_time[index].f_seat_number_array[i][1]) {
            array_time[index].f_seat_number_array[i][1] = "**";
        } else if (seat_number == array_time[index].f_seat_number_array[i][2]) {
            array_time[index].f_seat_number_array[i][2] = "**";
        } else if (seat_number == array_time[index].f_seat_number_array[i][3]) {
            array_time[index].f_seat_number_array[i][3] = "**";
        } else if (seat_number == array_time[index].f_seat_number_array[i][4]) {
            array_time[index].f_seat_number_array[i][4] = "**";
        } else if (seat_number == array_time[index].f_seat_number_array[i][5]) {
            array_time[index].f_seat_number_array[i][5] = "**";
        }else if (seat_number == array_time[index].ec_seat_number_array[i][0]) {
            array_time[index].ec_seat_number_array[i][0] = "**";
        } else if (seat_number == array_time[index].ec_seat_number_array[i][1]) {
            array_time[index].ec_seat_number_array[i][1] = "**";
        } else if (seat_number == array_time[index].ec_seat_number_array[i][2]) {
            array_time[index].ec_seat_number_array[i][2] = "**";
        } else if (seat_number == array_time[index].ec_seat_number_array[i][3]) {
            array_time[index].ec_seat_number_array[i][3] = "**";
        } else if (seat_number == array_time[index].ec_seat_number_array[i][4]) {
            array_time[index].ec_seat_number_array[i][4] = "**";
        } else if (seat_number == array_time[index].ec_seat_number_array[i][5]) {
            array_time[index].ec_seat_number_array[i][5] = "**";
        }
    }
    display_ticket(array_time, index, seat_number);
}

void display_seats(timeOption array_time[], int index, string passenger_name) {
    cout << "The available seats for 7.00 are as follows:" << "\n";
    cout << "First class(1920.00)" << "\n";
    array_time[index].passenger_name = passenger_name;
    for (int i = 0; i < 4; i++) {
        cout << "|" << array_time[index].f_seat_number_array[i][0]<< "|" << array_time[index].f_seat_number_array[i][1] << "|"
             << array_time[index].f_seat_number_array[i][2] << "|" << " --- " << "|" << array_time[index].f_seat_number_array[i][3] << "|"
             << array_time[index].f_seat_number_array[i][4] << "|" << array_time[index].f_seat_number_array[i][5] << "|" << "\n";
    }
    cout << "|Economy class(1600.0)" << "\n";
    for (int i = 0; i < 4; i++) {
        cout << "|" << array_time[index].ec_seat_number_array[i][0] << "|" << array_time[index].ec_seat_number_array[i][1] << "|"
             << array_time[index].ec_seat_number_array[i][2] << "|" << " --- " << "|" << array_time[index].ec_seat_number_array[i][3] << "|"
             << array_time[index].ec_seat_number_array[i][4] << "|" << array_time[index].ec_seat_number_array[i][5] << "|" << "\n";
    }
    string warn = contains(array_time[index].booked_seats) ? "Seats that are already taken are indicated with an asterisk": "";
    cout << warn << "\n";
}

bool contains (vector<string> vec, string elem) {
    bool result = false;
    if (vec.size() > 0) {
        for (int i = 0; i < vec.size(); i++) {
            if (elem == vec.at(i)) {
                result = true;
            }
        }
    }
    return result;
}
bool contains (vector<string> vec) {
    bool result = false;
    if (vec.size() > 0) {
        result = true;
    }
    return result;
}
