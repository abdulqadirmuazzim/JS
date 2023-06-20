#include <iostream>
using namespace std;

struct info
{
    int age;
    string name;
    bool elegible;
    char gender;
};

void func(int ff)
{
    cout << "Testing this function...\n";
    cout << ff * 3 << endl;
}
int main()
{
    info p1;
    p1.name = "Abdulqadir";
    p1.age = 18;
    p1.gender = 'M';
    p1.elegible = true;

    info p2;
    p2.name = "lukman";
    p2.age = 50;
    p2.gender = 'M';
    p2.elegible = false;

    info p3;
    p3.name = "Laila";
    p3.age = 21;
    p3.gender = 'F';
    p3.elegible = true;

    string food = "Bread";
    string *ptr = &food;
    string *coo = &food;
    cout << *ptr << endl;
    cout << ptr << endl;
    // Changing the value of 'coo' variable.
    *coo = "Meat";
    cout << *coo << endl;
    cout << food << endl;
    func(22);
    return 0;
}