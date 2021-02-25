#include <iostream>
using namespace std;

void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main()
{
    int array[10] = {19, 12, 15, 2, 4, 11, 11, 5, 13, 14};
    int size = sizeof(array) / sizeof(int);

    bubble_sort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}