/*
*
*   Author: Tyler Scotti
*   Description: This program is a simple online shopping cart simulator. It has the capabilities to hold up to two items in a user's cart and will display the total cost.
*   Future plans: Build on this program to allow the user to add more items (up to 99?) using a vector and displaying the total of the entire cart rather than a hard limit of two items.
*
*
*
*/



#include <iostream>
#include <string>
#include "ItemToPurchase.h"
#include "ItemToPurchase.cpp"
using namespace std;

int main() {
    ItemToPurchase item1;
    ItemToPurchase item2;

    string name;
    int price, quantity;

    // Prompt user for first item
    cout << "Item 1\nEnter the item name:" << endl;
    getline(cin, name);
    item1.SetName(name);
    
    cout << "Enter the item price:\n$";
    cin >> price;
    item1.SetPrice(price);
    
    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    item1.SetQuantity(quantity);
    cin.ignore(); // Ignore newline character left by cin
      
    // Prompt user for second item
    cout << "\nItem 2\nEnter the item name:" << endl;
    getline(cin, name);
    item2.SetName(name);
    
    cout << "Enter the item price:\n$";
    cin >> price;
    item2.SetPrice(price);
    
    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    item2.SetQuantity(quantity);

    cout << endl << "TOTAL COST" << endl;
    // Output item1 details
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetTotal() << endl;
    // Output item2 details
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetTotal() << endl;
    //Total
    cout << endl << "Total: $" << item1.GetTotal() + item2.GetTotal() << endl;
    
    return 0;
}
