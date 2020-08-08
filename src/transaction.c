//
//  transaction.c
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#include "../lib/transaction.h"

Transaction new_transaction (int account_id, int transaction_id, int type, float amount) {
    
    Transaction t;
        
      if((t = malloc(sizeof *t)) != NULL) {
          if (check_transaction_input(account_id, transaction_id, type, amount)) {
              t->account_id = account_id;
              t->transaction_id = transaction_id;
              t->type = type;
              t->amount = amount;
              t->timestamp = time(0);
          } else {
              return NULL; // not using perror because we want the program to continue
          }
      }
      return t;
    }

int check_transaction_input(int account_id, int transaction_id, int type, float amount) {
    if (account_id > 0 && transaction_id > 0 && amount >= 0.0  && (type == 0 || type == 1)) {
        return 1;
    } else {
        return 0;
    }
}
