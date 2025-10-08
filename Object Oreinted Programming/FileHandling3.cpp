#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream fout;
    fout.open("z.txt");
    fout<<"Hello India\n";
    fout<<"Hello Endia\n";
    fout<<"Janab\n";

    fout.close();


    //to read
    ifstream fin;
    fin.open("z.txt");
    string line;

    while(getline(fin, line)){
        cout << line << endl;
    }
    
  return 0;
}