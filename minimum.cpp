#include <iostream>
using namespace std;
int main()
{

    int A[5] = {84, 699, 32, 75};

    int min = A[0];

    for (auto x : A)
    {
        if (x < min)
        {
            min = x;
        }
    }

    cout << "minimum element is " << min;

    return 0;
}