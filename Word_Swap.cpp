#include <bits/stdc++.h>
using namespace std;
int main()
{
    string fruit1 = "Apple";
    string fruit2 = "Orange";

    cout << "Before swap - fruit 1 is: " << fruit1 << endl;
    cout << "Before swap - fruit 2 is: " << fruit2 << endl;

    // swapping
    fruit1.swap(fruit2);

    cout << "After swap - fruit 1 is: " << fruit1 << endl;
    cout << "After swap - fruit 2 is: " << fruit2 << endl;

    return 0;
}