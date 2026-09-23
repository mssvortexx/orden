#include <iostream>

using namespace std;

int main()
{    
    int a, p;
    cin >> p;
    cin >> a;

    int z = a / p;
    int m = p * (z + 1);
    int x = m - a;
    cout << x << endl;
}