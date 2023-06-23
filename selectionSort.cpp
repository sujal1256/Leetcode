#include <iostream>
using namespace std;

/*
Selection Sort is used for arrays having less size and there is a memory contraint
otherwise other sorting methods are used.*/
int main(int argc, char const *argv[])
{
    int arr[] = {6, 4, 9, 7, 1, 32};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i]) // < for ascending > for descending
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
