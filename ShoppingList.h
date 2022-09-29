//
// Created by tommy on 29/09/2022.
//

#ifndef SHOPPING_SHOPPINGLIST_H
#define SHOPPING_SHOPPINGLIST_H

#include <iostream>
#include <map>
#include "Item.h"

class ShoppingList {
public:
    void insert(Item *i); //insert an item to the list
    void remove(std::string name); //remove an item from the list
    void checked(std::string name); //when we have taken the item we will check it
    void modifyQuantity(std::string name, int quantity); //modifies the quantity of an item that is already in the list
    void clear(); //has to destroy every Item in the list
    void clearPurchasedItem(); //has to destroy every Item that has been purchased
    void printList(); //has to print the list to a txt file, maybe not so important, might delete later
private:
    std::string name;
    std::multimap<std::string, Item> list;
};


#endif //SHOPPING_SHOPPINGLIST_H
