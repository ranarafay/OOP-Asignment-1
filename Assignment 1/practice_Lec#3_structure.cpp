#include <iostream>
using namespace std;

// practice Q 1

struct car
{
    int model;
    int year;
    float price;
};

int main()
{
    car arr[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the information for Car " << i + 1 << ":" << endl;
        cout << "Model No: " << endl;
        cin >> arr[i].model;
        cout << "Year: " << endl;
        cin >> arr[i].year;
        cout << "Price: " << endl;
        cin >> arr[i].price;
    }

    cout << "-------------------" << endl;
    cout << "Showing Information" << endl;
    cout << "-------------------" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "\n";
        if (arr[i].price > 50000)
        {
            cout << "Showing information of the car " << i + 1 << endl;
            cout << "Model No: " << endl;
            cout << arr[i].model << endl;
            cout << "Year: " << endl;
            cout << arr[i].year << endl;
            cout << "Price: " << endl;
            cout << arr[i].price << endl;
        }
    }

    return 0;
}