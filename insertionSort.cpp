#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            if (arr[j] > temp)
            {
                // here we have used temp becaus if block ke andar wali body i the element ko chnga kardegi that is why we have to change it
                arr[j + 1] = arr[j];
            }
            else
            {
                // jahan pe jth element chota hogya yahan break ho jega
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {4, 12, 11, 20, 6, 8, 42, 1};
    insertionSort(arr.size(), arr);
    cout << "Sorted array is:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
