#include <iostream>
using namespace std;

    /*
       Program to build a simple calculator using switch case statement
       and returns invalid operation if the operation inputed is not +, -, *, /, or %
    */

int main()
{

    float num1, num2; // declare numbers as float

    char operation; // declare operation as char

    cout <<"**-- Dimeji's Calculator --**\n"; // Output Dimeji's calculator as header

    cin >> num1 >> operation >> num2; // Input number one followed by the operation and then the second number. Example: (2 + 2)


    switch(operation)
    {
    case '-'://checks for minus operation
        cout<< num1 << operation << num2 << " = " << num1 - num2; break;

    case '+':// checks for addition operation
        cout<< num1 << operation << num2 << " = " << num1 + num2; break;

    case '*':// checks for multiplication operation
        cout<< num1 << operation << num2 << " = " << num1 * num2; break;

    case '/':// checks for division operator
        cout<< num1 << operation << num2 << " = 2." << num1 / num2; break;

    case '%':
         /* Because I declared my numbers as a float, the modulo operation does not float.
        --> I declared two boolean variables to check if the numbers are int or not
        --> I had to convert it into an integer, and compared it against the initial number for example 5.0
        is an integer and a float but 5.1 is simply a float . do if the input is an integer, the modulo operation
        is performed within the integers, else it displays invalid */
        bool isNum1Int, isNum2Int;
        isNum1Int = (int(num1) == num1);
        isNum2Int = (int(num2) == num2);

        if (isNum1Int && isNum2Int)
        {
            cout<< num1 << operation << num2 << " = " << int(num1) % int(num2);

        }

        else
        {
                cout << "Not Valid";
        }
        break;

    default : cout << "Invalid operation" << endl; // if operation is not part of the above listed, print Invalid operation
    }



    system("pause>0");
}
