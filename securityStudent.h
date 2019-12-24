
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#include "student.h"
#include "degree.h"
using namespace std;
        
class SecurityStudent : public Student {
public:
    SecurityStudent();

    int getDegreeProgram();
   SecurityStudent(
            string pStudentID,
            string firstName,
            string lastName,
            string email,
            int age,
            int numDays[],
            int degreeProgram);

    ~SecurityStudent();
            void print();
}





#endif /* SECURITYSTUDENT_H */
