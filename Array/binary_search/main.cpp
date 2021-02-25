#include <iostream>
#include <climits>
using namespace std;

int binary_search(int a[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        cout << "Starte : " << s << " End : " << e << " mid : " << mid << endl;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int array[10] = {1, 2, 3, 5, 7, 10, 11, 12, 15, 25};
    int size = sizeof(array) / sizeof(int);
    int key = 0;

    cout << "Enter the number to find : ";
    cin >> key;
    int index = binary_search(array, size, key);

    if (index == -1)
    {
        cout << "Element not Present";
    }
    else
    {
        cout << key << " is present at position : " << index;
    }

    return 0;
}