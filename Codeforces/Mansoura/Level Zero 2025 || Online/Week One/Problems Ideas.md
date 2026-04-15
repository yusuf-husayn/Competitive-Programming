# 📘 Competitive Programming Cheat Sheet

---

> [!NOTE]
> ## 1) Area of a Circle (مساحة الدائرة)
> القانون الرياضي الأساسي لحساب مساحة الدائرة:
> `A = π × R²`

---

> [!NOTE]
> ## 2) Sum of the Two Largest (مجموع أكبر رقمين من تلاتة)
> لإيجاد مجموع أكبر رقمين بين 3 أرقام:
> 
> **القانون الرياضي:**
> `MaxSum = (A + B + C) - min(A, B, C)`

> [!TIP]
> **CP Pro Tip**
> `min({})` تشتغل مع أكتر من عنصر في C++

> [!CAUTION]
> **C++ Template**
> ```cpp
> int A, B, C;
> cin >> A >> B >> C;
> int max_sum = (A + B + C) - min({A, B, C});
> cout << max_sum << "\n";
> ```

---

> [!NOTE]
> ## 3) Even and Odd Check
> - Even: `w % 2 == 0`
> - Odd: `w % 2 != 0`

> [!TIP]
> Bitwise أسرع:
> `(w & 1)`

> [!CAUTION]
> ```cpp
> int w;
> cin >> w;
> if ((w & 1) == 0) cout << "Even\n";
> ```

---

> [!NOTE]
> ## 4) Extract Last Digit
> `LastDigit = N % 10`

> [!WARNING]
> استخدم:
> `abs(N % 10)`

> [!TIP]
> للأرقام الكبيرة:
> ```cpp
> string s;
> cin >> s;
> int digit = s.back() - '0';
> ```

> [!CAUTION]
> ```cpp
> int N;
> cin >> N;
> cout << abs(N % 10) << "\n";
> ```

---

> [!NOTE]
> ## 5) Interval Intersection

> [!WARNING]
> شرط:
> `start <= end`

> [!CAUTION]
> ```cpp
> int start = max(L1, L2);
> int end = min(R1, R2);
> if (start <= end) cout << start << " " << end;
> else cout << -1;
> ```

---

> [!NOTE]
> ## 6) Triangle Inequality

> [!CAUTION]
> ```cpp
> int max_side = max({a, b, c});
> int sum_others = (a + b + c) - max_side;
> if (sum_others > max_side) cout << 0;
> else cout << (max_side - sum_others) + 1;
> ```

---

> [!NOTE]
> ## 7) Sum 1 → N
> `n(n+1)/2`

> [!CAUTION]
> ```cpp
> long long n;
> cin >> n;
> cout << n * (n + 1) / 2;
> ```

---

> [!NOTE]
> ## 8) Fast Repetition

> [!CAUTION]
> ```cpp
> cout << string(5, '*');
> ```

---

> [!NOTE]
> ## 9) Sum Equals Third

> [!CAUTION]
> ```cpp
> int largest = max({a, b, c});
> int sum = a + b + c - largest;
> cout << (largest == sum ? "YES" : "NO");
> ```

---

> [!NOTE]
> ## 10) Weighted Average

> [!CAUTION]
> ```cpp
> double A, B, C;
> cin >> A >> B >> C;
> double media = ((A*2)+(B*3)+(C*5))/10.0;
> cout << fixed << setprecision(1) << media;
> ```

---

> [!NOTE]
> ## 11) Alternating Sum

> [!CAUTION]
> ```cpp
> cout << (n % 2 == 0 ? n/2 : -(n+1)/2);
> ```

---

> [!NOTE]
> ## 12) Cyclic Consumption
> `V %= (A + B + C)`

> [!CAUTION]
> ```cpp
> V %= (A + B + C);
> if (V < A) cout << "F";
> else if (V < A + B) cout << "M";
> else cout << "T";
> ```

---

> [!NOTE]
> ## 13) Tricky Sum

> [!CAUTION]
> ```cpp
> long long sum = 0;
> for (long long i = 1; i <= n; i *= 2) sum += i;
> ```

---

> [!NOTE]
> ## 14) Buy a Shovel

> [!CAUTION]
> ```cpp
> for (int t = 1; t <= 10; t++) {
>     if ((t*k)%10 == 0 || (t*k)%10 == r) {
>         cout << t;
>         break;
>     }
> }
> ```

---

> [!NOTE]
> ## 15) Prime + Divisible by 13

> [!CAUTION]
> ```cpp
> cout << (n >= 13 ? "YES" : "NO");
> ```

---

> [!NOTE]
> ## 16) Sort 3 Numbers

> [!CAUTION]
> ```cpp
> long long mn = min({a,b,c});
> long long mx = max({a,b,c});
> long long mid = a + b + c - mn - mx;
> ```

---

> [!NOTE]
> ## 17) k Odd Numbers

> [!CAUTION]
> ```cpp
> if (n >= k*k && n%2 == k%2) cout << "YES";
> else cout << "NO";
> ```

---

> [!NOTE]
> ## 18) Conditional Count

> [!CAUTION]
> ```cpp
> int res = (a<b) + (a<c) + (a<d);
> ```

---

> [!NOTE]
> ## 19) Square Difference

> [!CAUTION]
> ```cpp
> long long s = n*(n+1)/2;
> long long res = s*s - n*(n+1)*(2*n+1)/6;
> ```

---

> [!NOTE]
> ## 20) Distance

> [!CAUTION]
> ```cpp
> long long d = x*x + y*y;
> ```

---

> [!NOTE]
> ## 21) Range Sum

> [!CAUTION]
> ```cpp
> long long n = R - L + 1;
> cout << n*(L+R)/2;
> ```
