#include <iostream>
using namespace std;

struct info
{
    int age;
    string name;
    bool elegible;
    char gender;
};
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

    cout << "The following is a list of applicants:\n"
         << "Name: " << p1.name << " Age: " << p1.age << " Elegible: " << p1.elegible << endl;
    cout << "Name: " << p2.name << " Age: " << p2.age << " Elegible: " << p2.elegible << endl;
    cout << "Name: " << p3.name << " Age: " << p3.age << " Elegible: " << p3.elegible << endl;
    string food = "Bread";
    string *ptr = &food;
    cout << &ptr << endl;
    cout << ptr << endl;
}