#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int prefix_sum[n];
    prefix_sum[0]=a[0];

    for(int i=1;i<n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+a[i];
    }
    cout<<"The original array was\n";
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    cout<<"\nThe prefix sum array is\n";
    
    for(int i=0;i<n;i++)
        cout<<prefix_sum[i]<<" ";
}
