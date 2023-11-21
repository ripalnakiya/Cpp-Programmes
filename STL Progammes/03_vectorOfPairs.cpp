#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<pair<int, int>> &v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << endl;
    cout << endl;
}

int main()
{
    vector<pair<int, int>> v = {{1, 2}, {2, 4}, {3, 6}};
    printVector(v);

    vector<pair<int, int>> v1;
    for(int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;
        // v1.push_back(make_pair(x, y));
        v1.push_back({x, y});
    }
    return 0;
}