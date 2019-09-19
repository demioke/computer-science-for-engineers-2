#include <iostream>
using namespace std;
#include "Lecturer.h" //so we can use the definition of a Lecturer

int main() {
    //declaring variavles
    int staff_id;
    char union_membership;
    float teaching_rating;
    
    //requesting user to ener details for lecturer 1
    cout << "\nPlease enter values for Lecturer 1\n";
    cout << "Staff ID: "; cin >> staff_id;
    cout << "Union Membership: "; cin >> union_membership;
    cout << "Teaching Rating: "; cin >> teaching_rating;
    Lecturer lecturer1(staff_id, union_membership, teaching_rating); //instanciating lecturer 1
    
    //requesting user to ener details for lecturer 2
    cout << "\nPlease enter values for Lecturer 2\n";
    cout << "Staff ID: "; cin >> staff_id;
    cout << "Union Membership: "; cin >> union_membership;
    cout << "Teaching Rating: "; cin >> teaching_rating;
    Lecturer lecturer2(staff_id, union_membership, teaching_rating); //instanciating lecturer 1
    
    Lecturer avgLecturer(0, 0, 0); //instanciating a lecturer to store the combined lecturer
    
    avgLecturer = lecturer1.combineLecturers(lecturer2); //giving avgLecturer the values of the combination of lecturer1 and lecturer2
    
    
    cout << "\nLecturer 1:\n";
    cout << "-------------------------\n";
    //using get-functions to print lecturer values just to test they are working. 
    
    cout << "Staff ID: " << lecturer1.getStaffID() << endl;
    cout << "Union Membership: " << lecturer1.getUnionMembership() << endl;
    cout << "Teaching Rating: " << lecturer1.getTeachingRating() << endl;
    
    cout << "\nLecturer 2:\n";
    cout << "-------------------------\n";
    lecturer2.printValues(); //printing lecturer 2 using printValues() function
    
    cout << "\nCombied Lecturer:\n";
    cout << "-------------------------\n";
    avgLecturer.printValues(); //printing avgLecturer using printValues() function
}