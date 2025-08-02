#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,6};
    vector<int>oddVec;
    vector<int>evenVec;
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] % 2 == 0)
        evenVec.push_back(vec[i]);
        else
        oddVec.push_back(vec[i]);
    }
    cout << "Even vector:" << endl;
    for (int x : evenVec)
    {
        cout << x <<  " ";
    }
    cout << "\nOdd vector:" << endl;
    for (int k : oddVec)
    {
        cout << k <<  " ";
    }

    return 0;
}
