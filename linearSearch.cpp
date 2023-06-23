#include <iostream>
using namespace std;
// LinearSeach in an array
int main(int argc, char const *argv[])
{
    // we are given an array we need to tell that ele is present in that array or not

    int a[12] = {1, 2, 43, 5, 56, 52, 7, 3, 7, 3};
    int ele;
    cout << "Enter element you want to search: ";
    cin >> ele;
    for (int i = 0; i < 12; i++)
    {
        if (a[i] == ele)
        {
            cout << "Element found" << endl;
            break;
        }
    }
    return 0;
}
