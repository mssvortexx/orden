#include <iostream>

using namespace std;

int main()
{    
    int n, m, x;

    cin >> n;
    cin >> m;

    x = ((n * (n / m)) + (m * (m / n))) / ((n / m) + (m / n));

    cout << x << endl;
}