#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {

    int L = s.size();
    double sqroot = sqrt(L);
    int col = ceil(sqroot); 
    int row = floor(sqroot);
    
    if(row*col < L)
            row++;
    
    int k=0;
    // vector<vector<char>> mat(row, vector<char>(col, ' '));
    char mat[row][col];
    //making grid row*col
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(k < L){
            mat[i][j] = s[k];
            k++;
            }
            else
                mat[i][j] = ' ';
        }
    }
    
    string temp="";

    //traverse the grid col wise
    int l=0;
    for(int j=0; j<col; j++){
        for(int i=0; i<row; i++){
            if(mat[i][j] != ' '){
            temp.push_back(mat[i][j]);
            l++;
            }
        }
        temp.push_back(' ');
    }
    
    // Remove trailing space
    if (!temp.empty() && temp.back() == ' ')
        temp.pop_back();
    
    return temp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
