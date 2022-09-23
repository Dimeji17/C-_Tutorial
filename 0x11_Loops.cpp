#include <iostream>56
using namespace std;

int main()
{
    // Program to write all numbers between 100-500 that is divisible by 3 and 5

    int num = 100;
    while (num >= 100 && num <= 500)
    {
        if (num % 3 == 0 && num % 5 == 0) // checks if num is divisible by both 3 and 5
        {
            cout << num << " is divisible by both 3 and 5" << endl;
        }

        else if (num % 3 == 0) // checks if num is divisible by only 3
        {
            cout << num << " is divisible by only 3" << endl;
        }
        else if (num % 5 == 0) // checks if num is divisible by only 5
        {
            cout << num << " is divisible by only 5" << endl;
        }
        num++;
    }

    system ("pause>0");

}
