#include<iostream>
using namespace std;

class Customer {
  string name;
  int accNo;
  double accBal;
  bool isActive;

  public:

  //constructor
  Customer(string s, int a, int b, bool c): name(s), accNo(a), accBal(b), isActive(c){ }

  void printDetails(){
      cout<<"Customer name is:"<<name<<" AccNo- "<<accNo<<" Current Bal: "<<accBal<<endl;
  }

  void deposit(int amount){
    this->accBal += amount;
    cout<<"Amount Deposited :"<<amount<<endl;
    cout<<"Total Balance: "<<accBal<<endl;
  }

  void withdraw(int amount){
    if(this->accBal < amount){
      cout<<"Insufficient Balance."<<endl;
      return;
    }

    this->accBal -= amount;

    cout<<"Amount Credited: "<<amount<<endl;
    cout<<"Remaining Balance: "<<accBal<<endl;
  }

  void transfer(int amount, Customer& a2){
    if(this->accBal > amount){
      this->accBal -= amount;
      a2.accBal += amount;
      cout << "Transferred " << amount << " from " << this->name << " to " << a2.name << endl;
      cout << "Your new balance: " << this->accBal << endl;
      cout << a2.name << "'s new balance: " << a2.accBal << endl;
    }
    else{
      cout<<"Your balance is insufficient"<<endl;
    }
  }
};

int main(){
  Customer a1("Safee" , 255, 1000, true);
  Customer a2("Magnet" , 256, 2000, true);

  a1.printDetails();
  a2.printDetails();
  a1.transfer(500,a2);
  a1.deposit(100);

  a1.withdraw(100);

  return 0;
}