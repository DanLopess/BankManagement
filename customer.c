//
//  customer.c
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#include "lib/customer.h"
#include <math.h>

Customer new_customer (int user_id, char* full_name, time_t date_birth, int cc_number, char* address, int phone) {
    
    Customer c;
        
      if((c = malloc(sizeof *c)) != NULL) {
          if (check_customer_input(user_id, full_name, date_birth, cc_number, address, phone)) {
              c->user_id = user_id;
          } else {
              return NULL; // not using perror because we want the program to continue
          }
      }
      return c;
    }

int check_customer_input(int user_id, char* full_name, time_t date_birth, int cc_number, char* address, int phone) {
    if ((floor(log10(abs(phone))) + 1) == 9 && user_id > 0 && date_birth < time(0) && full_name != NULL && address != NULL && (floor(log10(abs(cc_number))) + 1) == 8) {
        return 1;
    } else {
        return 0;
    }
}
