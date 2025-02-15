#include <iostream>
#include <algorithm>
using namespace std;
const int N = 52;
int primes[N];
void generatePrimes(int start, int end){
    int idx = 0;
    for(int i = start; i <= end; i++)
    {
        bool isPrime = true;
        if(i < 2) continue;
        for(int k = 2; k * k <= i; k++)
        {
            if(i % k == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
          primes[idx++] = i;
        }
    }
}
int main() {
    int n,m;
    cin >> n >> m;
    generatePrimes(n,m);
     if(primes[find(primes,primes+N,n) - primes + 1] == m) cout << "YES" << endl;
     else cout << "NO" << endl;
}