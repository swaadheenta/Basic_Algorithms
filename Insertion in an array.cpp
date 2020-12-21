#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100] = { 0 };
    int i, value, pos, n = 10;
    for (i = 0; i < 10; i++)
        a[i] = i + 1;

    for (i = 0; i < n; i++)
        cout<< a[i];
    cout<<"\n";

    value = 50;
    pos = 5;
    n++;

    for (i = n-1; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value; 

    for (i = 0; i < n; i++)
        cout<< a[i];

    return 0;
}
