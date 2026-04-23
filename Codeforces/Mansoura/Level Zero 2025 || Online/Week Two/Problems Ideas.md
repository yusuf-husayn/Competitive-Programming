---
title: Week Two Cheat Sheet
type: Cheat Sheet
topic: Competitive Programming
subtopic: Arrays and Strings
tags:
  - C++
  - Algorithms
  - CP
  - Problem Solving
status: Completed
level: Beginner
created: 2026-04-23
updated: 2026-04-23
problems_count: 19
source: Codeforces
revision: 2
---

# 📘 Week Two Cheat Sheet

---

## 1) String Length (String طول الـ)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> 
> علشان نجيب عدد الحروف لطول `String` في وقت تشغيل ثابت $O(1)$
> في لغة  ++C الـ `std::string` بيحتفظ جواه بمتغير بيسجل حجمه الفعلي علشان كدا لما بننادي على دالة `()length` أو `()size` البرنامج مش بيلف على الحروف كلها علشان يعدها لا دا بيرجع القيمة المتخزنة علطول وبشكل مباشر
>
> **القانون الرياضي والمثال:**
> 
> مفيش قانون معقد هنا التعقيد الزمني هو الثابت $O(1)$
> مثال: لو عندنا `;"string S = "Hello` الدالة هترجع القيمة 5 في خطوة واحدة بدون المرور على الـ 5 حروف

> [!TIP]
> **استخدام `getline` مكان `cin`**
> 
> لو الـ `Input` فيه مسافات `Spaces` استخدام `cin >> S` هيقرا أول كلمة بس ويقف عند أول مسافة علشان نضمن إننا نقرا السطر كله صح لازم نستخدم `getline(cin, S)`

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     string S;
>     // قراءة السطر كله علشان منضيعش الحروف اللي بعد المسافات
>     getline(cin, S);
>     
>     // طباعة طول الـ String مباشرة
>     cout << S.length() << "\n";
> }
> ```

---

## 2) Linear Search in 2D Array (2D Array البحث الخطي في )

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> 
> علشان ندور على عنصر `X` جوا مصفوفة ثنائية الأبعاد `2D Array` بالمرور التسلسلي الخوارزمية دي بتعتمد إننا نلف على كل عناصر الـ `Array` صف بصف باستخدام حلقتين متداخلين `Nested Loops` أول ما نلاقي العنصر اللي بيساوي `X` بنطبع `YES` ونقفل الدالة فوراً علشان نوفر وقت لو الـ `Loops` خلصت كلها ومفيش حاجة دا إثبات إن الرقم مش موجود فبنطبع `NO`
>
> **القانون الرياضي والمثال:**
> 
> إجمالي عدد الخطوات بيساوي عدد الصفوف × عدد الأعمدة
> $$Steps = N \times M$$
> مثال: لو مصفوفة 3 × 3 وبندور على رقم في أسوأ حالة هنلف 9 مرات جوا الـ `Loops`

> [!TIP]
> **مبدأ الخروج المبكر (Early Exit)**
> 
> استخدام `;return` أو `;break` أول ما نلاقي اللي بندور عليه دي من أهم حركات الـ `CP` بتوفر وقت المعالجة وتمنع الجهاز إنه يلف على الفاضي في دورات بحث ملهاش لازمة

> [!IMPORTANT]
> **الـ Complexity:**
> 
> - **Time Complexity:**
>   
>    بتاخد $O(N \times M)$ في أسوأ الحالات لو العنصر مش موجود أصلاً أو قاعد في آخر خلية
> - **Space Complexity:**
>   
>    بتاخد $O(N \times M)$ علشان محتاجين نخزن الـ `Grid` كلها جوا الميموري

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int N, M; 
>     cin >> N >> M;
>     int arr[N][M];
> 
>     // قراءة الـ 2D Array
>     for(int i = 0; i < N; i++) {
>         for(int j = 0; j < M; j++) cin >> arr[i][j];
>     }
> 
>     int x; cin >> x;
> 
>     // الـ Linear Search
>     for(int i = 0; i < N; i++) {
>         for(int j = 0; j < M; j++) {
>             if(arr[i][j] == x) {
>                 cout << "YES" << endl;
>                 return; // خروج مبكر أول ما نلاقي الهدف
>             }
>         }
>     }
>     cout << "NO" << endl;
> }
> ```

