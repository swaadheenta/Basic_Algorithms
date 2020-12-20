#include<bits/stdc++.h>
using namespace std;

int main()
{   cout<<"Enter the size of the array";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter the values of the array";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of subarray";
    int k;
    cin>>k;
    int csum=0;

    for(int i=0;i<k;i++)
    {
        csum+=a[i];
    }

    cout<<"Sum of elements from 0 to "<<k-1<<" = "<<csum<<"\n";

    for(int i=k;i<n;i++)
    {
        csum=(csum-a[i-k])+a[i];
        cout<<"Sum of elements from "<<(i-k+1)<<" to "<<i<< " = "<<csum<<"\n";
    }
}
