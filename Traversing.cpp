#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cout<<"Enter the number of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements one by one \n";
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (i = 0; i < n ; i++)
    {
       cout<<"Element present at index "<<i+1<<" is "<<arr[i]<<"\n";
    }

}
