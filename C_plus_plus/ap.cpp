#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> list;
    std::vector<int> made;

    // size of list
    int length = sizeof(made) / sizeof(int);

    for (int a = 1; a <= 10; a++)
    {
        list.push_back(a);
        for (int b : list)
        {
            if (a % b == 0)
            {
                made.push_back(b);
            };
        };

        if (sizeof(made) / sizeof(int) == 2)
        {
            cout << a << " is a prime number!!\n";
        };
        made.clear();
        // cout << length << endl;
    };
}