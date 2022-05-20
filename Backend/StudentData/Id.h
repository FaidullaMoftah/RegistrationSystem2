#pragma once
struct Id {
    char value[20];
    int hashValue;
};
int compare(Id* id1,Id* id2);
int hash(struct Id* id, int mod);
void printId(Id* id);
void generateRandomId(Id *id);