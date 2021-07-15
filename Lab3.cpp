// Write a c++ program that has a class called Select_task. It contains the following: 
                  //   1. Four member functions named addition, subtraction, multiplication, and division.
                  //   2. accepting inputs and calculations of the result should be done in every member function
                  //   3. a main function where you can choose what task to be done (use switch or ladderized else..if statement)





#include <iostream>

using namespace std;

class Select_task {
    private: float num1, num2;
    
    public: 
       void addition() {
           cout<< "Enter 1st Opernad: ";
           cin>> num1;
           cout<< "Enter 2nd Operand: ";
           cin>> num2;
           cout<< "Answer = ";
           cout<< num1+num2;
       }
       
       void subtraction() { 
           cout<< "Enter 1st Operand: ";
           cin>> num1;
           cout<< "Enter 2nd Operand: ";
           cin>> num2;
           cout<< "Answer = ";
           cout<< num1-num2;
       }
       
       void multiplication() {
           cout<< "Enter 1st Operand: ";
           cin>> num1;
           cout<< "Enter 2nd Operand: ";
           cin>> num2;
           cout<< "Answer = ";
           cout<< num1*num2;
       }
       
       void division() {
           cout<< "Enter 1st Operand: ";
           cin>> num1;
           cout<< "Enter 2nd Operand: ";
           cin>> num2;
           cout<< "Answer = ";
           cout<< num1/num2;
       }
       
};      
       
       
int main() {
   char op;
   Select_task Select;
   cout << "Enter operator either + or - or * or /: ";
   cin >> op;
   
   switch(op)
    {
        case '+':
            Select.addition();
            break;

        case '-':
            Select.subtraction();
            break;

        case '*':
            Select.multiplication();
            break;

        case '/':
            Select.division();
            break;
            
        default:
            
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
