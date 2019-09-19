#include "Lecturer.h" //so we can use the definition of a Lecturer
#include <iostream>
using namespace std;

Lecturer::Lecturer(int s_id, char u_m, float t_r) {
    //assigns values to staff ID, union membership and teaching rating of specified lecturer based on user inputs
    staff_id = s_id;
    union_membership = u_m;
    teaching_rating = t_r;
}

int Lecturer::getStaffID() {
    return staff_id; //returns staff ID of a given lecturer
}

char Lecturer::getUnionMembership() {
    return union_membership; //returns union membership of a given lecturer
}

float Lecturer::getTeachingRating() {
    return teaching_rating; //returns teaching rating of a given lecturer
}

//combine lecturers
Lecturer Lecturer::combineLecturers(Lecturer lecturer2) {
    float avg_teaching_rating = (teaching_rating + lecturer2.getTeachingRating()) / 2; //average of the teacing ratings of the two lecturers. getTeachingRating() is used to get the teaching rating of the second lecturer
    Lecturer combinedLecturer(-1, 'z', avg_teaching_rating); //instanciates a lecturer with the specified teaching rating and dummy values for staff ID and union membership
    return combinedLecturer; //returns the combined lecturer
}

void Lecturer::printValues() {
    //Check to see if Lecturer combined (not real)
    if(staff_id < 0 ) { // this is a combined lecturer as the staff is is a dummy value
        cout << "This lecturer is formed by the combination of 2 lecturers.\n";
        cout << "Staff ID: " << staff_id << endl;
        cout << "Union Membership: " << union_membership << endl;
        cout << "Teaching Rating: " << teaching_rating << endl;
        return;
    }

    //Lecturer is real so print all the lecturer's values
    cout << "This is an actual lecturer.\n";
    cout << "Staff ID: " << staff_id << endl;
    cout << "Union Membership: " << union_membership << endl;
    cout << "Teaching Rating: " << teaching_rating << endl;
    return;
}
