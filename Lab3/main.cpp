#include <iostream>
using namespace std;
#include "Lecturer.h" //so we can use the definition of a Lecturer

int main() {
    //declaring variavles
    Lecturer lecturer_1, lecturer_2, avgLecturer; 
    int staff_id;
    char union_membership;
    float teaching_rating;
    
    //requesting user to ener details for lecturer 1
    cout << "\nPlease enter values for Lecturer 1\n";
    cout << "Staff ID: "; cin >> staff_id;
    cout << "Union Membership: "; cin >> union_membership;
    cout << "Teacing Rating: "; cin >> teaching_rating;
    lecturer_1 = newLecturer(staff_id, union_membership, teaching_rating); //creating lecturer 1
    
    //requesting user to ener details for lecturer 2
    cout << "\nPlease enter values for Lecturer 2\n";
    cout << "Staff ID: "; cin >> staff_id;
    cout << "Union Membership: "; cin >> union_membership;
    cout << "Teacing Rating: "; cin >> teaching_rating;
    lecturer_2 = newLecturer(staff_id, union_membership, teaching_rating); //creating lecturer 2
    
    cout << "\nLecturer 1:\n";
    cout << "-------------------------\n";
    printLecturer(lecturer_1); //printing lecturer 1
    
    cout << "\nLecturer 2:\n";
    cout << "-------------------------\n";
    printLecturer(lecturer_2); //printing lecturer 2
    
    betterLecturer(lecturer_1, lecturer_2); //printing the better lecturer out of the 2 based on assignment details
    
    avgLecturer = combineLecturers(lecturer_1, lecturer_2); //returns the combined lecturer based on assignment details
    
    cout << "\nCombined lecturer:\n";
    cout << "-------------------------\n";
    printLecturer(avgLecturer); //printing the combined lecturer
    
    return 0;
    
}