/*#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }

    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){                                                    
    int n;                                                     //T.C -> O(n^2)
    cin >> n;

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(isPrime(i)){
            cnt++;
        }
    }
    cout << cnt << endl;
}*/



                                //Sieve of Eratosthenes
/*Given an integer n, return the number of prime numbers that are strictly less than n.
Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.*/

/*#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n){
    int count = 0;

    vector<bool> prime(n+1, true);                          //T.C -> n*log(log(n))
    prime[0] = prime[1] = false;

    for(int i=2; i<n; i++)
    {
        if(prime[i])
        {
            count++;
            for(int j=i*2; j<n; j=j+i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;

    cout << countPrimes(n) << endl;
}*/



                                   //Segmented Sieve
/*#include<bits/stdc++.h>
using namespace std;

int N = 1000000;
bool seive[1000000+1];
void createSeive(){
    seive[0] = seive[1] = 0;
    for(int i=2; i<=N; i++){
        seive[i] = 1;
    }

    for(int i=2; i*i<=N; i++){
        if(seive[i]){
            for(int j=i*i; j<=N; j+=i){
                seive[j] = 0;
            }
        }
    }
}

vector<int> generatePrimes(int sq_R){
    vector<int> ds;
    for(int i=2; i<=sq_R; i++){
        if(seive[i]){
            ds.push_back(i);
        }
    }
    return ds;
}


int main(){

    createSeive();                                              // T.C -> O(10^7)
    long long int l, r;
    cin >> l >> r;

    //step 1: Generate all the primes till sqrt(r)
    vector<int> primes = generatePrimes(sqrt(r));

    //step 2: Create a dummy array of size r-l+1 and make all as 1
    int dArr[r-l+1];
    for(int i=0; i<r-l+1; i++){
        dArr[i] = 1;
    }

    //step 3: for all primes numbers, marks its multiple as false in dArr
    for(auto pr: primes){
        int firstMultiple = (l/pr)*pr; 
        if(firstMultiple < l) firstMultiple += pr;
        
        for(int i=max(pr*pr, firstMultiple); i<=r; i+=pr){
            dArr[i-l] = 0; 
        }
    }

    //step 4: get all the primes
    for(long long int i=l; i<=r; i++){
        if(i ==0 || i == 1) continue;
        if(dArr[i-l]){
            cout << i << " ";
        }
    }
}*/




                                  //gcd of 2 numbers
/*#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

// int gcd(int a, int b){
//     if(a == 0){
//         return b;
//     }
//     if(b == 0){
//         return a;
//     }

//     while(a != b){
//         if(a > b){
//             a = a-b;
//         }
//         else{
//             b = b-a;
//         }
//     }
//     return b;
// }

int main(){
    int a, b;
    cin >> a >> b;

    int ans = gcd(a, b);
    cout << "GCD of " << a << " and " << b << "is: " << ans << endl;
}*/





                                //Modular Exopnentiation(Fast Exponentation)
/*You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. A ^ B is 
defined as A raised to power B and A % C is the remainder when A is divided by C.

Constraints :
1 <= T <= 100   
1 <= X, N, M <= 10^9*/
/*#include<bits/stdc++.h>
using namespace std;

int modExp(int x, int n, int m){
    int ans = 1;
    while(n > 0){
        if(n&1){
            ans = (1LL*ans*(x)%m)%m;
        }
        x = (1LL*(x)%m*(x)%m)%m;
        n = n>>1;
    }
    return ans;
}*/



                                //Inclusion-Exclusion Principle
/*#include<iostream>
using namespace std;

int inc_exc(int n, int a, int b){
    int c1 = n/a;
    int c2 = n/b;

    int c12 = n/(a*b);

    return c1+c2-c12;
}

int main(){
    int n, a , b;
    cin >> n >> a >> b;

    int ans = inc_exc(n, a, b);
    cout << ans << endl;
}*/



