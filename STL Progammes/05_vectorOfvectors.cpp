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
    // Vector of vectors is 2D vector
    // Where neither number of rows are not fixed
    // nor number of columns are not fixed

    // Each element of vector v1 stores a int
    vector<int> v1;

    // Each element of vector v stores a vector (of type int)
    vector<vector<int>> v;

    // Adding an empty vector to v
    // v.push_back(vector<int>());

    // Let us create a 2D vector of 3x4
    // Taking Input - Version 1
    for(int i=0; i<3; i++)
    {
        // Create a vector of type int
        vector<int> temp;

        for(int j=0; j<4; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }

        // Push the vector temp into vector v
        v.push_back(temp);
    }

    // Taking Input - Version 2
    // for(int i=0; i<3; i++)
    // {
            // Initialize a vector element with empty vector
            // Then we can directly push_back elements into it
    //     v.push_back(vector<int>());
    //
    //     for(int j=0; j<4; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }   
    // }

    // Printing Output
    for(int i = 0; i < 3; i++)
        printVector(v[i]);

    return 0;
}