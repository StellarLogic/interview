#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter number";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int check = 0;
        for (int j = 1; j <= n; j++)
        {
            if (i <= j || i == 1)
            {
                continue;
            }
            else if (i % j == 0)
            {
                check += j;
            }
        }
        if (i == check)
        {
            cout << "CHEKC : " << check << endl;
        }
    }
    cout << sum;

    return 0;
}
