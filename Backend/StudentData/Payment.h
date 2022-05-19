#include "string"
#include "Date.h"
class Payment {
    int amount;
    int transactionNum;
    std::string transactionBank;
    Date transactionDate;
    Payment(int amount, int transNum, std::string transBank, Date transDate, Date transactionDate);
};
