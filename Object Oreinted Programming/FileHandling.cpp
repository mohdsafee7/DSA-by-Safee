#include<iostream>
#include<fstream>

using namespace std;
/*
//to write the data = ofstream
int main(){
  //open the file
  ofstream fout; //fout is object of ofstream
  fout.open("zoom.txt"); //if not created , it will create and open

  //write the file
  fout<<"Hello India";
  //close the file
  fout.close();     //release the resources
  return 0;
}
*/

//to read the data
int main(){
  ifstream fin;

  //open the file
  fin.open("zoom.txt");

  //read the file
  char c;
  // fin>>c;
  while(!fin.eof()) //end of file - eof
  {
    cout<<c;
    // fin>>c;
    c = fin.get();
  }
  //output: Hello India with .get()

  fin.close();
}