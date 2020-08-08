//
//  bank_management.h
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#ifndef bank_management_h
#define bank_management_h

#include "account.h"
#include "bank.h"
#include "customer.h"
#include "transaction.h"

void centerText(char *text, int fieldWidth);
void menu();
void new_acc();
void view_list();
void edit();
void transact();
void delete_customer();
void see();
void load_data();
void save_data();
void cleanup();

#endif /* bank_management_h */
