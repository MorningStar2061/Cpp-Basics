#include <bits/stdc++.h>
using namespace std;
// Swap using pointers.
void swap(int *, int *);
int main()
{
    int a, b;
    cout << "Enter A" << endl;
    cin >> a;
    cout << "Enter B" << endl;
    cin >> b;
    swap(&a, &b);
    cout << "A in main = " << a << endl;
    cout << "B in main = " << b << endl;
}
void swap(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
    cout << "A in function = " << *a << endl;
    cout << "B in function = " << *b << endl;
}