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
} *Bank ;

Bank new_bank(char* bank_name, Account *accounts, Customer *customers);

#endif /* bank_h */
