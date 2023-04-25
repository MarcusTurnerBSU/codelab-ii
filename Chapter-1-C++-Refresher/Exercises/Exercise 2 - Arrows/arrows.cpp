#include <iostream>
using namespace std;

int main()
{
    int spaces;

    //this for loop will run 5 times
    for (int i = 1; i <= 5; i++)
    {
        //this is adding a space each time it loops over
        for (spaces = i; spaces < 5; spaces++)
        {
            cout << " ";
        }
        //this is placing the right amount of '*' the first five lines
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }

        cout << "\n";
    }
    //this is adding the final row of '*' to make the arrow
    for (int s = 1; s <= 3; s++) {
        cout << "   ***" << endl;
    }

    return 0;
}