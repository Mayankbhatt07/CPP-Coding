#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int i,j;
    for(i = n; i >= 1; i--)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }

        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
