#include <iostream>
using namespace std;

int main(void)
{
    int size;
    cout << "Please enter the size: ";
    cin >> size;
    for (int column = 0; column < size; ++column)
    {
        for (int starts = 0; starts < size - column; ++starts)
        {
            cout << "* ";
        }
        for (int spaces = 0; spaces < column; ++spaces)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}