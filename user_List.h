
#ifndef UNTITLED14_USER_LIST_H
#define UNTITLED14_USER_LIST_H

#include "user_Node.h"

class user_List
{

public:

//Constructors
    user_List();
    user_List(user_List& list);

//Destructor
    ~user_List();

//Method to add user
    void addUser(string firstName, string lastName, string handle,
                 int phone, int messageCount);

//Method to update message count
    void updateMessageCount(string name, int new_count);

//Find the most active user method
//By finding the user with the
// largest message count
    void findMostActiveUser();

//Method to print all users within the list
    void printAllusers() const;



private:
    user_Node numberOfUsers();
    user_Node totalMessages();
    user_Node *Head;

};


#endif //UNTITLED14_USER_LIST_H
