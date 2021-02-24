#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        k=i+1;
        for(j=0;j<k;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
