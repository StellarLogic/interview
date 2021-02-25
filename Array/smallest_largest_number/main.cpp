#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int size = 0;
    int array[1000] = {0};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    cout << "Enter the size of Array : ";
    cin >> size;
    cout << "Enter value for the Array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }

        if (array[i] > largest)
        {
            largest = array[i];
        }
    }

    cout << "Smallest Number : " << smallest << endl
         << "Largest Number : " << largest;

    return 0;
}