#include <bits/stdc++.h>
using namespace std;

long long compute_hash(string s){
        int p=31;
        int m=1e9+9;
        long long hash_val=0;
        long long p_pow=1;
        
        for(auto ch : s){
            hash_val +=((ch -'a'+1)*p_pow)%m;
            p_pow = (p_pow*p)%m;
        }
        return hash_val;
    }