#include "Id.h"
int compare(struct Id* id1,struct Id* id2) {
	for (int i = 0; i < 20; i++)
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
int hash(struct Id* id, int mod){
    long long sum = 0;
    long long seed = 998244853;
    long long factor = 1;
    for(int i = 0; i < 20; i ++)
    {
        sum *= id->value[i] * factor;
        sum %= mod;
        factor *= seed % mod;
        factor %= mod;
    }
    return sum % mod;
}