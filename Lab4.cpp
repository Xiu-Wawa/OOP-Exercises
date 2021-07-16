// Create a program that uses a while loop (1) and for loop(2) to generate a list of multiplication expressions for a given value.
// Two (2) member function should be created:
//         1 function for the while loop implementation
//         1 function for the for loop implementation
// The main function should contain where the user will enter the value and the number of expressions to be displayed. 
// Use a decision-making structure for the user to choose what implementation (1- WHILE and 2- FOR)  he/she wants.


#include <iostream>

using namespace std;

class Multiplication_exp {
    
    private:
    
    public:
    int n, range;
       void forloop () {
           for (int i=1; i <= range;i++) {
                cout << "You chose for loop"<<endl;
                cout << "Enter an integer:";
                cin>> n;
                cout << "Enter the number of list of expression: ";
                cin>> range;
                cout << n << " * " << i << " = " << n * i << endl;
            }
        } 
        
        void whileloop () {
            int i=1;
            while (i <= range) {
               cout << "You chose for while loop"<<endl;
               cout << "Enter an integer:";
               cin<< n;
               cout << "Enter the number of list of expression: ";
               cin>> range;
               cout << n << " * " << i << " = " << n * i << endl;
               i++;
            }
        }
        
};


int main() {
Multiplication_exp Multiply;
cout<< "Choose what implementation to run {(1) for loop (2) while loop}: ";
cin>> c;

  if(c==1) {
     Multiply.forloop();
  }
     else if (c==2)  { 
        Multiply.whileloop();
     }    
    else (c!=2 && c!=1) {
        cout<< "Please choose either 1 or 2 only";
    }
     
return 0;    
}
