#include <iostream>

using namespace std;

int main()
{    
    int n;
    int sum = 0;

    cin >> n;

    for (int i = 0; i < 3; i++)
    {    
        sum += n % 10;
    }
    cout << sum << endl;
}