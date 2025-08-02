// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int fibbo(int val)
{
    if(val <= 1)
    return val;
    return fibbo(val - 2) + fibbo(val - 1) ;
}

int main() {
    int num;
    cin >> num;
    cout << fibbo(num);
    return 0;
}
