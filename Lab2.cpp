// Write a C++ program that will accept input(length and width of rectangle respectively) from the user. 
// The implementation of the code should meet the following criteria:

// 1. Create 1 class name "Area_of_rectangle".
// 2. Declare 3 variables that will hold length, width, and the calculated area.
// 3. Create 2 methods inside the class (1) to get the input from the user and (2) to contain the formula in calculating the area.
// 4. The main()  is where the creation of the object and calling of the methods of class Area_of_rectangle.

#include <iostream>
using namespace std;


class Area_of_rectangle {        
       private:                                               
             float length, width, area=0;                       
       public:                                                
              void get ()  {                                 
                    cout << "Enter length value =";
                    cin >> length;
                    cout << "Enter width value =";            
                    cin >> width;
              }
              void result ()  {
                    cout << "area =";
                    area = length * width;                  
                    cout << area;                              
              }                                         
};                           


int main() {
       Area_of_rectangle Formula; 
       Formula.get ();
       Formula.result ();
       return 0;
}
