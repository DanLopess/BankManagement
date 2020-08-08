//
//  share.h
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#ifndef share_h
#define share_h

#include "bank.h"

#ifdef  MAIN_FILE
Bank bank;
#else
extern Bank bank;
#endif

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

#endif /* share_h */
