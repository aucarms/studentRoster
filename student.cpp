
#include "student.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

void Student::SetStudentID(string pStudentID) {
    studentID = pStudentID;
    return;
}

void Student::SetFirstName(string pFirstName) {
    firstName = pFirstName;
    return;
}

void Student::SetLastName(string pLastName) {
    lastName = pLastName;
    return;
}

void Student::SetEmail(string pEmail) {
    email = pEmail;
    return;
}

void Student::SetAge(int pAge) {
    age = pAge;
   
}

void Student::SetNumDays(int pDay1, int pDay2, int pDay3) {
    Student::numDays[0] = pDay1;
    Student::numDays[1] = pDay2;
    Student::numDays[2] = pDay3;
    
}

void Student::SetDegreeProgram(int pDegreeProgram) {
     degreeProgram = pDegreeProgram;
}


string Student::getStudentID() {
    return studentID;
}

string Student::getFirstName() {
    return firstName;
}

string Student::getLastName() {
    return lastName;
}

string Student::getEmail() {
    return email;
}

int Student::getAge() {
    return age;
}

int *Student::getNumDays() {
    return numDays;
}

int Student::getDegreeProgram() {
    return degreeProgram;
}

Student::Student(
    string studentID,
    string firstName, 
    string lastName, 
    string email, 
    int age, 
    int numDays[3] //number of days in course will be an array size 3int degreeProgram
        ) {
    pStudentID = studentID;
    
    
}
void Student::print() {
    
}

