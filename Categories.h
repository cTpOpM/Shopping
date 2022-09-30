//
// Created by tommy on 30/09/2022.
//

#ifndef SHOPPING_CATEGORIES_H
#define SHOPPING_CATEGORIES_H

#include <iostream>
#include <map>
#include "Item.h"

class Categories {
public:
    void printChoices() {
        std::string actualCat = "noCat";
        for (auto i = categoryName.begin(); i != categoryName.end(); ++i) {
            if (i->first != actualCat)
                std::cout << "_____________" << i->first << "_____________" << std::endl;
            actualCat = i->first;
            std::cout << i->second << std::endl;
        }
    }
    std::string findCategory(Item i){
        for (auto j = categoryName.begin(); j != categoryName.end(); ++j) {
            if(i.getName()==j->second)
                return j->first;
        }
        return "other";
    }
private:
    std::multimap<std::string, std::string> categoryName = {{"Bakery",              "bread"},
                                                            {"Bakery",              "pizza"},
                                                            {"Bakery",              "cupcake"},
                                                            {"Bakery",              "pancake"},
                                                            {"Cans & jars",         "beans"},
                                                            {"Cans & jars",         "canned tuna"},
                                                            {"Cans & jars",         "jam"},
                                                            {"Cans & jars",         "mixed nuts"},
                                                            {"Dairy & eggs",        "milk"},
                                                            {"Dairy & eggs",        "eggs"},
                                                            {"Dairy & eggs",        "cheese"},
                                                            {"Dairy & eggs",        "mozzarella"},
                                                            {"Fish & seafood",      "tuna"},
                                                            {"Fish & seafood",      "shrimp"},
                                                            {"Fish & seafood",      "anchovies"},
                                                            {"Fish & seafood",      "monkfish"},
                                                            {"Fruits & vegetables", "apple"},
                                                            {"Fruits & vegetables", "banana"},
                                                            {"Fruits & vegetables", "tomato"},
                                                            {"Fruits & vegetables", "peas"},
                                                            {"Grains & pasta",      "rigatoni"},
                                                            {"Grains & pasta",      "penne rigate"},
                                                            {"Grains & pasta",      "flour"},
                                                            {"Grains & pasta",      "wholemeal flour "}};
};


#endif //SHOPPING_CATEGORIES_H
