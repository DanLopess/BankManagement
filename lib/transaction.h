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
#include "share.h"

typedef struct Transaction_ {
    int type;
    float amount;
    time_t timestamp;
    float initial_funds;
    float resulting_funds;
} *Transaction;

/*
 * Transaction types:
 * 1 - Deposit
 * 2 - Withdraw
 */
Transaction * new_transaction (int user_id, int type, float amount, time_t timestamp, float initial_funds, float resulting_funds);


#endif /* transaction_h */
