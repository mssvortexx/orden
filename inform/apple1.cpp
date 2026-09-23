#include <iostream>

using namespace std;

int main()
{    
    int a, p;
    cin >> p;
    cin >> a;

    int z = a % p;
    int x = p - z;
    int n = x % p;

    cout << n << endl;
}