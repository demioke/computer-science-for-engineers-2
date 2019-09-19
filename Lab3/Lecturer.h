// defining the struct
struct Lecturer {
    int staff_id;
    char union_membership;
    float teaching_rating;
};

Lecturer newLecturer(int staff_id, char union_membership, float teaching_rating);
//this function returns a lecturer given input arguments of staff id, union membership and teaching rating

void printLecturer(Lecturer lecturer);
//this function prints to the screen the values of staff id, union membership and teaching rating of a given lecturer

Lecturer combineLecturers(Lecturer lecture_1, Lecturer lecturer_2);
//this function returns new lecturer by averaging the values of the corresponding teaching rating fields, and inserting dummy values for the staff ID and union membership status fields of the new 'lecturer'.

void betterLecturer(Lecturer lecture_1, Lecturer lecturer_2);
/*this function prints which of 2 lecturers is "better", according to this rule: the lecturer with the higher 
teaching rating is better; if the 2 lecturers have the same teaching rating, the lecturer with the higher staff ID 
is better; if both teaching rating and staff ID are the same, then the 2 lecturers are equal.*/
