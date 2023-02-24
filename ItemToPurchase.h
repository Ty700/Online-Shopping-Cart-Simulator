#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase(); // default constructor
    void SetName(string name);
    string GetName() const;
    void SetPrice(int price);
    int GetPrice() const;
    void SetQuantity(int quantity);
    int GetQuantity() const;
    int GetTotal();
private:
    string itemName;
    int itemPrice;
    int itemQuantity;
};

#endif
