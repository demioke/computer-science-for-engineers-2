class Lecturer {
    private:
        int staff_id;
        char union_membership;
        float teaching_rating;
    
    public:
        Lecturer(int s_id, char u_m, float t_r);
        //this constructor instanciates a lecturer give the values of staff ID, union membership & teacing rating
        
        int getStaffID();
        //this function returns the staff ID of a given lecturer
        
        char getUnionMembership();
        //this function returns the union membership of a given lecturer
        
        float getTeachingRating();
        //this function returns the teacing rating of a given lecturer
        
        Lecturer combineLecturers(Lecturer lecturer);
        //this lecturer combines a lecturer specified in the input argument with the lecturer this method is invoked on, and returns a new ‘lecturer’ by averaging the values of the corresponding teaching rating fields
        
        void printValues();
        //this function prints out the values of a lecturer’s staff ID, union membership status, and teaching rating to the screen. This method must distinguish between an actual lecturer and a ‘lecturer’ formed by the combination of two lecturers.
};