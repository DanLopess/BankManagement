//
//  bank.c
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#include "../lib/bank.h"

Bank new_bank(char* bank_name, Account *accounts, Customer *customers, int number_accounts, int number_customers) {
  Bank b;
  if((b = malloc(sizeof b)) != NULL) {
    b->bank_name = bank_name;
    b->accounts = accounts;
    b->customers = customers;
    b->number_accounts = number_accounts;
    b->number_customers = number_customers;
  }
  return b;
}


