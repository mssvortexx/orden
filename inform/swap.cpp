#include <iostream>

using namespace std;

int main()
{    
    int n;
    cin >> n;

    int t = 0;
    t += (45 * n) + ((n - 1)/2 * 15) + (n / 2) * 5;

    cout << (t / 60) + 9 << " " << t % 60 << endl;
}