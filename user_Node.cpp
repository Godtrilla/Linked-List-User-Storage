

#include "user_Node.h"

user_Node::user_Node()
{
    userFirstName = "NULL";
    userLastName = "NULL";
    userHandle = "NULL";
    userPhone = 000;
    userMessageCount = 000;
}

user_Node::user_Node(   string firstName,
                        string LastName, string handle,
                        int phone, int messageCount)

{
    userFirstName = firstName;
    userLastName = LastName;
    userHandle = handle;
    userPhone = phone;
    userMessageCount = messageCount;
}

user_Node::~user_Node()
{

}

string user_Node::get_userFirstName() const
{
    return userFirstName;
}

string user_Node::get_userLastName() const
{
    return userLastName;
}

string user_Node::get_userHandle() const
{
    return userHandle;
}

int user_Node::get_userPhone() const
{
    return userPhone;
}

int user_Node::get_userMessageCount()
{
    return userMessageCount;
}

void user_Node::print() const
{
    std::cout << "User FIRST NAME: " << userFirstName << std::endl
    << "User's LAST NAME: " << userLastName<< std::endl
  << "User HANDLE: " << userHandle << std::endl
 << "User's PHONE NUMBER: " << userPhone<< std::endl
 << "User's MESSAGE COUNT: " << userMessageCount << std::endl << std::endl;

}


void user_Node::set_userFirstName(string firstName) const
{
    firstName = userFirstName;
}
void user_Node::set_userLastName(string lastName) const
{
    lastName = userLastName;
}

void user_Node::set_userHandle(string handle) const
{
    handle = userHandle;
}

void user_Node::set_userPhone(int phone) const
{
    phone = userPhone;
}

void user_Node::set_userMessageCount(int messageCount) const
{
    messageCount = userMessageCount;
}

void user_Node::set_Next(user_Node * next)
{
    Next = next;
}
user_Node *user_Node::get_Next()
{
    return Next;
}
