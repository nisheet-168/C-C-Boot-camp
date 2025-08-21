#include <iostream>
using namespace std;

class Customer 
{
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_city;
    string cust_mobile_number;
    int cust_simcard_validity;
    string cust_telecom_brand_name;

public:
    void setData() 
    {
        cout << "Enter Customer ID: ";
        cin >> cust_id;
        cout << "Enter Name: ";
        cin >> cust_name;
        cout << "Enter Age: ";
        cin >> cust_age;
        cout << "Enter City: ";
        cin >> cust_city;
        cout << "Enter Mobile Number: ";
        cin >> cust_mobile_number;
        cout << "Enter SIM Validity (years): ";
        cin >> cust_simcard_validity;
        cout << "Enter Telecom Brand: ";
        cin >> cust_telecom_brand_name;
    }

    void getData() 
    {
        cout << "\nCustomer ID: " << cust_id
             << "\nName: " << cust_name
             << "\nAge: " << cust_age
             << "\nCity: " << cust_city
             << "\nMobile: " << cust_mobile_number
             << "\nSIM Validity: " << cust_simcard_validity << " years"
             << "\nTelecom Brand: " << cust_telecom_brand_name << "\n";
    }
};

int main() 
{
    Customer cust[5];
    for (int i = 0; i < 5; i++) 
    {
        cout << "\nEnter details for Customer " << i + 1 << ":\n";
        cust[i].setData();
    }

    cout << "\n--- Customer Records ---\n";
    for (int i = 0; i < 5; i++) 
    {
        cust[i].getData();
    }

    return 0;
}
