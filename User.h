//
// Created by tommy on 29/09/2022.
//

#ifndef SHOPPING_USER_H
#define SHOPPING_USER_H

#include <iostream>
#include <list>
#include "ShoppingList.h"
#include <memory>

class User {
public:
    std::string username;

    User(const std::string &username, const std::string &email, const std::string &password) : username(username),
                                                                                               email(email),
                                                                                               password(password) {}

    void rename(std::string isShared, std::string listName); //renames a list

    void copy(std::string isShared, std::string listName); //copies a list into a new list with same items

    void deleteL(std::string isShared, std::string listName); //deletes a list

    void share(User *, std::string listName); //shares a list to a user (probably in the user friend list)

    void addFriend(User *user); //adds a friend

private:
    std::string email;
    std::string password;
    std::list<std::unique_ptr<ShoppingList>> personalLists;
    std::list<std::unique_ptr<ShoppingList>> sharedLists;
    std::list<std::unique_ptr<User>> friends;
};


#endif //SHOPPING_USER_H
