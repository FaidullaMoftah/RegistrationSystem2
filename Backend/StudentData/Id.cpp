#include "Id.h"
#include "Date.h"
#include "stdio.h"
#include "cstdlib"
Id* newId(Date d, int faculty, int major, int serial){
    Id* id =(Id*)(malloc(sizeof(Id)));
    //{last 2 digits of year}{2-digit month}{2-digit day}{3-digit-faculty from enumeration}
    // {2-digit major from enumeration}{5-digit-serial}
    id->value[0] = (char)(d.getYear()%10 + '0');
    id->value[1] = (char)((d.getYear()/10)%10 + '0');
    id->value[2] = (char)(d.getMonth()%10 + '0');
    id->value[3] = (char)((d.getMonth()/10)%10 + '0');
    id->value[4] = (char)(d.getDay()%10 + '0');
    id->value[5] = (char)((d.getDay()/10)%10 + '0');
    return id;
}
int compare(struct Id* id1,struct Id* id2) {
	for (int i = 0; i < 16; i++)
	{
		if (id1->value[i] != id2->value[i]){
            if(id1 -> value[i] > id2 -> value[i])return 1;
            return -1;
        }
	}
	return 0;
}
//This functions implements polynomial hashing, which is a method proven to produce uniformly distributed hashes
//especially if the mod and base are primes.
void hash(struct Id* id, int mod){
    long long sum = 1;
    long long seed = 998244853;
    long long factor = 1;
    for(int i = 0; i < 16; i ++)
    {
        sum *= id->value[i] * factor;
        sum %= mod;
        factor *= seed % mod;
        factor %= mod;
    }
    id->hashValue =  sum % mod;
}
void printId(Id* id) {
    for (int i = 0; i < 16; i++)
        printf("%c", (id->value)[i]);
    printf("\n");
}
void generateRandomId(Id *id){
    for(int i = 0; i < 16;i++)
    {
        int currentChar = (char)('0' +  (rand()* 10) / RAND_MAX);
        (id->value)[i] = currentChar;
    }
}
