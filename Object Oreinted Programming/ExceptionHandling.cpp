#include<iostream>
using namespace std;

class Customer{
  string name;
  int bal, accNo;

  public:
  Customer(string name, int bal, int accNo){
    this->name = name;
    this->bal = bal;
    this->accNo = accNo;
  }

  //deposit
  void deposit(int amount){
    if(amount >0){
      bal += amount;
      cout<<amount<<"Rupees Amount Credited Successfully\n";
      cout<<"Final Balance: "<<bal<<endl;

    }
    else{
      throw runtime_error("Deposit Amount is 0.");
    }
  }

  void withdraw(int amount){
    if(amount >0 && amount <= bal){
      bal -= amount;
      cout<<amount<<" deducted(debit) from your account\n";
      cout<<"Final Balance: "<<bal<<endl;
    }
    else 
      throw "Your balance is low";
  }
};

int main(){
  Customer c1("Safee", 5000, 10);

  try{
  c1.deposit(-100);
  c1.withdraw(6000);
  }
  catch(const char *e){
    cout<<"Exception Occured: "<<e<<endl;
  }
  catch(const runtime_error &e){
    cout<<"Exception Occurerd: "<<e.what()<<endl;
  }
  catch(...){
    cout<<"Exception Occured(Default catch block)";
  }
  return 0;
}