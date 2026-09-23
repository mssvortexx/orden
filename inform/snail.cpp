#include <iostream>

using namespace std;

int main()
{    
    int h, a, b, x; 

    cin >> h;
    cin >> a;
    cin >> b;

    x = (((h - b) + (a - b - 1))/ (a - b));

    cout << x << endl;
}