#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nmax=100001;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
   int freq[nmax]={0};

    for(int i=0;i<n;++i)
    {
        freq[a[i]]++;
    }

    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<" -> "<<freq[a[i]]<<"\n";
    }
}