---

## 3) Swapping Min and Max (تبديل الأصغر والأكبر)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> 
> علشان ندور على أصغر وأكبر عنصر جوا الـ `Array` ونبدل أماكنهم في نفس المكان `In-place Swap` علشان نبدل من غير ما نعمل مصفوفة جديدة لازم نتعامل مع عناوين الميموري `Pointers` وفي دوال الـ `STL` زي `min_element` و `max_element` بترجع `Pointer` لمكان العنصر جوا الذاكرة باستخدام الـ `Dereference Operator *` مع دالة `swap` بنبدل القيم جوا العناوين الأصلية علطول
>
> **القانون الرياضي والمثال:**
> 
> دالة الـ `Swap` بتعتمد على فكرة المتغير المؤقت `Temp`
> $$Temp = A \quad A = B \quad B = Temp$$
> مثال: لو بنبدل 5 و 10 المتغير المؤقت هياخد 5 وبعدين نبدلهم فالعشرة هتيجي مكان الخمسة وهكذا

> [!TIP]
> **CP Pro Tip: The One-Liner Magic**
> 
> إننا ندمج البحث والتبديل في سطر واحد زي `swap(*max_element(...), *min_element(...))` دي حركة روشة `Clean Code` بتخلي الكود أقصر ولو بندور على أعلى `Optimization` ممكن نستخدم `minmax_element` ونجيبهم هما الاتنين في لفة واحدة

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:**
>   
>    بتاخد $O(N)$ لأننا بنلف على الـ `Array` خطياً
> - **Space Complexity:**
>   
>    بتاخد $O(1)$ لأن التبديل بيحصل جوا المصفوفة الأصلية

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int n; cin >> n;
>     int arr[n];
>     for(int i = 0; i < n; i++) cin >> arr[i];
> 
>     // الوصول لعناوين الذاكرة وتبديل القيم جواها مباشرة
>     swap(*max_element(arr, arr + n), *min_element(arr, arr + n));
> 
>     for(int i = 0; i < n; i++) cout << arr[i] << ' ';
>     cout << endl;
> }
> ```

---

## 4) Linear Search: First Occurrence (إيجاد أول ظهور)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> 
> علشان ندور على أول ظهور لعنصر `X` جوا `Array` ونرجع الـ `Index` بتاعه بنلف على الـ `Array` بالترتيب من أول `Index 0` لحد `N-1` بنقارن كل عنصر بالرقم `X` أول ما نلاقي تطابق بنطبع الـ `Index` ونطبق قاعدة الـ `Early Exit` ودا بيضمن حاجتين إننا جبنا أول ظهور بس وإننا وفرنا وقت المعالجة لو اللفة خلصت ومفيش تطابق بنطبع `Not Found`
>
> **القانون الرياضي والمثال:**
> 
> إحنا بنستخدم الفهرسة الصفرية `0-Based Indexing`
> مثال: `arr = [5, 10, 15, 10]` وبندور على 10 بنلاقيه عند الـ `Index 1` الخروج المبكر هيمنعنا إننا نكمل للـ `Index 3`

> [!TIP]
> **الفهرسة الصفرية (0-Based Indexing)**
> 
> المطلوب في المسألة طباعة الـ `Index` البرمجي اللي بيبدأ من صفر مش الترتيب العددي اللي بيبدأ من 1 فطباعة العداد `i` علطول هو الإجراء الصح

> [!IMPORTANT]
> **الـ Complexity:**
> 
> - **Time Complexity:**
>   
>    بتاخد $O(N)$ في أسوأ الحالات لو العنصر في الآخر خالص أو مش موجود أصلاً
> - **Space Complexity:**
>   
>    بتاخد $O(N)$ علشان نخزن الـ `Array`

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int N, x; cin >> N >> x;
>     int arr[N];
>     for(int i = 0; i < N; i++) cin >> arr[i];
> 
>     // Linear Search مع Early Exit
>     for(int i = 0; i < N; i++) {
>         if(arr[i] == x) {
>             cout << i << endl;
>             return; // نقفل فوراً علشان نطبع أول تطابق بس
>         }
>     }
>     cout << "Not Found" << endl;
> }
> ```

---
