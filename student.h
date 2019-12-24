#ifndef STUDENT_H
#define STUDENT_H
#include <cstdlib>
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {
    public:
        Student();
        ~Student(); //destructor
       
        
        void SetStudentID(string pStudentID);
        void SetFirstName(string pFirstName);
        void SetLastName(string pLastName);
        void SetEmail(string pEmail);
        void SetAge(int pAge);
        void SetNumDays(int pDay1, int pDay2, int pDay3);
        void SetDegreeProgram(int pDegree);
    
        string getStudentID();
        string getFirstName();
        string getLastName();
        string getEmail();
        int getAge();
        int *getNumDays();
        virtual int getDegreeProgram();
        
        void print();
    
    private: 

        string studentID;
        string firstName;
        string lastName;
        string email;
        int age;
        int numDays[3]; //number of days in course will be an array size 3
        int degreeProgram;    

};

#endif /* STUDENT */