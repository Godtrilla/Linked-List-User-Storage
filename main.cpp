#include <iostream>
#include "user_Node.h"
#include "user_List.h"
#include <memory>
#include <random>



int main() {

    //User List Object Instantiation
    user_List List;

    //choice variable to be used to for menu
    char choice;

    //User Menu driven by the choice variable above
    std::cout << "MENU     " << std::endl;
    std::cout << "ADD:              1" << std::endl;
    std::cout << "UPDATE:           2" << std::endl;
    std::cout << "MOST ACTIVE:      3" << std::endl;
    std::cout << "PRINT:            4" << std::endl;
    std::cout << "EXIT:             5" << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "ENTER YOUR CHOICE:" << std::endl;
    std::cin>>choice;

    //While loop that will loop until user inputs "5" to
    //Kill the program.
    while(choice != '5')
    {


        if(choice == '1')
        {

                std::cout << "ADDING USER MENU>>>>>>>>>>" << std::endl;
                std::cout << "Enter User First Name:" << std::endl;
                string name;
                std::cin >> name;
                std::cout << "Enter User Last Name:" << std::endl;
                string lastName;
                std::cin >> lastName;
                std::cout << "Enter " << name << "'s handle:" << std::endl;
                string handle;
                std::cin >> handle;
                std::cout << "Enter " << name << "'s Phone Number:" << std::endl;
                int phoneNumber;
                std::cin >> phoneNumber;

                //Random number generator for the theoretical message count
                std::random_device rd;
                std::mt19937 gen(rd());
                std::uniform_int_distribution<> dis(100, 6000);
                int messagecount = dis(gen);

                List.addUser(name, lastName, handle, phoneNumber, messagecount);

                std::cout << "ENTER YOUR CHOICE:" << std::endl;
                std::cin>>choice;

        }
            //Updating Message Count
           else if(choice == '2')
           {
                std::cout << "UPDATING MESSAGE COUNT>>>>>>>>>>>>" << std::endl;
                string name;
                int new_count;

                std::cout << "Enter User Name:";
                std::cin>>name;
                std::cout << "Enter User New Message Count:";
                std::cin >> new_count;

                List.updateMessageCount(name,new_count);

                std::cout << "ENTER YOUR CHOICE:" << std::endl;
                std::cin>>choice;

           }
            //Finding most active user
           else if(choice == '3')
           {
                std::cout << "MOST ACTIVE USER>>>>>>>>>>" << std::endl;
                List.findMostActiveUser();
               std::cout << "ENTER YOUR CHOICE:" << std::endl;
               std::cin>>choice;
           }

           //Print method to print all users within the list
           else if(choice == '4')
           {
                std::cout << "PRINT METHOD" << std::endl;

                List.printAllusers();

                std::cout << "ENTER YOUR CHOICE:" << std::endl;
                std::cin>>choice;

           }
           //Loop exit condition.
           else
                     break;
    }


    return 0;
}