#include <iostream>
using namespace std;

int main()
{
    pair<int, string> p;

    // p = make_pair(2, "abc");
    p = {2, "abc"};

    pair<int, string> p1 = p;  // copy of p
    pair<int, string> &p2 = p; // reference to p

    cout << p.first << " " << p.second << endl;

    // Pairs are used to maintain relation between two objects
    // 1 is related to 5, 2 is related to 6, 3 is related to 7
    int arr1[] = {1, 2, 3};
    int arr2[] = {5, 6, 7};

    pair<int, int> p_array[3];

    // Initializing the array of pairs
    for (int i = 0; i < 3; i++)
        p_array[i] = {arr1[i], arr2[i]};

    // swapping the pairs, and the relation is maintained
    swap(p_array[0], p_array[1]);

    for (int i = 0; i < 3; i++)
        cout << p_array[i].first << " <-> " << p_array[i].second << endl;

    return 0;
}