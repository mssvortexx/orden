#include <iostream>

using namespace std;

int main()
{    
    int num;

    cin >> num;

    int num1 = num;

    int a = num1 % 10;
    num1 /= 10;
    int b = num1 % 10;
    num1 /= 10;
    int c = num1 % 10;
    num1 /= 10;
    int d = num1 % 10;

    int num2 = (a * 1000) + (b * 100) + (c * 10) + d;
    int x = (num - num2) + 1;

    cout << x << endl;
}