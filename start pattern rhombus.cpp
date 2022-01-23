#include<iostream>
using namespace std;
int main()
{
    int i,j, space, n;
    cin>>n;
    space=n-1;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)   {cout<<" ";}
        for(int j=0;j<=i;j++)   {cout<<"* ";}
        cout<<endl;
        space=space-1;
    }
    space=0;
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<=space;j++)   {cout<<" ";}
        for(int j=1;j<i;j++)       {cout<<"* ";}
        cout<<endl;
        space=space+1;
    }



}
