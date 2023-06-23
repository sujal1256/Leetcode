#include <iostream>
using namespace std;
#include <bits/stdc++.h>
void bubbleSort(vector<int> &arr, int n)
{
    bool swapped = false; // it will be useful for all ready sorted arrays if in forst round no element gets swapped then the array will be already sorted thus this is a more optimized solution.
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        { // ith rounf mein ith element right location pe aa jayega
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped = false)
        {
            break;
        }
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {6, 0, 14, 5, 2, 6, 0};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubbleSort(arr, arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
