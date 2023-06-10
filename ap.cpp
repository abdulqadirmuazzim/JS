#include <iostream>
using namespace std;

// type variablename = valie;
int num = 66;
double getit = 12.434343;
char itit = 'A';
string str = "this is a test";

bool ff = true;

double sum = num + getit;

int main()
{
    double x, y, z;
    x = 3e-8;
    y = 2e9;
    z = 4.55e+2;
    cout << (y <= z && x <= z);
    return 0;
}
