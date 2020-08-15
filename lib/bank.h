//
//  bank.h
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#ifndef bank_h
#define bank_h

#include <stdlib.h>
#include <stdio.h>
#include "customer.h" /* Customer already includes account */

typedef struct Bank_ {
    char* bank_name;
    Account *accounts;
    Customer * customers;
    int number_accounts;
    int number_customers;
} *Bank ;

Bank new_bank(char* bank_name, Account *accounts, Customer *customers, int number_accounts, int number_customers);

void add_account();
void remove_account();
void add_customer();
void remove_customer();

#endif /* bank_h */
