#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H
#include <string>

class ItemToPurchase { 
public:
    ItemToPurchase(); //Default Constructor
    void SetName(std::string& itemName);
        std::string GetName();
    void SetPrice(double& itemPrice);
        double GetPrice();
    void SetQuantity(int& itemQuantity);
        int GetQuantity();
    void Print();
private:
        std::string itemName;
        double itemPrice;
        int itemQuantity;
};

#endif
