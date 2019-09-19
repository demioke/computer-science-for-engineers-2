#include<iostream>
#include <algorithm> //allows the use of sort function 
using namespace std;

struct timet { //declaring the timet struct, time in canonical form
    int hours;
    int minutes;
    int seconds;
};

//declaring function prototypes
int convert_timet(timet t1);
timet convert_sec(int total_sec);
timet calculateTime(timet t1, timet t2, timet t3);

int main() {
    timet t1, t2, t3, calculatedTime;
    
    cout << "This program takes in three times from the user. It adds the 2 biggest times and subtracts the smallest. The time is output in canonical form\n\n";
    
    //getting inputs from user
    cout << "Enter the first time (t1):\n";
    cout << "hours: ";   cin >> t1.hours;
    cout << "minutes: "; cin >> t1.minutes;
    cout << "seconds: "; cin >> t1.seconds;
    
    cout << "---------------------------------\n";
    
    cout << "Enter the second time (t2):\n";
    cout << "hours: ";   cin >> t2.hours;
    cout << "minutes: "; cin >> t2.minutes;
    cout << "seconds: "; cin >> t2.seconds;
    
    cout << "---------------------------------\n";
    
    cout << "Enter the third time (t1):\n";
    cout << "hours: ";   cin >> t3.hours;
    cout << "minutes: "; cin >> t3.minutes;
    cout << "seconds: "; cin >> t3.seconds;
    
    cout << "---------------------------------\n";
    
    calculatedTime = calculateTime(t1, t2, t3); //calculates time as specified by assignment
    
    //displaying calculated time on screen
    cout << "Calculated time is:\n";
    cout << " hrs:  " << calculatedTime.hours << endl;
    cout << " mins: " << calculatedTime.minutes << endl; 
    cout << " secs: " << calculatedTime.seconds << endl;
    
    return 0;
}


int convert_timet(timet t1) { //this function converts time given in canonical form (of type timet) into seconds
    int converted_sec;
    converted_sec = t1.seconds + (60 * t1.minutes) + (60 * 60 * t1.hours);
    
    return converted_sec;
}

timet convert_sec(int total_sec) { //this function converts time given in seconds into canonical form (of type timet)
    timet t1;
    int remaining_sec;
    
    t1.hours = total_sec / (60 * 60);
    remaining_sec = total_sec % (60 * 60);
    t1.minutes = remaining_sec / 60;
    remaining_sec %= 60;
    t1.seconds = remaining_sec;
    
    return t1;
}

timet calculateTime(timet t1, timet t2, timet t3) {
    int timesInSeconds[3], ans;
    
    //converting times from canonical form to seconds and putting them in an array
    timesInSeconds[0] = convert_timet(t1);
    timesInSeconds[1] = convert_timet(t2);
    timesInSeconds[2] = convert_timet(t3);
    
    sort(timesInSeconds, timesInSeconds + 3); //sorting times in ascending order using the sort function from algorithm header file
    
    ans = timesInSeconds[2] + timesInSeconds[1] - timesInSeconds[0]; // biggest + 2nd biggest -smallest as described in the assignment
    
    return convert_sec(ans); //returning the calculated time in canonical form
}

