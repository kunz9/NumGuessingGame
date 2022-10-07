// Number guessing game in C++
#include <math.h>
#include <iostream>
using namespace std;
int n, i;
int number;
float fail();
float correct();
float differentnumber();
float RandomNumber();

int main()
{ // Generating different random numbers each time game will run         
    //srand(time(0));

    //Generating random numbers   
  
    differentnumber();
    RandomNumber();
    cout << "Guess a number between 0 and 10, only 3 turns will be allowed: ";

    correct();
    fail();
    return 0;
}

float differentnumber()
{
    srand(time(0));
    return 0;
}

float RandomNumber()
{
    number = rand() % 11;
    return 0;
}

float fail()
{
    if (i == 3)
    {
        cout << "\n\nSorry, you failed to guess the right number.";
        cout << "\nThe right answer is: " << number;
    }
    return 0;
}

float correct()
{
    for (i = 0; i < 3; i++)
    {
        cin >> n;
        if (number == n)
        {
            cout << "\nCongrats, you have guessed the right number which is, " << number;
            cout << "\nNumber of turns you have used: " << i + 1;
            break;
        }
     
        else if (number > n)
        {
            cout << "\nYour guess is lower than right number, Turns left: " << 3 - (i + 1);
            if (3 - (i + 1) > 0)
            {
                cout << "\nTry again, entering a number higher than previous: ";
            }
        }
        else if (number < n)
        {
            cout << "\nYour guess is higher than right number, Turns left: " << 3 - (i + 1);
            if (3 - (i + 1) > 0)
            {
                cout << "\nTry again, entering a number lower than previous: ";
            }
        }
    }
        return 0;
}