#include <iostream>

using namespace std;

int main()
{    
    int v, t;

    cin >> v;
    cin >> t;

    int r = v * t;

    if (r < 0)
    {    
        while (r < 0)
        {    
            r += 109;
        }
        cout << r << endl;
        return 0;
    }
    else if (r >= 109)
    {    
        while (r >= 109)
        {    
            r -= 109;
        }
        cout << r << endl;
        return 0;
    }
    else
    {    
        cout << r << endl;
        return 0;
    }

}