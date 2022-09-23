#include <iostream>
using namespace std;

int main()
{
    // Program to swap the value of two numbers

    int a = 20;
    int b = 10;

    //int temp = a;
    //a = b;
    //b = temp;

    cout <<"a is : "<<a << endl;
    cout <<"b is : "<<b << endl;

    system("cls");


    // program to swap two numbers without introducing a third variable

    a = a + b ;
    b = a - b ;
    a = a - b;

    cout << "a is : "<< a<<endl;
    cout << "b is : "<< b<<endl;




    system("pause>0");
}
