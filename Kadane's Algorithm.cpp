#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int best=a[0],curr=a[0];
    for(int i=1;i<n;i++)
    {
        curr=max(a[i],curr+a[i]);
        best=max(curr,best);
    }
    cout<<best;
}
