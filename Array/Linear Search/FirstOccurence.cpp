

#include <iostream>
using namespace std;

int main()
{
    int arrary[1000] = {0};
    int size = 0;
    cout << "Enter the size or Array : ";
    cin >> size;

    cout << "Enter the Enter array value : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arrary[i];
    }

    int key = 0;
    cout << "Enter the Number to check : ";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        if (arrary[i] == key)
        {
            cout << "Present at : " << i << endl;
            break;
        }
    }

    if (i == size)
        cout << "Element not found";

    return 0;
}
