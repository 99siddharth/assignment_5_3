#include<iostream>
#include<stdio.h>

using namespace std;
class employee
{
    public:
    
        int amt,salary;
        float hrs;
        void getinfo(int sal,float hr)
        {
            salary=sal;
            hrs=hr;
        }
        void addsal()
        {
            if(salary<=500)
            {
                salary=salary+10;
            }
        }
        void addwork()
        {
            if(hrs>6)
            {
                salary=salary+5;
            }
        }
        void display()
        {
            cout << "Salary is :" << salary << "\n";
            cout << "Work Hours:" << hrs << "\n";
        }
};

int main()
{
    employee emp;
    int salar;
    float work;
    cout <<"Enter the salary in $: ";
    cin >> salar;
    cout << "Enter the hours in hrs: ";
    cin >> work;
    emp.getinfo(salar,work);
    emp.addsal();
    emp.addwork();
    emp.display();
    return 0;
}