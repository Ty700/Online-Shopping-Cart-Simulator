#include "ItemToPurchase.h"
#include <iostream>
#include <iomanip>
ItemToPurchase::ItemToPurchase() : itemName("None"), itemQuantity(0), itemPrice(0) {} //Default Constructor

//Getters 
std::string ItemToPurchase::GetName(){ //Returns item name
    return itemName;
}

double ItemToPurchase::GetPrice(){ //Returns item Price
    return itemPrice;
}

int ItemToPurchase::GetQuantity(){ //Returns item Quantity
    return itemQuantity;
}

//Setters
inline void ItemToPurchase::SetName(std::string& itemName){ this->itemName = itemName; } //Name

inline void ItemToPurchase::SetPrice(double& price){ this->itemPrice = price; } //Price

inline void ItemToPurchase::SetQuantity(int& quantity){ this->itemQuantity = quantity; } //Quantity

//Uncle Sam's Piece of the pie
double tax(double price){
    return (price += price*0.0825);
}

//Print
void ItemToPurchase::Print(){
    std::cout << GetName() << " " << GetQuantity() << " @ $" << GetPrice() << " = $" << std::fixed << std::setprecision(2) << tax(GetPrice() * GetQuantity()) << std::endl;
}

