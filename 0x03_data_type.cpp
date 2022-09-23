#include <iostream>
using namespace std;

int main()
{
    int yearOfBirth = 2001;
    char myName = 'Dimeji_!7';
    bool isOlderThan18 = true;
    float avgerageGrade = 10.4;
    double creditBalance = 636366372272; // double float

    cout<<"size of int is: "<<sizeof(int)<<"bytes\n"; // size of int
    cout<<"size of float is: "<<sizeof(float)<<"bytes\n"; // size of float
    cout<<"min int value is: "<<INT_MIN<<endl; // min int value
    cout<<"max int value is: "<<INT_MAX<<endl;// max int value
    cout<<"size of unsigned int is: "<<sizeof(unsigned int)<<"byte\n";//size of unsigned int
    cout<<"max UInt value is: "<<UINT_MAX<<endl;// max size of unsigned int
    cout<<"size of character is: "<<sizeof(char)<<"bytes\n";//size of character
    cout<<"size of boolean is: "<<sizeof(bool)<<"bytes\n";//size of boolean
    cout<<"size of double is: "<<sizeof(double)<<"bytes\n";//size of double

    int intMax = INT_MAX;
    cout<<intMax<<endl;
    cout<<intMax+1<<endl;


    system("pause>0");
}
