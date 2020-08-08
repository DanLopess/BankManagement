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
#include "share.h"
#include <time.h>

typedef struct Customer_ {
    char* full_name;
    
    
} *Customer;

Customer new_customer();

#endif /* customer_h */
