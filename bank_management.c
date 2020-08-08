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

#define FILENAME "data/data.txt"

Bank bank;

void centerText(char *text, int fieldWidth) {
    int padlen = (fieldWidth - strlen(text)) / 2;
    printf("%*s%s%*s\n", padlen, "", text, padlen, "");
} 

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

void load_data() {
    
}

void cleanup() {
    /*Loops through bank...*/
    free(bank);
}

int main(int argc, char** argv) {
    // Variables
    char* line;
    char option;
    
    // Read data and fill bank
    if((bank = malloc(sizeof(bank))) != NULL) {
        bank->bank_name = "Santander Totta";

        // Prints front end
        menu();

        exit(-1);
    } else {
        perror("Failed to start banking system!\nShutting down...");
        exit(-1);
    }
    menu();
    
    cleanup();
    return 0;
}
