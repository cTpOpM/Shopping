//
// Created by tommy on 29/09/2022.
//

#ifndef SHOPPING_ITEM_H
#define SHOPPING_ITEM_H

#include <iostream>

class Item {
public:
    Item(const std::string &name, int quantity) : name(name), quantity(quantity) {}

    void checked() {
        check = false;
    }

    void unChecked() {
        check = true;
    }

    const std::string &getName() const {
        return name;
    }

    int getQuantity() const {
        return quantity;
    }

    void setQuantity(int quantity) {
        Item::quantity = quantity;
    }

    bool isCheck() const {
        return check;
    }

private:
    bool check = false;
    std::string name;
    int quantity;
};


#endif //SHOPPING_ITEM_H
