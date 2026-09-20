#include <iostream>

using namespace std;

int main()
{    
    int time;
    cin >> time;

    
    while (time--)
    {   
        int length;
        cin >> length;
        if (length % 4 != 0)
        {    
            cout << "NO" << endl;
            continue;
        }

        int half = length / 2;
        int even[half], odd[half];


        int sum = 0;
        int num = 2;
        for(int i = 0; i < half; i++)
        {    
            even[i] = num;
            odd[i] = num - 1;
            sum += num;
            num +=2;
        }

        int last = sum;
        for (int i = 0; i < half - 1; i++)
        {    
            last -= odd[i];
        }


        for (int i = 0; i < half; i++)
        {    
            cout << even[i] << " ";
        }

        for(int i = 0; i < half - 1; i++)
        {    
            cout << odd[i] << " ";
        }
        cout << last << endl;

      }  
      return 0;
}