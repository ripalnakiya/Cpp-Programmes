#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number of lines:";
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i; j++)
            cout<<"*";
        cout<<"\n";
    }
}
        