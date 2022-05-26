#include "string"
#ifndef DATE_H
#include "Date.h"
#define PAYMENT_H
#endif
class Payment {
    int amount;
    int transactionNum;
    std::string transactionBank;
    Date transactionDate;
    Payment(int amount, int transNum, std::string transBank, Date transDate, Date transactionDate);
};
