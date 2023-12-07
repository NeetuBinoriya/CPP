// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Employee
{
public:
    int empid;
    float salary;
    string name;
    // Parameterised Constructor is a type of method
    // Employee(int eid, float s, string n)
    // {
    //     empid = eid;
    //     salary = s;
    //     name = n;
    // }
    //Example for Global Variable Same name Using in Constructor
Employee(int empid, float salary, string name)
    {
       this->empid = empid;
        this->salary = salary;
        this->name = name;
    }
public:
    void print()
    {
        cout << endl
             << empid << endl
             << salary << endl
             << name;
    }
};
int main()
{
    Employee e1(123, 20200.2345, "Ram");

    e1.print();
    return 0;
}
