#include <iostream>

using namespace std;

int main() {

    const double price_small_room {25};
    const double price_large_room {35};
    const double sales_tax_rate {0.06};

    cout << "=== Estimate for carpet cleaning service ===" << endl;
    int small_room_qty {0};
    cout << "Number of small rooms: ";
    cin >> small_room_qty;

    int large_room_qty {0};
    cout << "Number of large rooms: ";
    cin >> large_room_qty;

    cout << "Price per small rooms: " << price_small_room << endl;
    cout << "Price per large rooms: " << price_large_room << endl;

    const double total = (price_large_room * large_room_qty) + (price_small_room * small_room_qty);
    const double tax = total * sales_tax_rate;
    const double total_with_tax = total * (1 + sales_tax_rate);

    cout << "Cost: $" << total << endl;
    cout << "Tax: $" << tax << endl;
    cout << "=========================" << endl;
    cout << "Total estimate: $" << total_with_tax;
    cout << "This estimate is valid for 30 days" << endl;


    return 0;
}