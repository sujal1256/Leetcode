/*
print lowercase if character is between 'a' and 'z';
print Uppercase if character is between 'A' and 'Z';
print number if character is between '1' and '9';


*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    cout << "Enter the  character ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') // here the conditions completely work on ascii value.
    {
        cout << "Lowercase Letters";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase Letters";
    }
    else if (ch >= '1' && ch <= '9')
    {
        cout << "Numbers";
    }
    else
    {
        cout << "Invlid input";
    }
    return 0;
}
