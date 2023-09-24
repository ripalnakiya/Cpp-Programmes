#include <iostream>
#include <cmath>
using namespace std;

int findMaxNum(int N)
{
    int max = N * N;
    int half = ceil(max / 2);    
    while ((max - 4) > half)
    {
        max = max - 4;
    }
    return max;
}

int main()
{
    int n = 3;
    int max = findMaxNum(n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {

        }
        for(int k = 0; k < n; k++)
        {

        }
    }
    return 0;
}