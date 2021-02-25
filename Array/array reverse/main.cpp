#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int size = sizeof(arr) / sizeof(int);
    int reverse[10] = {0};
    for (int i = 0; i < size; i++)
    {

        reverse[i] = arr[size - (i + 1)];
    }

    for (int i = 0; i < size; i++)
    {
        cout << reverse[i] << ", ";
    }

    return 0;
}