#include "student.h"
#include "securityStudent.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include "degree.h"
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))
using namespace std;

const string studentData[] =
 {"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
 "A5,Carmen,Au,cau@wgu.edu,30,28,50,60,SOFTWARE"};

void createStudentObject(string pStudentRow) {
   string rowData;
   string studentArray[9];
   int j = 0;
   
   for (int i = 0; i < pStudentRow.length(); i++) {
        char letter = pStudentRow[i];
        if (letter != ',') {
             rowData += letter;
        }
        if (letter == ',') {
          cout << rowData << endl;
          studentArray[j] = rowData;
          rowData = "";
          j++;
        }     
   }
  
   SecurityStudent student = new SecurityStudent(studentArray[0],studentArray[1]);
   student.SetStudentID(studentArray[0]);
   student.SetFirstName(studentArray[1]);
   student.SetLastName(studentArray[2]);
   student.SetEmail(studentArray[3]);
   student.SetAge(studentArray[4]);
   student.SetNumDays(studentArray[5], studentArray[6], studentArray[7]);
   student.SetDegreeProgram(studentArray[8])
   
  
   cout << rowData << endl;
   studentArray[j] = rowData;
    
   return;
   }

      
//      for (x = 0; x < studentRow.length(); x++) {
//      if (studentRow[x] == ',') {
//         string studentArray[x] = '!';
//      }
   
 
   

void printByDegreeProgram(int degreeProgram) {
    
        if (degreeProgram == Degree::degreeNum::SECURITY) {
            cout << "Security" << endl;
        }
        else if (degreeProgram == Degree::degreeNum::NETWORKING) {
            cout << "Networking" << endl;
        }
        else if (degreeProgram == Degree::degreeNum::SOFTWARE) {
            cout << "Software" << endl;
            
        
    }

  
   
   return;
    }

int main() {


    for(string student: studentData) {
//        cout << student << endl << endl;
        createStudentObject(student);
    }
//    convertStringData(studentData[0]);
//    cout << studentData;
    
    
    
    
    
//// ** search and return student info by degree type ** //     
//    cout << "Search student by degree type:" << endl << "Enter: 1 for Security; 2 for Network; 3 for Software" << endl; 
//    int degreeProgram;
//    cin >> degreeProgram;        
//    printByDegreeProgram(degreeProgram);
//
//    
    return 0;
}

