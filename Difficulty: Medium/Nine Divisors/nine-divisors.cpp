class Solution {
  public:
    int countNumbers(int n) {
        // Code Here
        
     int limit = sqrt(n) + 1;
     vector<bool> isPrime(limit+1,true);
     isPrime[0] = isPrime[1] = false;
     
     for(int i =2;i*i<=limit;i++){
         if(isPrime[i]){
             for(int j=i*i;j<=limit;j+=i)
             isPrime[j] = false;
         }
     }
     
     vector<int> primes;
     for(int i=2;i<=limit;i++){
         if(isPrime[i])
         primes.push_back(i);
     }
     
     int count = 0;
     for(int i=0;i<primes.size();i++){
         long long p8 = 1;
         for(int j = 0;j<8;j++){
             p8 *= primes[i];
             if(p8>n) break;
         }
         if(p8<=n) count++;
     }
     
     int size = primes.size();
     for(int i=0;i<size;i++){
         long long p2 = 1LL*primes[i]*primes[i];
         if(p2>n) break;
         
     for(int j=i+1;j<size;j++){
         long long q2 = 1LL * primes[j] * primes[j];
         if(p2*q2>n) break;
         
         count++;
     }
     }
     return count;
    }
};