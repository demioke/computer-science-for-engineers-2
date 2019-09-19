#include <iostream>
using namespace std;
#include "Lecturer.h"

Lecturer newLecturer(int staff_id, char union_membership, float teaching_rating) {
    Lecturer lecturer; //declaring a lecturer
    
    //populating lecture fields
    lecturer.staff_id = staff_id;                   
    lecturer.union_membership = union_membership;
    lecturer.teaching_rating = teaching_rating;
    
    return lecturer; //returning lecturer
}


void printLecturer(Lecturer lecturer) {
    cout << "Staff ID: " << lecturer.staff_id << endl; //prints staff ID of lecturer
    cout << "Union Membership: " << lecturer.union_membership << endl; //prints union membership of lecturer
    cout << "Teaching Rating: " << lecturer.teaching_rating << endl; //prints teaching rating of lecturer
}


Lecturer combineLecturers(Lecturer lecturer_1, Lecturer lecturer_2) {
    Lecturer avgLecturer; //declaring lecturer
    avgLecturer.staff_id = -1; //dummy value
    avgLecturer.union_membership = 'z'; //dummy value
    avgLecturer.teaching_rating = (lecturer_1.teaching_rating + lecturer_2.teaching_rating) / 2; //average of the teacing ratings of the two lecturers
    
    return avgLecturer; //returning combined lecturer
}


void betterLecturer(Lecturer lecturer_1, Lecturer lecturer_2) {
    if(lecturer_1.teaching_rating > lecturer_2.teaching_rating) { //1st lecturer has a higher teaching rating than 2nd lecturer so print that 1st lecturer is better
        cout << "\nThe lecturer with a Teaching Rating of " << lecturer_1.teaching_rating << " is better.\n";
        return;
    } else if(lecturer_2.teaching_rating > lecturer_1.teaching_rating) { //2nd lecturer has a higher teaching rating than 1st lecturer so print that 2nd lecturer is better
        cout << "\nThe lecturer with a Teaching Rating of " << lecturer_2.teaching_rating << " is better.\n";
        return;
    } // teaching ratings are the same so check staff ID's 
    else if(lecturer_1.staff_id > lecturer_2.staff_id) { //1st lecturer has a higher staff ID than 2nd lecturer so print that 1st lecturer is better
        cout << "\nThe lecturer with a Staff ID of " << lecturer_1.staff_id << " is better.\n";
        return;
    } else if(lecturer_2.staff_id > lecturer_1.staff_id) { //2nd lecturer has a higher staff ID than 1st lecturer so print that 2nd lecturer is better
        cout << "\nThe lecturer with a Staff ID of " << lecturer_2.staff_id << " is better.\n";
        return;
    } else { //teaching rating AND staff ID's of both lecturers are the same. hence both lecturers are the same.
        cout << "\nBoth Lecturers are equal.\n";
    }
}