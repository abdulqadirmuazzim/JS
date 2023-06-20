#include <iostream>

using namespace std;

int main()
{
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}};

    int hits = 0;
    int turns = 0;

    while (hits < 4)
    {
        int row, col;

        cout << "Selecting coordinates\n";

        cout << "Choose a row between 1 and 4:";
        cin >> row;

        cout << "Choose a column between 1 and 4:";
        cin >> col;

        if (ships[row - 1][col - 1])
        {
            ships[row - 1][col - 1] = 0;
            hits++;

            cout << "A Hit!, " << (4 - hits) << " left.\n\n";
        }
        else
        {
            cout << "Missed hit\n";
        }
        turns++;
    }
    cout << "Victorious!\n"
         << "You won in " << turns << " turns.\n";
}