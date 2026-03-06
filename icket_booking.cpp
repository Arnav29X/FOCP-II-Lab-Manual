#include <iostream>
using namespace std;

class MovieTicket {
    private:
        string movieName;
        string seatNumber;
        float ticketPrice;
        bool isBooked = false;

    public:
        MovieTicket();
        MovieTicket(string, string, float);

        void bookTicket();
        void cancelTicket();
        void displayTicketDetails();
        float calculateTotalCost(int tickets);
};

MovieTicket::MovieTicket() {
    movieName = "Not Set";
    seatNumber = "Not Set";
    ticketPrice = 200;
    isBooked = false;
}

MovieTicket::MovieTicket(string a, string b, float c) {
    movieName = a;
    seatNumber = b;
    ticketPrice = c;
    isBooked = true;
}

void MovieTicket::bookTicket() {
    cout << "Movie Name: ";
    getline(cin >> ws, movieName);

    cout << "Seat Number: ";
    getline(cin >> ws, seatNumber);

    cout << "Price: ";
    cin >> ticketPrice;

    isBooked = true;
}

void MovieTicket::cancelTicket() {
    if(isBooked) {
        cout << "TICKET CANCELLED, 50% MONEY WILL BE REFUNDED.\n";
        ticketPrice *= 0.5;
        isBooked = false;
    } else {
        cout << "Ticket not booked yet!\n";
    }
}

void MovieTicket::displayTicketDetails() {
    cout << "\n||=-=-=-=-=-> TICKET DETAILS <-=-=-=-=-=-||\n";
    cout << "Movie Name: " << movieName << '\n';
    cout << "Seat Number: " << seatNumber << '\n';
    cout << "Price: " << ticketPrice << '\n';
    cout << "Booked: " << (isBooked ? "Yes" : "No") << '\n';
    cout << "||=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-||\n";
}

float MovieTicket::calculateTotalCost(int tickets) {
    return tickets * ticketPrice;
}

int main() {

    MovieTicket m1;
    MovieTicket m2;
    MovieTicket m3("Demon Slayer", "H33", 300.50);

    cout << "\n--- BOOKING M1 ---\n";
    m1.bookTicket();

    cout << "\n--- CANCEL M1 ---\n";
    m1.cancelTicket();

    cout << "\n--- DISPLAY M1 ---\n";
    m1.displayTicketDetails();

    cout << "\n--- DISPLAY M2 ---\n";
    m2.displayTicketDetails();

    cout << "\n--- DISPLAY M3 ---\n";
    m3.displayTicketDetails();

    int tickets;
    cout << "\nEnter number of tickets for M3: ";
    cin >> tickets;

    float total = m3.calculateTotalCost(tickets);
    cout << "Total Cost: " << total << endl;

    return 0;
}
