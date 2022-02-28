//Given a integer as a input and replace all the '0' with '5' in the integer

//Input Format, Enter an integer n
// 406---> 456

//Constraints
//0<=n<=1000000000000

//Output Format
//All zeroes are replaced with 5

#include<bits/stdc++.h>
using namespace std;
long long revno(int n)
{
    long long rev=0;
    while(n!=0)   // no is 54  40+
    {
        int t=n%10;
        //if(t==0){t==5;}
        rev=(10*rev)+t;
        n=n/10;
    }
    return rev;
}
int main()
{
long long n;

    cin>>n;
    if(n==0){cout<<"5"; return 0;}
    long long rev=0;
    while(n!=0)   // no is 54  40+
    {
        int t=n%10;
        if(t==0){t=5;}
        rev=(10*rev)+t;
        n=n/10;
    }
    long long r=rev;
    cout<<revno(r);



}
