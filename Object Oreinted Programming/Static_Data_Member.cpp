#include<iostream>
using namespace std;
class Static_Data_Member
{

private:
  string name;
  int accNo, balance;
  static int total_customer; //static data member
  static int total_balance;

public:
  Static_Data_Member(string name, int accNo, int balance){
    this->name = name;
    this->accNo = accNo;
    this->balance = balance;
    total_customer++;
    total_balance += balance;
  }

  static void accessStatic(){
    cout<<"total_customer: "<<total_customer<<endl;
    cout<<"total_balance: "<<total_balance<<endl;

  }
  void display(){
    cout<<name<<" "<<accNo<<" "<<balance<<" total customer"<<total_customer<<endl;
  }
};

int Static_Data_Member:: total_customer = 0;
int Static_Data_Member:: total_balance = 0;

int main(){
  Static_Data_Member A1("Rohit", 1 , 100);
  Static_Data_Member A2("Mohit", 2 , 1000);
  A1.display();
  A2.display();

  Static_Data_Member::accessStatic();
  cout<<"SAfee";
  return 0;
}