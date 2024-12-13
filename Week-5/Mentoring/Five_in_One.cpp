#include <bits/stdc++.h>
using namespace std;
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl "\n"
void ip()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int MaxElement(int a[], int size)
{
    int mx = a[0]; // 8
    for(int i = 1; i < size; i++)
    {
        mx = max(mx, a[i]); // mx = 8
    }
    // mx = 8
    return mx;
}

int MinElement(int arr[], int size)
{
    int mn = arr[0];
    for(int i = 1; i < size; i++)
    {
        mn = min(arr[i], mn); // mn = 1
    }
    // mn = 1

    return mn;
}

bool IsPrimes(int x) // (x % 1 && x % x) 5 ==> (1,5) // note
{
    bool flag = true;
    for(int i = 2; i < x; i++) // 77
    {
        if(x % i == 0)
        {
            flag = false;
            break;
        }
    }
    if(x == 1) flag = false;
    return flag;
}

int Primes(int a[], int size)
{
    int ctr = 0;
    for(int i = 0;i < size; i++)
    {
        if(IsPrimes(a[i]))
        {
            ctr++;
        }
    }
    return ctr;
}
bool IsPalindrome(int x)
{
    bool flag = false;
    if(x <= 9)
    {
        flag = true;
    }
    else if(x < 100)
    {
        if(x % 11 == 0) flag = true;
    }

    return flag;
}
int palindromes(int a[], int size)
{
    int ctr = 0;
    for(int i = 0; i < size; i++)
    {
        if(IsPalindrome(a[i]))
        {
            ctr++;
        }
    }
    return ctr;
}
int countdivisors(int x) // 1 ==> x
{
    int ctr = 0;

    for(int i = 1; i <= x; i++)
    {
        if(x % i == 0) ctr++;
    }

    return ctr;
}

int divisors(int a[],int size)
{
    int mx = 0;
    int ans = 0;
    for(int i = 0; i < size; i++)
    {
        if(countdivisors(a[i]) >= mx ) // mx = 2 , ans = 17
        {
          if(countdivisors(a[i]) == mx)
          {
              ans = max(ans,a[i]);
          }
          else
          {
              mx = countdivisors(a[i]);
              ans = a[i];
          }

        }
    }
    return ans;
}
int main() {
    ip();
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << "The maximum number : " << MaxElement(a,n) << endl;
    cout << "The minimum number : " << MinElement(a,n) << endl;
    cout << "The number of prime numbers : " << Primes(a,n) << endl;
    cout << "The number of palindrome numbers : " << palindromes(a,n) << endl;
    cout << "The number that has the maximum number of divisors : " << divisors(a, n) << endl;


}
 