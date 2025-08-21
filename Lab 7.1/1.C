#include <iostream>
using namespace std;

class Employee 
{
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    float emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    void input() 
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Name: ";
        cin >> emp_name;
        cout << "Enter Age: ";
        cin >> emp_age;
        cout << "Enter Role: ";
        cin >> emp_role;
        cout << "Enter Salary: ";
        cin >> emp_salary;
        cout << "Enter City: ";
        cin >> emp_city;
        cout << "Enter Experience (years): ";
        cin >> emp_experience;
        cout << "Enter Company Name: ";
        cin >> emp_company_name;
    }

    void display() 
    {
        cout << "\nEmployee ID: " << emp_id
             << "\nName: " << emp_name
             << "\nAge: " << emp_age
             << "\nRole: " << emp_role
             << "\nSalary: " << emp_salary
             << "\nCity: " << emp_city
             << "\nExperience: " << emp_experience << " years"
             << "\nCompany: " << emp_company_name << "\n";
    }
};

int main() 
{
    Employee emp[5];
    for (int i = 0; i < 5; i++) 
    {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        emp[i].input();
    }

    cout << "\n--- Employee Records ---\n";
    for (int i = 0; i < 5; i++) 
    {
        emp[i].display();
    }

    return 0;
}
