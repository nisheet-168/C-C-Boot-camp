#include <iostream>
using namespace std;

class FastFoodCafe 
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    void setData() 
    {
        cout << "Enter Cafe ID: ";
        cin >> cafe_id;
        cout << "Enter Cafe Name: ";
        cin >> cafe_name;
        cout << "Enter Cafe Type (e.g., Rooftop, Normal): ";
        cin >> cafe_type;
        cout << "Enter Cafe Rating (e.g., 3 Star): ";
        cin >> cafe_rating;
        cout << "Enter Location: ";
        cin >> cafe_location;
        cout << "Enter Establishment Year: ";
        cin >> cafe_establish_year;
        cout << "Enter Staff Quantity: ";
        cin >> cafe_staff_quantity;
    }

    void getData() 
    {
        cout << "\nCafe ID: " << cafe_id
             << "\nName: " << cafe_name
             << "\nType: " << cafe_type
             << "\nRating: " << cafe_rating
             << "\nLocation: " << cafe_location
             << "\nEstablished: " << cafe_establish_year
             << "\nStaff Quantity: " << cafe_staff_quantity << "\n";
    }
};

int main() 
{
    FastFoodCafe cafe[5];
    for (int i = 0; i < 5; i++) 
    {
        cout << "\nEnter details for Fast Food Cafe " << i + 1 << ":\n";
        cafe[i].setData();
    }

    cout << "\n--- Fast Food Cafe Records ---\n";
    for (int i = 0; i < 5; i++) 
    {
        cafe[i].getData();
    }

    return 0;
}
