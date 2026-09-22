#include <iostream>

using namespace std;

void print(int x);

int main()
{    
    int t;

    cin >> t;

    int m = t / 60;
    int s = t % 60; // конечные секунды
    int h = m / 60;
    m %= 60;
    h %= 24;

    print(h);
    cout << ":";
    print(m);
    cout << ":";
    print(s);

}

void print(int x)
{    
    if (x < 10)
    {    
        cout << "0" << x;
    }
    else
    {    
        cout << x;
    }
}