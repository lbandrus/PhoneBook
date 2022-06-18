#include <iostream>
#include <string>
#include <sqlite3.h>
using namespace std;

int callback(void *NotUsed, int argc, char **argv, char **azColName){
    return 0;
}


int main(){

    sqlite3* db;
    int exit;
    string sql;
    char *zErrMsg = 0;

    exit = sqlite3_open("phonebook.db", &db);

    if (exit) { 
        
        cout << "DB Open Error: " << sqlite3_errmsg(db) << endl; 
        
    } else {

        cout << "Opened Database Successfully!" << endl; 
    }
    
    sql = "CREATE TABLE PHONEBOOK("  \
      "ID INTEGER PRIMARY KEY      AUTOINCREMENT," \
      "FIRSTNAME      TEXT     NOT NULL," \
      "LASTNAME       INT      NOT NULL," \
      "PHONENUMBER    CHAR(50) NOT NULL;";

    exit = sqlite3_exec(db, sql.c_str(), callback, 0, &zErrMsg);


    sqlite3_close(db); 

    return 0;
}