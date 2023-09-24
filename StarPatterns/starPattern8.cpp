#include<iostream>
using namespace std;
void star(int p)
{
    for(int i = 0 ; i < p ; i++)
        cout<<"*";
}
void space(int q)
{
    for(int i = 0 ; i < q ; i++)
    cout<<" ";
}
int main()
{
    int a;
    cout<<"Enter number of lines:";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        star(i);
        space(a-i);
        star(a-i+1);
        space((i-1) * 2);
        star(a-i+1);
        space(a-i);
        star(i);
        cout<<"\n";
    }
}