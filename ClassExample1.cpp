// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Employee
{
public:
    int empid;
    float salary;
    string name;
};

int main(){
    Employee e1;
    e1.empid = 1234;
    e1.salary = 20200.345;
    e1.name = "Mohan";
    cout<<e1.empid <<endl<<e1.salary<<endl<<e1.name;
}
