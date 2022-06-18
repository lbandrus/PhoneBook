#include <iostream>
#include <string>
#include <sqlite3.h>
using namespace std;

int callback(void *NotUsed, int argc, char **argv, char **azColName){
    return 0;
}

void sql_call(string sql){
    sqlite3* db;
    int exit;
    char *zErrMsg = 0;

    exit = sqlite3_open("phonebook.db", &db);

    if (exit) { 
        
        cout << "DB Open Error: " << sqlite3_errmsg(db) << endl; 
        
    } else {

        cout << "Opened Database Successfully!" << endl; 
    }


    exit = sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);

    sqlite3_close(db);
}



void addContact(){
    string firstName;
    std::cout << "Enter a first name to add: ";
    std::cin >> firstName;
    string lastName;
    std::cout << "Enter a last name to add: ";
    std::cin >> lastName;
    string phoneNumber;
    std::cout << "Enter a phonenumber to add: ";
    std::cin >> phoneNumber;
    string sql;
    sql = "INSERT INTO PHONEBOOK (ID, FIRSTNAME, LASTNAME, PHONENUMBER) " \
          "VALUES (" + firstName + ", " + lastName + ", " + phoneNumber + ")";
    
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
            con = false;
            break;
        default:
            break;
        }      
    }}
