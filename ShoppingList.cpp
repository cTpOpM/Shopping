//
// Created by tommy on 29/09/2022.
//

#include "ShoppingList.h"

void ShoppingList::insert(Item i) {
    bool found = false;
    for (auto itr = list.begin(); itr != list.end(); ++itr) {
        if ((*itr).second.getName() == i.getName()) {
            found = true;
            (*itr).second.setQuantity((*itr).second.getQuantity() +
                                      i.getQuantity()); //if the item was already in the list it will add the quantity specified
        }
    }
    if (found == false) {
        std::string cat=c.findCategory(i); // finds the category in which the item is listed and
        list.insert(std::pair<std::string, Item>(cat, i)); //adds it to the shopping list
    }
}

void ShoppingList::remove(std::string name) {
    bool found = false;
    for (auto itr = list.begin(); itr != list.end(); ++itr) {
        if ((*itr).second.getName() == name) {
            found = true;
            list.erase(itr);
            return;
        }
    }
    std::cout << "Couldn't remove " + name + " because it is not contained in the list" << std::endl;
}

void ShoppingList::checked(std::string name) {
    bool found = false;
    for (auto itr = list.begin(); itr != list.end(); ++itr) {
        if ((*itr).second.getName() == name) {
            found = true;
            (*itr).second.checked();
            return;
        }
    }
    std::cout << "Couldn't check " + name + " because it is not contained in the list" << std::endl;
}

void ShoppingList::modifyQuantity(std::string name, int quantity) {
    bool found = false;
    for (auto itr = list.begin(); itr != list.end(); ++itr) {
        if ((*itr).second.getName() == name) {
            found = true;
            (*itr).second.setQuantity((*itr).second.getQuantity() + quantity);
            return;
        }
    }
    std::cout << "Couldn't modify the quantity of " << name <<
              " because it is not contained in the list, so it will be inserted shortly" << std::endl;
    Item i(name, quantity);
    insert(i); //inserting the element into the shopping list
}

void ShoppingList::clear() {
    list.clear();
}

void ShoppingList::clearPurchasedItem() {
    for (auto itr = list.begin(); itr != list.end(); ++itr) {
        if (itr->second.isCheck())
            list.erase(itr);
    }
}

void ShoppingList::printList() {
    clearPurchasedItem();
    std::cout << "List " << getName() << " has:" << std::endl;
    for (auto itr = list.begin(); itr != list.end(); ++itr) {
        std::cout << "|cat: " << itr->first << " n: " << itr->second.getName() << "  q: " << itr->second.getQuantity()
                  << std::endl;
    }
}

