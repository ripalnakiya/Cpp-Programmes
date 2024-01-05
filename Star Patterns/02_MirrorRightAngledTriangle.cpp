#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number of lines:";
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        for (int j=0 ; j<a-i-1 ; j++)  // (int j = a-i-1 ; j > 0; j--)
            cout<<" ";
        for (int k = 0; k <= i; k++)
            cout<<"*";
        cout<<"\n";   
    }
    
}