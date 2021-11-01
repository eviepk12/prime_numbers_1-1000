// Print out odd numbers in a triangle pattern

#include <iostream>

using std::cout;
using std::cin;

int main()
{

    int i,j,count=0;

    for (i = 1; i<=1000; i++)
    {
        for (j = 2; j<i; j++)
        {
            if (i % j==0)
            {
                count++;
                break;
                cout << count++ << "\n ";
            }
        }
        if (count==0 && i !=1)
         cout << i << "\t ";
         count=0;
    }

    cin.get();
    return 0;
}