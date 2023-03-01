/*
*
*   Author: Tyler Scotti
*   Description: This program is a simple online shopping cart simulator. It has the capabilities to hold up to two items in a user's cart and will display the total cost.
*   Future plans: Build on this program to allow the user to add more items (up to 99?) using a vector and displaying the total of the entire cart rather than a hard limit of two items.
*
*
*
*/
#include <string>
#include <iostream>
#include "ItemToPurchase.h"
#include "ItemToPurchase.cpp"

int main(){
//Variable initalization
    std::string item;
    double itemPrice;
    int itemQuantity;
    ItemToPurchase item1;
    ItemToPurchase item2;
//User Input
//Item 1
    std::cout << "Item 1\nEnter the item name:\n";
        getline(std::cin, item);
            item1.SetName(item); //Name

    std::cout << "Enter the item price\n";
        std::cin >> itemPrice;
            item1.SetPrice(itemPrice); //Price
            
    std::cout << "Enter the item quantity:\n";
       std::cin >> itemQuantity;
            item1.SetQuantity(itemQuantity); //Quantity
        
    std::cin.ignore();
//Item 2 
    std::cout << "Item 2\nEnter the item name:\n";
        getline(std::cin, item);
            item2.SetName(item); //Name

    std::cout << "Enter the item price\n";
        std::cin >> itemPrice;
            item2.SetPrice(itemPrice); //Price

    std::cout << "Enter the item quantity:\n";
       std::cin >> itemQuantity;
            item2.SetQuantity(itemQuantity); //Quantity

//Output
    std::cout << "TOTAL COST\nTax Rate: 8.25%\n";
    item1.Print();
    item2.Print();

}
