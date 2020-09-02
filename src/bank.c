//
//  bank.c
//  BankManagement
//
//  Created by Daniel Lopes on 08/08/2020.
//  Copyright © 2020 Daniel Lopes. All rights reserved.
//

#include "../lib/bank.h"

Bank new_bank(char *bank_name, Account *accounts, Customer *customers, int number_accounts, int number_customers)
{
  Bank b;
  if ((b = malloc(sizeof b)) != NULL)
  {
    b->bank_name = bank_name;
    b->accounts = accounts;
    b->customers = customers;
    b->number_accounts = number_accounts;
    b->number_customers = number_customers;
  }
  return b;
}

int get_last_account_number(Bank bank)
{
  Account *accounts = bank->accounts;
  int higher_acc_number = accounts[0]->account_number;

  for (int i = 0; i < accounts[i]; i++)
  {
    if (accounts[i]->account_number > higher_acc_number)
    {
      higher_acc_number = accounts[i]->account_number;
    }
  }

  return higher_acc_number;
}

void add_account(Account a)
{
}
void remove_account(Account a)
{
}
void add_customer(Customer c)
{
}
void remove_customer(Customer c)
{
}
