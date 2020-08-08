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
#include "transaction.h"
#include <time.h>

typedef struct Account_ {
    int user_id;
    Transaction* transactions;
    int number_transactions;
    int account_number;
    int account_type;
    time_t open_date;
    float amount;
    float interest;
} *Account;


/*
* Account types:
* 1 - Current
* 2 - Saving
* 3 - Fixed for 1 year
* 4 - Fixed for 2 years
* 5 - Fixed for 3 years
*/
Account new_acc (int user_id, int account_number, int account_type, float amount, float interest);

int check_account_input(int user_id, int account_number, int account_type, float amount, float interest);

#endif /* account_h */
