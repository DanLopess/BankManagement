//
//  customer.h
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#ifndef customer_h
#define customer_h

#include <stdio.h>
#include <time.h>
#include "account.h"

typedef struct Customer_ {
    int user_id;
    char* full_name;
    time_t date_birth;
    int cc_number;
    char* address;
    int phone;
    Account* accounts; /* Contains all accounts related to this customer */
    
} *Customer;

Customer new_customer(int user_id, char* full_name, time_t date_birth, int cc_number, char* address, int phone);

int check_customer_input(int user_id, char* full_name, time_t date_birth, int cc_number, char* address, int phone);

#endif /* customer_h */
