
#ifndef UNTITLED14_USER_NODE_H
#define UNTITLED14_USER_NODE_H

#include <iostream>
#include <string>

typedef std::string string;

//Class which holds all information about the
//Individual user.

class user_Node {


public:


//Constructors
    user_Node();
    user_Node(string firstName, string LastName, string handle,
                int phone, int messageCount);

    //Destructor
    ~user_Node();

    //Getters
    string get_userFirstName() const;
    string get_userLastName() const;
    string get_userHandle() const;
    int get_userPhone() const;
    int get_userMessageCount();

    //Print Method
    void print() const;

    //Setters
    void set_userFirstName(string firstName) const;
    void set_userLastName(string lastName) const;
    void set_userHandle(string handle) const;
    void set_userPhone(int phone) const;
    void set_userMessageCount(int messageCount) const;
    void set_Next(user_Node* next);
    user_Node* get_Next();

    //User personal information
private:
    user_Node *Next;
    string userFirstName;
    string userLastName;
    string userHandle;
    int userPhone;
    int userMessageCount;




};


#endif //UNTITLED14_USER_NODE_H
