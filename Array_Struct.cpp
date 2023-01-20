#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    struct a
    {
        int j;
        char c[50];
        float f;
        double d;
    } s1[2];

    char l[20];
    //fgets(l, 20, stdin);
    cin.getline(l,50);
    cout << l << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the value of J:" << endl;
        cin >> s1[i].j;
        cout << "Enter the value of F:" << endl;
        cin >> s1[i].f;
        cout << "Enter the value of D:" << endl;
        cin >> s1[i].d;
        cout << "Enter the value of Name:" << endl;
        cin.getline(s1[i].c,50);
        // strcpy(s1[i].c,"hello world");
        fflush(stdin);
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "value of J: " << s1[i].j << endl;
        cout << "value of F: " << s1[i].f << endl;
        cout << "value of D: " << s1[i].d << endl;
        cout << "value of Name: " << s1[i].c << endl;
    }
    return 0;
}