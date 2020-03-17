
#include "user_List.h"



user_List::user_List()
{
    Head = NULL;
}
user_List::user_List(user_List& list)
{

}

user_List::~user_List()
{
    user_Node *ptr = Head;
    while (ptr != NULL)
    {
        Head = Head->get_Next();
        delete ptr;
        ptr = Head;
    }

}



void user_List::addUser(string firstName, string lastName, string handle,
                        int phone, int messageCount)
{
    user_Node *ptr = new user_Node(firstName,lastName,handle,

                                    phone,messageCount);
    ptr->set_Next(Head);
    Head = ptr;

}
void user_List::updateMessageCount(string name, int new_count)
{
    string error = "Not found";

    user_Node *ptr = Head;
    while (ptr != NULL)
    {
        if (ptr->get_userFirstName() == name)
        {
            ptr->set_userMessageCount(new_count);
            ptr->print();
            break;
        }
        ptr = ptr->get_Next();


    }
    std::cout << error;
}
void user_List::findMostActiveUser()
{
    string error = "Not found";
    int max = 0;
    user_Node *copy = new user_Node;

    user_Node *ptr = Head;
    while (ptr != NULL)
    {

        if (ptr->get_userMessageCount() > max)
        {
            copy = ptr;
        }
        ptr = ptr->get_Next();


    }
    copy->print();
    delete copy;

}


void user_List::printAllusers () const
{
    user_Node *ptr = Head;
    while (ptr != NULL)
    {
        ptr->print();
        ptr = ptr->get_Next();
    }

}
