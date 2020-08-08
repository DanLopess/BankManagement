//
//  account.h
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#ifndef account_h
#define account_h

#include <stdio.h>
#include <stdlib.h>
#include "share.h"
#include "transaction.h"
#include "customer.h"

typedef struct Account_ {
    Customer customer;
    Transaction* transactions;
    float money;
    float savings;
    float debt;
} *Account;

Account new_acc (int id, char* customer_name, char* address, int phone, float money, float savings, float debt);

int check_input(int id, char* customer_name, char* address, int phone, float money, float savings, float debt);

#endif /* account_h */
