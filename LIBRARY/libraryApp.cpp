// #include <iostream>
// #include <ctime>

// using namespace std;

// int main() {
//     // Assume book was issued on this date
//     tm issue_date = {};
//     issue_date.tm_year = 2023 - 1900;  // Year since 1900
//     issue_date.tm_mon = 8;             // Month [0-11], September
//     issue_date.tm_mday = 1;            // Day of the month [1-31]

//     time_t issue_time_t = mktime(&issue_date);

//     // Current date
//     time_t now = time(0);

//     // Calculate difference in seconds
//     double seconds_diff = difftime(now, issue_time_t);
//     // Convert seconds to days
//     int days_diff = seconds_diff / (60 * 60 * 24);

//     // Calculate fine
//     const int grace_period = 30; // days
//     const int fine_per_day = 5;  // rupees

//     int days_overdue = days_diff - grace_period;
//     int fine = (days_overdue > 0) ? days_overdue * fine_per_day : 0;

//     cout << "Days overdue: " << days_overdue << endl;
//     cout << "Fine: " << fine << " rupees" << endl;

//     return 0;
// }
// /*
// Explanation:
// Time of Issue:

// tm issue_date = {}: Initialize a tm struct.

// Set tm_year, tm_mon, and tm_mday to represent the issue date.

// Convert tm to time_t using mktime.

// Current Time:

// Get the current time using time(0).

// Calculate Difference:

// Use difftime to find the difference in seconds between now and issue_time_t.

// Convert seconds to days by dividing by (60 * 60 * 24).

// Calculate Fine:

// Define a grace period (30 days).

// Define a fine rate (5 rupees per day).

// Calculate overdue days and the fine accordingly.

// This code calculates the fine based on how many days the book is overdue, considering a 30-day grace period, without using std::chrono. Efficient and straightforward!
// */
#include <iostream>
class Book {
private: 
    /* private members */
    public:
    Book() {
        /* constructor */
    }
    ~Book() {
        /* destructor */
    }
    /* methods */
};
int main(){
    Book obj;
return 0;
}