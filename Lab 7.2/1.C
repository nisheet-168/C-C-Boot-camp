#include <iostream>
using namespace std;

class DiamondCompany 
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    double comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:
    void setData() 
    {
        cout << "Enter Company ID: ";
        cin >> comp_id;
        cout << "Enter Company Name: ";
        cin >> comp_name;
        cout << "Enter Staff Quantity: ";
        cin >> comp_staff_quantity;
        cout << "Enter Annual Revenue: ";
        cin >> comp_revenue;
        cout << "Enter Raw Diamonds Imported per Year: ";
        cin >> comp_import_raw_diamonds;
        cout << "Enter Diamonds Exported per Year: ";
        cin >> comp_export_diamonds;
        cout << "Enter CEO Name: ";
        cin >> comp_ceo;
    }

    void getData() 
    {
        cout << "\nCompany ID: " << comp_id
             << "\nName: " << comp_name
             << "\nStaff Quantity: " << comp_staff_quantity
             << "\nAnnual Revenue: ₹" << comp_revenue
             << "\nRaw Diamonds Imported: " << comp_import_raw_diamonds
             << "\nDiamonds Exported: " << comp_export_diamonds
             << "\nCEO: " << comp_ceo << "\n";
    }
};

int main() 
{
    DiamondCompany dc[5];
    for (int i = 0; i < 5; i++) 
    {
        cout << "\nEnter details for Diamond Company " << i + 1 << ":\n";
        dc[i].setData();
    }

    cout << "\n--- Diamond Company Records ---\n";
    for (int i = 0; i < 5; i++) 
    {
        dc[i].getData();
    }

    return 0;
}
