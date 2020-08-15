//
//  main.cpp
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lib/bank_management.h"

#define BANK_DATA "data/bank_data.txt"
#define ACCOUNTS "data/accounts.txt"
#define CUSTOMERS "data/customers.txt"
#define TRANSACTIONS "data/transactions.txt"

Bank bank;

/*
* Simple auxiliar function used to center text while printing 
*/
void centerText(char *text, int fieldWidth) {
    int padlen = (fieldWidth - strlen(text)) / 2;
    printf("%*s%s%*s\n", padlen, "", text, padlen, "");
} 

/*
* Function that prints out the menu for this application 
*/
void menu() {
    if (bank != NULL && bank->bank_name != NULL) {
        centerText("#######################################################\n", 65);
        centerText(bank->bank_name, 65);
        printf("\n");
        centerText("* CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM *\n", 65);
        centerText("#######################################################\n", 65);
        printf("1. Create new account\n");
        printf("2. Update information of existing account\n");
        printf("3. Transactions Menu\n");
        printf("4. Check the details of existing account\n");
        printf("5. Remove existing account\n");
        printf("6. View customer's list\n");
        printf("7. Exit\n\n\n");
        printf("Enter your choice:  \n");
    } else {
        printf("WARNING! BANKING SYSTEM HAS NOT STARTED YET.\n");
    }
}

/*
* Creates a new customer account, if customer non-existant creates new one 
*/
void new_acc() {

}

/*
* View customer information 
*/
void view_list(){

}

/*
* Change address or phone number of a customer 
*/
void edit(){

}

/*
* Transactions functionality - Can list all transactions of an account
* or make a new deposit/withdrawal 
*/
void transact(){

}

/*
* Function for deleting a customer and its accounts 
*/
void delete_customer(){

}

/*
* Function for printing information of a given account  
*/
void see(){

}

/*
* Loads all banking data from the text files
*/
void load_data(){

}

/*
* Saves all banking data to the right text files 
*/
void save_data(){

}

/*
* Function for cleaning the program up and freeing all used memory 
*/
void cleanup() {
    /*Loops through bank...*/
    free(bank);
}

int main(int argc, char** argv) {
    // Variables
    char* line;
    char option;
    
    
    if((bank = malloc(sizeof(bank))) != NULL) {
        // Read data and fill bank
        bank->bank_name = "Santander Totta";

        // Prints front end
        menu();

        // Loop for choosing menu options

        exit(-1);
    } else {
        perror("Failed to start banking system!\nShutting down...");
        exit(-1);
    }
    menu();
    
    cleanup();
    return 0;
}
