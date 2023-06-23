#include <iostream>
using namespace std;
// reverse an array

int main(int argc, char const *argv[])
{
    // input of an array
    cout << "Enter the size of array";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n / 2; i++) // simply swapped the element from start with the elemet at the end the loop is upto n/2 because agr vo pure n tk gayi toh swapped number ko firse swap ke degi or wahi array dobara bann jayega.
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
