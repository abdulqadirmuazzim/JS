#include <iostream>
#include <string>
using namespace std;

int main()
{
    int name = 8;
    for (int a = 0; a < 5; a++)
    {
        switch (name)
        {
        case 1:
            cout << "ssss\n";
        case 2:
            cout << "key";
        default:
            cout << "I get it now, using single quotes returns an error\n";
        }
    }
}