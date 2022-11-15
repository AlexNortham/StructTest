#include <stdio.h>
#include <string.h>

typedef struct bankAccount{
    int balance;
    char accountNumber[100];
    char sortCode[100];
    char accountHolder[100];
}Account;

Account createAccount(int balance, char* accountNumber, char* sortCode, char* accountHolder){
    Account acc;
    strcpy(acc.accountHolder, accountHolder);
    strcpy(acc.accountNumber, accountNumber);
    strcpy(acc.sortCode, sortCode);
    acc.balance = balance;
    return acc;
}

void printAccount(Account acc){
    printf("Account Holder: %s\nAccount Number: %s\nSort Code: %s\nBalance: %d\n",
           acc.accountHolder, acc.accountNumber, acc.sortCode, acc.balance);
}

int main() {
    Account acc = createAccount(50,
                                "0211309203", "832987539", "Your Mother");
    printAccount(acc);
}