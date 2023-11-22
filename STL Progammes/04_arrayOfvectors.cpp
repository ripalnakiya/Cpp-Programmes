#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int> &v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    // Array
    int a[3];

    // Array of vectors
    vector<int> arr[3];

    // each arr[i] represents a vector
    // arr[0] is a vector, 
    // arr[1] is a vector, 
    // arr[2] is a vector

    // Taking Input
    for(int i = 0; i < 3; i++)
    {
        int vectorSize;
        cout << "\nEnter size and then Elements of vector " << i+1 << " : ";
        cin >> vectorSize;
        for(int j = 0; j < vectorSize; j++)
        {
            int x;
            cin >> x;
            arr[i].push_back(x);
        }
    }

    // Printing Output
    for(int i = 0; i < 3; i++)
        printVector(arr[i]);

    // Similar to 2D array
    cout << "Element at position arr[1][2]"<< arr[1][2] << endl;

    // Basically, Array of Vectors is 2D array
    // where number of rows are fixed
    // but number of columns are not fixed

    /*
    arr[0] -> 1 2 3
    arr[1] -> 2 4 6
    arr[2] -> 1 4 9 16 25
    */

    return 0;
}