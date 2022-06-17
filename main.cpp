#include <iostream>
using namespace std;

void addContact(){
    char firstName[15];
    std::cout << "Enter a first name to add: ";
    std::cin >> firstName;
    char lastName[15];
    std::cout << "Enter a first name to add: ";
    std::cin >> lastName;
    char phoneNumber[10];
    std::cout << "Enter a first name to add: ";
    std::cin >> phoneNumber;
    std::cout << "Name: " << firstName, lastName; 
}

void findContact(){
    std::cout << "What do you want to search by?: \n";
    std::cout << "1) First Name\n";
    std::cout << "2) Last Name\n";
    std::cout << "3) Phone number\n";
    int choice;
    std::cout << "Enter your selection: ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    
    default:
        break;
    }

}

void updateContact(){
    std::cout << "What do you want to search by?: \n";
    std::cout << "1) First Name\n";
    std::cout << "2) Last Name\n";
    std::cout << "3) Phone number\n";
    int choice;
    std::cout << "Enter your selection: ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    
    default:
        break;
}}

void deleteContact(){
;
}


int main()
{
    std::cout << "Welcome to the phonebook";
    bool con = true;
    while (con == true){
        std::cout << "Make your selection:\n";
        std::cout << "1) Add contact to phonebook\n";
        std::cout << "2) Find contact in phonebook\n";
        std::cout << "3) Update contact in phonebook\n";
        std::cout << "4) Delete contact from phone\n";
        std::cout << "5) Quit\n";
        int selection;
        std::cout << "Enter your selection: ";
        std:cin >> selection;
        switch (selection)
        {
        case 1:
            addContact();
            break;
        case 2:
            findContact();
            break;
        case 3:
            updateContact();
            break;
        case 4:
            deleteContact();
            break;
        case 5:
            std::cout << "Case 5\n";
            con = false;
            break;
        default:
            break;
        }      
}}
