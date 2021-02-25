#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 10;
    for (int i = count; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}
