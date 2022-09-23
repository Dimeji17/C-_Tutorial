#include <iostream>
using namespace std;

int main()
{
    /*cout<<(int)'a'<<endl;
    cout<<int('A')<<endl;
    cout<<char(65)<<endl;
    cout<<(char)65<<endl;*/


    char c1, c2, c3, c4, c5; // created 5 character variable
    cout << "enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5; // input 5 letters to coded in ASCII
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3)
    << " " << int(c4) << " " << int(c5) << endl; // display ASCII code for inputed letters
    cout << "crack code: " << char(int(c1)) << char(int(c2)) << char(int(c3)) << char(int(c4))
    << char(int(c5));// display the initial 5 letters written before.




    system("pause>0");
}
