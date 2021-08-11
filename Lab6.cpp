# Write a C++ Program having a Class named STUDENT with following members:

# Member Data
# name                     Name of the student
# id_number             Student ID
# total_grade           Assumed total grade out of 500
# percentage            Percentage of student's total grade

# Member function
# getDetails()          member function to get student's details
# putDetails()          member function to print all student's details (from highest percentage to lowest)


# Sample output: 
 # Enter total number of students: 3

 # Enter details of student 1:
 # Enter name: Karthik
 # Enter roll number: 1201
 # Enter total marks out of 500: 456

 # Enter details of student 2:
 # Enter name: Mahesh
 # Enter roll number: 1202
 # Enter total marks out of 500: 398

 # Enter details of student 3:
 # Enter name: Kiran
 # Enter roll number: 1203
 # Enter total marks out of 500: 434

 # Student details:
 # Name: Karthik, Roll Number: 1201, Total: 456, Percentage: 91.2
 # Name: Kiran, Roll Number: 1203, Total: 434, Percentage:86.8
 # Name: Mahesh, Roll Number: 1202, Total: 398, Percentage:79.6

###-------------------------------------------------------------------------------------------------------------------------####

#include <iostream>
using namespace std;
# define MAX 10

class STUDENT {
    private:
      char name[30];
      int id_number;
      int total_grade;
      float percentage;
    
    public:
    
      void getDetails() {
          cout << "Enter name: ";
          cin >> name;
          cout << "Enter roll number: ";
          cin >> id_number;
          cout << "Enter total marks out of 500: ";
          cin >> total_grade;
          percentage=(float)total_grade/500*100;
      }
      
      void putDetails() {
          cout << "Name:"<< name << ", Roll Number:" << id_number << ", Total:" << total_grade << ", Percentage:" << percentage;
      }
};
      
int main() {
    STUDENT std[MAX];
    int n,loop;
    cout << "Enter total number of students: ";
    cin >> n;
    cout << endl;
    for (loop=0;loop< n; loop++) {
        cout << "Enter details of student " << loop+1 << ":\n";
        std[loop].getDetails();
        cout << endl;
    }
    cout << endl;
    
    for(loop=0;loop< n; loop++) {
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
        cout << endl;
    }
 return 0;
}
    

