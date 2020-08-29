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
#include <ctype.h>
#include "lib/bank_management.h"

#define BANK_DATA "data/bank_data.txt"
#define ACCOUNTS "data/accounts.txt"
#define CUSTOMERS "data/customers.txt"
#define TRANSACTIONS "data/transactions.txt"

Bank bank;

/*
* Simple auxiliar function used to center text while printing 
*/
void centerText(char *text, int fieldWidth)
{
    int padlen = (fieldWidth - strlen(text)) / 2;
    printf("%*s%s%*s\n", padlen, "", text, padlen, "");
}

/*
* Function that prints out the menu for this application 
*/
void menu()
{
    if (bank != NULL && bank->bank_name != NULL)
    {
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
    }
    else
    {
        printf("WARNING! BANKING SYSTEM HAS NOT STARTED YET.\n");
    }
}

/*
* Creates a new customer account, if customer non-existant creates new one 
*/
void new_acc()
{
    system("clear"); /* First clears the screen */

    /* Do something */

    printf("Let the Battle Begin!\n");

    /* End function */
    end_option();
}

/*
* View customer information 
*/
void view_list()
{
    system("clear"); /* First clears the screen */

    /* Do something */

    printf("Let the Battle Begin!\n");

    /* End function */
    end_option();
}

/*
* Change address or phone number of a customer 
*/
void edit()
{
    system("clear"); /* First clears the screen */

    /* Do something */

    printf("Let the Battle Begin!\n");

    /* End function */
    end_option();
}

/*
* Transactions functionality - Can list all transactions of an account
* or make a new deposit/withdrawal 
*/
void transact()
{
}

/*
* Function for deleting a customer and its accounts 
*/
void delete_customer()
{
    system("clear"); /* First clears the screen */

    /* Do something */

    printf("Let the Battle Begin!\n");

    /* End function */
    end_option();
}

/*
* Function for printing information of a given account  
*/
void see()
{
    system("clear"); /* First clears the screen */

    /* Do something */

    printf("Let the Battle Begin!\n");

    /* End function */
    end_option();
}

/*
* Function for waiting the user to press a key and leave secondary menu 
*/
void end_option()
{
    /* --- Terminating function --- */
    char ch;

    printf("Press ENTER key to Continue\n");
    if (scanf("%c", &ch) != -1 && scanf("%c", &ch) != -1)
    {
        return;
    }
    else
    {
        exit(EXIT_FAILURE);
    }
}

/*
* Loads all banking data from the text files
*/
void load_data()
{
}

/*
* Saves all banking data to the right text files 
*/
void save_data()
{
}

/*
* Function for cleaning the program up and freeing all used memory 
*/
void cleanup()
{
    /*Loops through bank...*/
    free(bank);
}

int main(int argc, char **argv)
{
    // Variables
    int option;

    if ((bank = malloc(sizeof(bank))) != NULL)
    {
        /* Read data and fill bank */
        bank->bank_name = "Santander Totta";

        menu(); /*Prints front end*/

        /* Loop for choosing menu options */
        while (scanf("%d", &option) > 0 && option != 7)
        {
            switch (option)
            {
            case 1:
            {
                new_acc();
                break;
            }
            case 2:
            {
                edit();
                break;
            }
            case 3:
            {
                transact();
                break;
            }
            case 4:
            {
                see();
                break;
            }
            case 5:
            {
                delete_customer();
                break;
            }
            case 6:
            {
                view_list();
                break;
            }
            default:
            {
                printf("Choice not available, try again.\n");
            }
            }
            system("clear");
            menu(); /*Prints front end*/
        }

        printf("Leaving banking system...");
        exit(EXIT_SUCCESS);
    }
    else
    {
        perror("Failed to start banking system!\nShutting down...");
        exit(EXIT_FAILURE);
    }
    menu();

    cleanup();
    return 0;
}
