#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// in this question we need to reverse the array after index m(3);
void reverseArray(vector<int> &arr, int m)
{
    int n = arr.size();
    int j = 1, temp;
    for (int i = m; i < (n + m) / 2; i++)
    {
        if (i + 1 == n - j || i + 1 == n - 1)
        {
            break;
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[n - j];
        arr[n - j] = temp;
        j++;
    }
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {17, 21, 18, 10, 14, 13, 26, 17, 19, 18};
    reverseArray(arr, 3);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
