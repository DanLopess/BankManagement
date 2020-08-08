//
//  transaction.h
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#ifndef transaction_h
#define transaction_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Transaction_ {
    int account_id;
    int transaction_id;
    int type;
    float amount;
    time_t timestamp;
} *Transaction;

/*
 * Transaction types:
 * 1 - Deposit
 * 2 - Withdraw
 */
Transaction * new_transaction (int account_id, int transaction_id, int type, float amount);

int check_transaction_input(int account_id, int transaction_id, int type, float amount);

#endif /* transaction_h */
