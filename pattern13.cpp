#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i,j;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        for(j=1;j<(i*2);j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
