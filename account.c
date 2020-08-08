//
//  account.c
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#include "lib/account.h"
#include <math.h>

Account new_acc (int id, char* customer_name, char* address, int phone, float money, float savings, float debt) {
    
  Account a;
    
  if((a = malloc(sizeof *a)) != NULL) {
      if (check_input(id, customer_name, address, phone, money, savings, debt)) {
          a->id = id;
          a->name = customer_name;
          a->address = address;
          a->phone = phone;
          a->money = money;
          a->savings = savings;
          a->debt = debt;
      } else {
          return NULL; // not using perror because we want the program to continue
      }
  }
  return a;
}

int check_input(int id, char* customer_name, char* address, int phone, float money, float savings, float debt) {
    if (id > 0 && (floor(log10(abs(phone))) + 1) == 9 && money > 0 && savings > 0 && debt > 0 && customer_name != NULL && address != NULL) {
        return 1;
    } else {
        return 0;
    }
}
