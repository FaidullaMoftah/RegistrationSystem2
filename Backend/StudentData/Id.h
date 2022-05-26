#pragma once
#ifndef DATE_H
#include "Date.h"
#endif
//the id is composed of  digits:
//{last 2 digits of year}{2-digit month}{2-digit day}{3-digit-faculty from enumeration}{2-digit major from enumeration}{5-digit-serial}
struct Id {
    char value[16];
    int hashValue;
};
Id* newId(Date d, int faculty, int major, int serial);
int compare(Id* id1,Id* id2);
void hash(struct Id* id, int mod);
void printId(Id* id);
void generateRandomId(Id *id);