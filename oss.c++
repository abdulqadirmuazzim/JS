#include <iostream>
using namespace std;

int main()
{
    struct
    {
        int num;
        string nin;
        bool bull;
        char one;
    } first, sec, thi;

    first.num = 2;
    first.nin = "what";
    first.bull = "";
    first.one = 'A';
    sec.nin = "Abd";
    sec.one = 'Q';
    sec.num = 10;
    thi.nin = "mu";
    cout << first.num << endl
         << first.nin << endl;
}