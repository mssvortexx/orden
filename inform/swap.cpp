#include <iostream>

using namespace std;

int main()
{    
    int h1, m1, s1, h2, m2, s2;
    
    cin >> h1;
    cin >> m1;
    cin >> s1;
    cin >> h2;
    cin >> m2;
    cin >> s2;

    int t1 = s1 + m1 * 60 + h1 * 3600;
    int t2 = s2 + m2 * 60 + h2 * 3600;

    if (t1 > t2)
    {    
        cout << t1 - t2 << endl;
    }
    else 
    {    
        cout << t2 - t1 << endl;
    }
}