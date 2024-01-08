#include <iostream>
#include <vector>
using namespace std;

// Use reference to avoid copying the vector -> time complexity - O(n)
// In case of Arrays, Only pointer is copied, not the whole array
void printVector(vector<int> &v)
{
    // We can use v.size() to get the size of the vector
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> v;
    // vector will initial size 5, and the size can increase automatically
    // vector<int> v1(5);

    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // time complexity - O(1)
    }

    printVector(v);

    // copy the vector v to v1
    vector<int> v1 = v; // time complexity - O(n)

    // In case of arrays, only the pointer is copied, not the whole array
    // int arr2[] = arr1;


    return 0;
}