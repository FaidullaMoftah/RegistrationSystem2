#pragma once
struct Id {
    char* value;
    int hashValue;
};
int compare(struct Id* id1,struct Id* id2);
int hash(struct Id* id, int mod);
