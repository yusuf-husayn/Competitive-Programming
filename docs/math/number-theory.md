> [!TIP]
> # 1) Divisibility
> 
> - a يقبل القسمة على b إذا  
> $a \bmod b = 0$
>

> ---

> [!TIP] 
> # 2) GCD
>
> $$
> \gcd(a,b)
> $$
> 
> - Euclid
>

> [!CAUTION]
> ```cpp
> int gcd(int a, int b){
>     return b == 0 ? a : gcd(b, a % b);
> }
> ```
> 
> - مثال  
>     gcd(24, 18) = 6
> 

> --- 

> [!TIP] 
> # 3) LCM
> 
> $$  
> \mathrm{lcm}(a,b) = \frac{a \cdot b}{\gcd(a,b)}  
> $$
> 
> - مثال  
>     lcm(4, 6) = 12
>     

> ---

> [!TIP] 
> # 4) Extended Euclid
> 
> $$  
> ax + by = \gcd(a,b)  
> $$
> 
>

> [!CAUTION]
> ```cpp
>  long long extgcd(long long a, long long b, long long &x, long long &y){
>     if(b == 0){
>         x = 1; y = 0;
>         return a;
>     }
>     long long x1, y1;
>     long long g = extgcd(b, a % b, x1, y1);
>     x = y1;
>     y = x1 - y1 * (a / b);
>     return g;
> }
> ```
>

> ---

> [!TIP] 
> # 5) Prime Numbers
> 
> - عدد أولي إذا له قاسمين فقط
>     

> [!CAUTION]
> ```cpp
> bool isPrime(int n){
>     if(n < 2) return false;
>     for(int i = 2; i * i <= n; i++){
>         if(n % i == 0) return false;
>     }
>     return true;
> }
> ```
>

> ---

> [!TIP]
> # 6) Sieve of Eratosthenes
> 
>

> [!CAUTION]
> ```cpp
> vector<bool> sieve(int n){
>     vector<bool> prime(n+1, true);
>     prime[0] = prime[1] = false;
> 
>     for(int i = 2; i * i <= n; i++){
>         if(prime[i]){
>             for(int j = i * i; j <= n; j += i){
>                 prime[j] = false;
>             }
>         }
>     }
>     return prime;
> }
> ```
>

> ---


> [!TIP] 
> # 7) Prime Factorization
>

> [!CAUTION]
> ```cpp
> vector<int> factor(int n){
>     vector<int> f;
>     for(int i = 2; i * i <= n; i++){
>         while(n % i == 0){
>             f.push_back(i);
>             n /= i;
>         }
>     }
>     if(n > 1) f.push_back(n);
>     return f;
> }
> ```
>

> ---

> [!TIP] 
> # 8) Number of Divisors
> 
> لو
>
> $n = p_1^{e_1} p_2^{e_2} \dots$
> 
> $$  
> d(n) = (e_1+1)(e_2+1)\dots  
> $$
> 
> - مثال  
>     $12 = 2^2 * 3^1$  
>     $d(12) = 3 * 2 = 6$


> ---

> [!TIP] 
> # 9) Sum of Divisors
> 
> $$  
> \sigma(n) = \prod \frac{p_i^{e_i+1} - 1}{p_i - 1}  
> $$

> ---

