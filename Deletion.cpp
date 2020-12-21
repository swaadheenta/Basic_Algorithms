#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n,j,k;
    cout<<"Enter the number of elements ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements one by one \n";
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position  from where element is to be deleted";
    cin>>k;
   j = k;

   while( j < n)
   {
      arr[j-1] = arr[j];
      j = j + 1;
   }

   n = n -1;

   cout<<"The array elements after deletion :\n";

   for(i = 0; i<n; i++) {
      cout<<arr[i]<<" ";
   }
}

