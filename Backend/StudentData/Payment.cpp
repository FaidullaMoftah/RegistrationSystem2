#include "Payment.h"
Payment::Payment(int amount, int transNum, std::string transBank, Date transDate, Date transactionDate)
        : transactionDate(transactionDate) {
    this->amount = amount;
    this->transactionNum = transNum;
    this->transactionBank = transBank;
    this->transactionDate = transDate;
}