//
//  account.c
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#include "lib/account.h"
#include <math.h>

#define MAX_TRANSACT 50
/*
 Allows for 50 transactions, when adding a new one, check if it has reached its limit
 */

Account new_acc (int user_id, int account_number, int account_type, float amount, float interest) {
    
  Account a;
    
  if((a = malloc(sizeof *a)) != NULL) {
      if (check_account_input(user_id, customer_name, address, phone, money, savings, debt)) {
          a->user_id = user_id;
          a->account_number = account_number;
          a->account_type = account_type;
          a->amount = amount;
          a->interest = interest;
          a->transactions = malloc(sizeof(Transaction)*MAX_TRANSACT);
          a->number_transactions = 0;
          a->open_date = time(0);
      } else {
          return NULL; // not using perror because we want the program to continue
      }
  }
  return a;
}

int check_account_input(int user_id, int account_number, int account_type, float amount, float interest) {
    if (user_id > 0 && account_number > 0 && amount >= 0.0 && interest >= 0.0 && (account_type >= 0 && account <= 5)) {
        return 1;
    } else {
        return 0;
    }
}
