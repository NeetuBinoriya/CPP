// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Employee
{
public:
    int empid;
    float salary;
    string name;

public:
    void print()
    {
        cout <<endl << empid << endl
             << salary << endl
             << name;
    }
};
int main()
{
    Employee e1;
    // e1.empid = 1234;
    // e1.salary = 20200.234;
    // e1.name = "Ram";
    // cout << "Enter the Name of the Employee" << endl;
    // cin >> e1.name;
    // cout << "Enter the Salary of the Employee" << endl;
    // cin >> e1.salary;
    // cout << "Enter the Employee Id of the Employee" << endl;
    // cin >> e1.empid;

    e1.print();
    return 0;
}
