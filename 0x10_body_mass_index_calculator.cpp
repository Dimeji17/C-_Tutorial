#include <iostream>
using namespace std;


int main()
{
    // BMI(Body Mass Index) calculator  kg/m*m

    // declare variables for BMI, mass and weight
    double BMI;
    double weight;
    double height;

    // Enter the value of weight in kilogram(kg)
    cout << "Enter weight in kg : ";
    cin >> weight;
    cout << endl;

    // Enter the value of height in meters(m)
    cout << "Enter height in m : ";
    cin >> height;
    cout << endl;

    // Calculate the value for the mass body index
    BMI = (weight/(height*height));
    cout << "your BMI is ";
    cout << BMI <<"kg/m^2 and ";

    if ((BMI >= 18.5) && (BMI <= 25.5))
    {
        cout << "you are Fit\n"<<endl;
    }
    else if (BMI > 25.5)
    {
        cout << "you are Over weight\n"<<endl;
    }
    else
    {
      cout << "you are Under weight"<<endl;
    }





    system("pause>0");
}
