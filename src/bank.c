//
//  bank.c
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#include "../lib/bank.h"

Bank new_bank(char* bank_name, Account *accounts, Customer *customers) {
  Bank b;
  if((b = malloc(sizeof b)) != NULL) {
    b->bank_name = bank_name;
    b->accounts = accounts;
    b->customers = customers;
  }
  return b;
}


