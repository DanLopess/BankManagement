# Makefile, V1
# Daniel Lopes, 2020


SOURCES = bank_management.c
SOURCES+= src/account.c src/bank.c src/customer.c src/transaction.c 
OBJS = $(SOURCES:%.c=%.o)
CC = gcc
CFLAGS = -Wall -std=gnu99 -I../ 
LDFLAGS = -lm
TARGET = bank_management

all: $(TARGET) bank_management

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(TARGET) $(LDFLAGS) 

clean:
	@echo Cleaning...
	rm -f $(OBJS) $(TARGET)