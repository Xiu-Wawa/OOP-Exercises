// Create a class called BankAccount, that will act as a bank account.
// It contains the following:
//     *Two private data members: account_number (int) and account_balance (double), which maintains the current account balance.
//     *A Public functions account_credit(), task is to add the given amount from the balance
//     *A Public functions account_debit(), task is to subtract the given amount from the balance and  print "amount withdrawn exceeds 
//      the current balance!" if amount is more than account_balance.
//     *A public function print_func(), which shall print "Account no: xxx Balance=xxx" (e.g., Account no: 99055 Balance=P88.88),
//      with account_balance rounded to two decimal places.



#include<iostream>
#include<iomanip>
using namespace std;
int x,a;
double z;

class BankAccount {
  private:
    int account_number;
    double account_balance, amount;
  
  public: 
    void account_credit() {
      cout<< "Enter amount to deposit: ";
      cin>> amount;
      account_balance = amount + z;
    }
  
    void account_debit() {
      cout<< "Enter amount to withdraw: ";
      cin>> amount;
      if(amount > z) 
      {
        cout<< "Amount withdrawn exceeds the current balance!"<<endl<<endl;
      }
      else 
      {
        account_balance = z - amount;
      }
    }  
      
      void print_func() {
        account_number=a;
        cout<<"Account number: "<<account_number<<endl<<" Balance: ₱"<<fixed<<setprecision(2)<<account_balance<<endl<<endl;
      }   
};     
  
int main() {
  BankAccount Execute;
  cout<< "Enter account number: "; cin>> a;
  cout<< "Enter first deposit amount: "; cin>> z;
  cout<< "Account number: "<< a << endl << "Balance: ₱" <<fixed<<setprecision(2)<<z;
  cout<<"\nChoose the next transaction you want to do\n";
  cout<<"1: Withdraw\n2: Deposit\n3: Exit\n"; cin>>x;
    
    if(x==1) 
    {
        Execute.account_debit();
        Execute.print_func();
    }
    else if(x==2)
    {
        Execute.account_credit();
        Execute.print_func(); 
    }
    else if(x==3)
    {
        cout<< "Thank you for banking with us!"<<endl<<endl;
    }
    else
    {
        cout<< "Inavlid option";
    }
return 0;
}  
      
    
        
        
        
        
      
      
      
  
