#include <iostream>
using namespace std;

int main()
{
    // Program demonstrating conditional operators.
    // A game is used as to demonstrate where  two users play the game.
    // the first user guesses a number and the second user guesses another number
    // if the guess the same number print correct else prints incorrect


    int firstnum, secondnum;

    // first user input
    cout << "First user: ";
    cin >> firstnum;
    system("cls");// clears first users number so second user does not "guess"(haha) it

    //second user input
    cout << "second user: ";
    cin >> secondnum;


    /************** Using if_else statement **************

   /* if (firstnum == secondnum)
    {
        cout << "correct!"<<endl;
    }
    else
    {
        cout << "Incorrect"<<endl;
    }
*   ***********************************************************/
    (firstnum == secondnum)? cout << "You guessed correctly!!!!!!!!!!" : cout << "You guessed wrong, i'm sure you can do better champ";
    // this basically does the same as the if_else statement.
    // the "?" means if firstnum == secondnum prints correct.
    // the ":" means that else if firstnum != secondnum prints failed



    system("pause>0");
}
