#include <iostream>
using namespace std;

int main()
{
    /*
    //
    cout<< "program that checks if a number is even or odd<<endl;

    int num; // declare variable num as interger

    cout << "Input your number to check if it is even or odd\n";//display message
    cout << "number: ";

    cin >> num;  // get input


    // checks if the reminder of num divided by 2 is 0
    cout << endl;
    if (num % 2 == 0)
    {
        cout << num << " Is an even number."; // if reminder is equal to 0, print the following
    }

    else
    {
        cout << num << " Is an odd number."; // if reminder is not equal to 0, print the following
    }

    */

    // more on if_else statement

    cout << "Program to check if a triangle is Equilateral, Scalene or Isosceles " << endl<<endl;// function of program
    double a, b, c; // declare variables a, b, c as doubles

    cout << "Enter the value of a: ";
    cin >> a; // input value of a

    cout << "Enter the value of b: ";
    cin >> b; // input value of b

    cout << "Enter the value of c: ";
    cin >> c; // input value of c
    cout << "\n" ;

    if ((a != b) && (b != c )) // check if a is not equal to b and c
    {
        cout << "The triangle is a Scalene triangle\n";
    }
    else if ((a == b) && (b == c)) // check if a is equal to b and c
    {
        cout << "The triangle is an Equilateral triangle\n";
    }
    else if (((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a))) // check if a is equal to b and not equal to c or b is equal to c and not equal to a or c is equal to a and not equal to b
    {
        cout << "The triangle is an Isosceles triangle\n";
    }

    cout << endl <<"Program Ends";
    system("pause>0");
}
