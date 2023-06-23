#include <iostream>
using namespace std;
// swap alternate numbers
/*
Output for {1,2,3,4,5,6} is
{2,1,4,3,6,5};

Output for {1,2,3,4,5} is
{2,1,4,3,5}
*/
int main(int argc, char const *argv[])
{
    int arr1[5] = {1, 2, 3, 4, 5};
    // int arr1[6] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 5; i += 2)
    {
        int temp = arr1[i];
        arr1[i] = arr1[i + 1];
        arr1[i + 1] = temp;
    }

    for (int i = 0; i < 5; i++) // in case of odd
    {
        cout << arr1[i] << " ";
    }
    return 0;
}
