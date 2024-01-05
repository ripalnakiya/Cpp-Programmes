#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number of lines:";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i==1||i==a)
                cout<<"*";
            else if(j==1||j==i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";       
    }
    
}