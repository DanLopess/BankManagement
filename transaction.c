//
//  transaction.c
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#include "lib/transaction.h"

Transaction* new_transaction (int user_id; int type, float amount, time_t timestamp, float initial_funds, float resulting_funds) {
    Transaction *t;
    
    
    return t;
}

Account* get_account(int user_id) {
    int i;
    Accounts* accs = bank->accounts;
    
    for (i = 0; i < NELEMS(accs); i++) {
        if (accs[i]->id == user_id) {
            return accs[i];
        }
    }
}
