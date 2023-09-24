#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter number of lines :";
    cin>>a;
    for (int i = a-1; i >= 0; i--)    // for (int i = 1; i <= a; i++)
    {
        for (int k = a-i; k > 1 ; k--)        //for (int k = 1; k <= i; k++)
            cout<<" ";   
        for (int j = 0; j <= i*2  ; j++)  //for (int j = 0; j <=(a-i)*2 ; j++)
            cout<<"*";
        cout<<endl;       
    }
    return 0;
}
