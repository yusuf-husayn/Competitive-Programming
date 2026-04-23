---
title: "Week Two Cheat Sheet"
type: "Cheat Sheet"
topic: "Week Two"
subtopic: "Arrays and Strings"
tags: ["C++", "Algorithms", "CP", "Problem Solving"]
status: "Completed"
level: "Zero"
created: "2026-04-23"
updated: "2026-04-23"
problems_count: 26
source: "Codeforces"
revision: 1
---

# 📘 Week Two Cheat Sheet

---

## 1) String Length (طول الـ String)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> علشان نجيب عدد الحروف لطول `String` في وقت تشغيل ثابت `$O(1)$`
> في لغة `C++` الـ `std::string` بيحتفظ جواه بمتغير بيسجل حجمه الفعلي علشان كدا لما بننادي على دالة `length()` أو `size()` البرنامج مش بيلف على الحروف كلها علشان يعدها لا دا بيرجع القيمة المتخزنة علطول وبشكل مباشر
>
> **القانون الرياضي والمثال:**
> مفيش قانون معقد هنا التعقيد الزمني هو الثابت `$O(1)$`
> مثال: لو عندنا `string S = "Hello";` الدالة هترجع القيمة 5 في خطوة واحدة بدون المرور على الـ 5 حروف

> [!TIP]
> **استخدام `getline` مكان `cin`**
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
>     cout << S.length() << endl;
> }
> ```

---

## 2) Linear Search in 2D Array (البحث الخطي في 2D Array)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> علشان ندور على عنصر `X` جوا مصفوفة ثنائية الأبعاد `2D Array` بالمرور التسلسلي الخوارزمية دي بتعتمد إننا نلف على كل عناصر الـ `Array` صف بصف باستخدام حلقتين متداخلين `Nested Loops` أول ما نلاقي العنصر اللي بيساوي `X` بنطبع `YES` ونقفل الدالة فوراً علشان نوفر وقت لو الـ `Loops` خلصت كلها ومفيش حاجة دا إثبات إن الرقم مش موجود فبنطبع `NO`
>
> **القانون الرياضي والمثال:**
> إجمالي عدد الخطوات بيساوي عدد الصفوف × عدد الأعمدة
> `$$Steps = N \times M$$`
> مثال: لو مصفوفة 3 × 3 وبندور على رقم في أسوأ حالة هنلف 9 مرات جوا الـ `Loops`

> [!TIP]
> **مبدأ الخروج المبكر (Early Exit)**
> استخدام `return;` أو `break;` أول ما نلاقي اللي بندور عليه دي من أهم حركات الـ `CP` بتوفر وقت المعالجة وتمنع الجهاز إنه يلف على الفاضي في دورات بحث ملهاش لازمة

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N \times M)$` في أسوأ الحالات لو العنصر مش موجود أصلاً أو قاعد في آخر خلية
> - **Space Complexity:** بتاخد `$O(N \times M)$` علشان محتاجين نخزن الـ `Grid` كلها جوا الميموري

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int N, M; cin >> N >> M;
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
> علشان ندور على أصغر وأكبر عنصر جوا الـ `Array` ونبدل أماكنهم في نفس المكان `In-place Swap` علشان نبدل من غير ما نعمل مصفوفة جديدة لازم نتعامل مع عناوين الميموري `Pointers` دوال الـ `STL` زي `min_element` و `max_element` بترجع `Pointer` لمكان العنصر جوا الذاكرة باستخدام الـ `Dereference Operator *` مع دالة `swap` بنبدل القيم جوا العناوين الأصلية علطول
>
> **القانون الرياضي والمثال:**
> دالة الـ `Swap` بتعتمد على فكرة المتغير المؤقت `Temp`
> `$$Temp = A \quad A = B \quad B = Temp$$`
> مثال: لو بنبدل 5 و 10
> المتغير المؤقت هياخد 5 وبعدين نبدلهم فالعشرة هتيجي مكان الخمسة وهكذا

> [!TIP]
> **CP Pro Tip: The One-Liner Magic**
> إننا ندمج البحث والتبديل في سطر واحد زي `swap(*max_element(...), *min_element(...))` دي حركة روشة `Clean Code` بتخلي الكود أقصر ولو بندور على أعلى `Optimization` ممكن نستخدم `minmax_element` ونجيبهم هما الاتنين في لفة واحدة

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$` لأننا بنلف على الـ `Array` خطياً
> - **Space Complexity:** بتاخد `$O(1)$` لأن التبديل بيحصل جوا المصفوفة الأصلية

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
> علشان ندور على أول ظهور لعنصر `X` جوا `Array` ونرجع الـ `Index` بتاعه بنلف على الـ `Array` بالترتيب من أول `Index 0` لحد `N-1` بنقارن كل عنصر بالرقم `X` أول ما نلاقي تطابق بنطبع الـ `Index` ونطبق قاعدة الـ `Early Exit` دا بيضمن حاجتين إننا جبنا أول ظهور بس وإننا وفرنا وقت المعالجة لو اللفة خلصت ومفيش تطابق بنطبع `Not Found`
>
> **القانون الرياضي والمثال:**
> إحنا بنستخدم الفهرسة الصفرية `0-Based Indexing`
> مثال: `arr = [5, 10, 15, 10]` وبندور على 10 بنلاقيه عند الـ `Index 1` الخروج المبكر هيمنعنا إننا نكمل للـ `Index 3`

> [!TIP]
> **الفهرسة الصفرية (0-Based Indexing)**
> المطلوب في المسألة طباعة الـ `Index` البرمجي اللي بيبدأ من صفر مش الترتيب العددي اللي بيبدأ من 1 فطباعة العداد `i` علطول هو الإجراء الصح

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$` في أسوأ الحالات لو العنصر في الآخر خالص أو مش موجود أصلاً
> - **Space Complexity:** بتاخد `$O(N)$` علشان نخزن الـ `Array`

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

## 5) Conditional Case Transformation (التحويل المشروط للحروف)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> تظبيط الـ `Strings` بناءً على حالة الحروف `Uppercase` أو `Lowercase` وعلاج الغلطة بتاعة زرار `Caps Lock` بنفحص الكلمة من بعد أول حرف يعني من `Index 1` لو كل الحروف اللي باقية طلعت `Capital` بنعكس حالة الكلمة كلها
>
> **القانون الرياضي والمثال:**
> في جدول الآسكي `ASCII Code` الفرق بين الحرف الكابيتال والسمول هو 32
> `$$Lowercase = Uppercase + 32$$`
> مثال: حرف `A` قيمته 65 علشان نحوله لـ `a` بنجمع 32 فبيبقى 97 ودوال `tolower` و `toupper` بتعمل دا تلقائياً

> [!TIP]
> **معالجة الحالات الفردية (Single Character)**
> الكود دا بيشتغل زي الفل مع الكلمات اللي من حرف واحد لأن الـ `Loop` بتاعت الفحص مش هتبدأ أصلاً فهيفضل الشرط `true` وهيعكس حالة الحرف الوحيد ودا المطلوب بالظبط

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$` لأننا بنلف مرتين بالكتير مرة للفحص ومرة للتحويل
> - **Space Complexity:** بتاخد `$O(1)$` علشان بنحول جوا نفس المكان `In-place`

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     string s; cin >> s;
>     bool Caps = true;
> 
>     // نفحص هل كل الحروف من بعد الحرف الأول كابيتال
>     for(int i = 1; i < (int)s.length(); i++){
>         if(islower(s[i])) {
>             Caps = false;
>             break;
>         }
>     }
> 
>     // لو النمط صح نعكس حالة الحروف كلها
>     if(Caps){
>         for(int i = 0; i < (int)s.length(); i++)
>             s[i] = (islower(s[i]) ? toupper(s[i]) : tolower(s[i]));
>     }
>     cout << s << endl;
> }
> ```

---

## 6) Array Filtering and Position Mapping (فلترة المواقع)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> بنفلتر عناصر الـ `Array` اللي بتحقق شرط معين ونحتفظ بالـ `Index` بتاعها بنلف على الـ `Array` من 0 لـ `N-1` في كل خطوة بنختبر الرقم لو الشرط اتحقق بنطبع الـ `Index` والقيمة ولو لأ بنطنشه ونكمل للرقم اللي بعده
>
> **القانون الرياضي والمثال:**
> الشرط المنطقي `$A[i] \le 10$`
> مثال: لو `A = [15, 5, 20, 10]` اللوب هتطبع `A[1] = 5` و `A[3] = 10`

> [!TIP]
> **تحسين الأداء (Optimization Strategy)**
> ممكن ندمج القراءة والفحص في `Loop` واحدة مش هتقلل الـ `Time Complexity` نظرياً بس هتقلل الشغل الفعلي للمعالج وتخلي الكود رشيق وممكن نخلي الـ `Space` تبقى `$O(1)$` لو عالجنا الرقم أول ما نقراه من غير ما نخزنه أصلاً

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$` لأننا بنلف مرة نقرا ومرة نفحص ونطبع
> - **Space Complexity:** بتاخد `$O(N)$` علشان نخزن الأرقام جوا المصفوفة

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>   int N; cin >> N;
>   int A[N];
> 
>   for(int i = 0; i < N; i++) cin >> A[i];
> 
>   for(int i = 0; i < N; i++)
>     if(A[i] <= 10) cout << "A[" << i << "] = " << A[i] << endl;
> }
> ```

---

## 7) Array Sorting (ترتيب المصفوفات)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> علشان نرتب الـ `Array` تصاعدي أو تنازلي بكفاءة بنستخدم دالة `std::sort` اللي بتعتمد على خوارزمية الـ `IntroSort` وبترتب العناصر تصاعدي بطبيعتها علشان نعكسه ونخليه تنازلي بنباصي `Comparator` جاهز اسمه `greater<int>()`
>
> **القانون الرياضي والمثال:**
> التعقيد الزمني لخوارزميات الترتيب السريعة بيتحسب كدا
> `$$Time = N \times \log_2(N)$$`
> مثال: لو الـ `Array` فيها 8 عناصر عدد العمليات هيكون تقريباً 24 عملية بدلاً من 64 عملية في الـ `Bubble Sort` القديم

> [!TIP]
> **Optimization Trick**
> لو بندور على الـ `Peak Performance` الأفضل نرتب تصاعدي مرة واحدة بس وبعدين نستخدم دالة `reverse` علشان نعكس الـ `Array` دالة الـ `Reverse` بتشتغل في وقت خطي `$O(N)$` فهتكون أسرع بكتير

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N \log N)$` لكل عملية ترتيب
> - **Space Complexity:** بتاخد `$O(\log N)$` للعمليات الداخلية و `$O(N)$` للـ `Array` نفسها

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int N; cin >> N;
>     int arr[N];
>     for(int i = 0; i < N; i++) cin >> arr[i];
> 
>     // الترتيب التصاعدي
>     sort(arr, arr + N);
>     for(int i = 0; i < N; i++) cout << arr[i] << " ";
>     cout << endl;
> 
>     // الترتيب التنازلي باستخدام الـ Comparator
>     sort(arr, arr + N, greater<int>());
>     for(int i = 0; i < N; i++) cout << arr[i] << " ";
>     cout << endl;
> }
> ```

---

## 8) Finding Minimum Element and its Index (أصغر رقم ومكانه)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> علشان نلاقي أصغر رقم ومكانه بـ `1-based Indexing` بكفاءة بنستخدم `min_element` اللي بترجع `Pointer` لأول ظهور لأصغر رقم
> - علشان نجيب القيمة بنعمل `Dereference *`
> - علشان نجيب المكان بنعمل `Pointer Arithmetic` وبنطرح بداية الـ `Array` من الـ `Pointer` بتاعنا وبنزود 1 علشان الـ `1-based Indexing`
>
> **القانون الرياضي والمثال:**
> حساب الـ `Index` بالمؤشرات
> `$$Index = Pointer_{target} - Pointer_{base}$$`
> مثال: لو المصفوفة بتبدأ عند عنوان 1000 وأصغر رقم لقيناه عند العنوان 1008 وكل عنصر 4 بايت يبقى الـ `Index` بيساوي 2 نزود عليه 1 يبقى المكان 3

> [!TIP]
> **Iterator Caching (تحسين الأداء)**
> إننا ننادي `min_element` مرتين في نفس السطر بيخلي الوقت يتضاعف لـ `$2N$` الشغل الصح إننا نستدعي الدالة مرة واحدة بس ونخزن الـ `Iterator` في متغير `auto`

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$` لأنها بتلف لفة واحدة بس
> - **Space Complexity:** بتاخد `$O(N)$`

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>   int N; cin >> N;
>   int arr[N];
> 
>   for(int i = 0; i < N; i++) cin >> arr[i];
> 
>   cout << *min_element(arr, arr + N) << ' ' << min_element(arr, arr + N) - arr + 1 << endl;
> }
> ```

---

## 9) Matrix Diagonal Summation (جمع أقطار الـ 2D Array)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> علشان نحسب الفرق المطلق بين مجموع القطر الرئيسي والفرعي
> - القطر الرئيسي العناصر اللي الصف بيساوي العمود بناخد `arr[i][i]`
> - القطر الفرعي العناصر اللي مجموع الصف والعمود بيساوي `N-1` يعني العمود `j` دايماً بيساوي `N - 1 - i` فبناخد `arr[i][N - 1 - i]`
>
> **القانون الرياضي والمثال:**
> القطر الفرعي دايماً معادلته
> `$$Row + Col = N - 1$$`
> مثال: لو مصفوفة 3 × 3 وعايزين عنصر القطر الفرعي في الصف الأول يعني `i=0` هيكون العمود `j = 3 - 1 - 0 = 2` يعني العنصر `arr[0][2]`

> [!TIP]
> **The Absolute Difference**
> دالة `abs()` بتضمن النتيجة تطلع موجبة دايماً لأن الفرق ممكن يطلع سالب لو المجموع التاني أكبر

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** القراءة بتاخد `$O(N^2)$` الحساب بياخد `$O(N)$` بس لأننا بنستخدم `Single Loop`
> - **Space Complexity:** بتاخد `$O(N^2)$` علشان نخزن المصفوفة

> [!CAUTION]
> **C++ Template (Optimized):**
> ```cpp
> void solve() {
>     int N; cin >> N;
>     int arr[N][N];
>     
>     // قراءة المصفوفة
>     for(int i = 0; i < N; i++) {
>         for(int j = 0; j < N; j++) cin >> arr[i][j];
>     }
> 
>     int sm1 = 0, sm2 = 0;
>     // حساب الأقطار في لفة واحدة
>     for(int i = 0; i < N; i++) {
>         sm1 += arr[i][i];            // القطر الرئيسي
>         sm2 += arr[i][N - 1 - i];    // القطر الفرعي
>     }
> 
>     cout << abs(sm1 - sm2) << endl;
> }
> ```

---

## 10) Range Frequency Counting (حساب التكرار في رينج)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> نحسب الرقم `X` اتكرر كام مرة جوا فترة من `L` لـ `R` علشان القيود صغيرة الـ `Brute Force` هو الحل المثالي مع كل `Query` بنعمل `Loop` من `L` لـ `R` وبنقارن العنصر بـ `X` ونزود العداد `cnt` ونصفر العداد مع كل `Query` جديد
>
> **القانون الرياضي والمثال:**
> طول الفترة بيتحسب كدا
> `$$Length = R - L + 1$$`
> مثال: لو الاستعلام عن الفترة من 2 لـ 5 هنلف 4 لفات ونقارن الأرقام

> [!TIP]
> **1-Based Indexing Strategy**
> علشان نسهل التعامل مع الـ `Queries` اللي بتبدأ من 1 بنعرف الـ `Array` بحجم `N + 1` ونبدأ التخزين من `Index 1` دا بيمنع أخطاء الـ `Off-by-one errors`

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(q \times N)$`
> - **Space Complexity:** بتاخد `$O(N)$`

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int N, q; cin >> N >> q;
>     int arr[N + 1]; 
>     
>     // قراءة بنظام 1-based
>     for(int i = 1; i <= N; i++) cin >> arr[i];
> 
>     // معالجة الـ Queries
>     while(q--) {
>         int l, r, x; cin >> l >> r >> x;
>         int cnt = 0; 
>         
>         // البحث في النطاق
>         for(int i = l; i <= r; i++) {
>             if(arr[i] == x) cnt++;
>         }
>         cout << cnt << endl;
>     }
> }
> ```

---

## 11) Array Splitting and Mirroring (انعكاس الـ Array)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> نقسم الـ `Array` نصين ونطبع كل نص معكوس `Mirror` بدل ما نرتب أكتر من مرة بنرتب الـ `Array` بالكامل مرة واحدة بس بـ `sort`
> - أصغر نص: من 0 لـ `N/2 - 1`
> - أكبر نص: من `N/2` لـ `N-1`
> بعدين بنعمل الـ `Mirroring` بـ `Loops` السطر الأول تصاعدي ثم تنازلي والسطر التاني تنازلي ثم تصاعدي
>
> **القانون الرياضي والمثال:**
> بنحدد نقطة المنتصف بالمعادلة دي
> `$$Midpoint = \lfloor N / 2 \rfloor$$`
> مثال: لو الـ `Array` فيها 6 عناصر نقطة المنتصف 3 النص الأول هيكون من 0 لـ 2 النص التاني من 3 لـ 5

> [!TIP]
> **Optimization & Clean Code (DRY)**
> تعريف متغير `int h = N / 2` بيمنع تكرار القسمة جوا الـ `Loops` وبيخلي الكود مقري جداً

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N \log N)$` علشان الـ `Sort`
> - **Space Complexity:** بتاخد `$O(N)$`

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int N; cin >> N;
>     int arr[N];
>     for(int i = 0; i < N; i++) cin >> arr[i];
> 
>     // 1. الترتيب مرة واحدة
>     sort(arr, arr + N);
>     int h = N / 2;
> 
>     // 2. معالجة أصغر نصف
>     for(int i = 0; i < h; i++) cout << arr[i] << ' ';
>     for(int i = h - 1; i >= 0; i--) cout << arr[i] << ' ';
>     cout << endl;
> 
>     // 3. معالجة أكبر نصف
>     for(int i = N - 1; i >= h; i--) cout << arr[i] << ' ';
>     for(int i = h; i < N; i++) cout << arr[i] << ' ';
> }
> ```

---

## 13) Array Palindrome Check (فحص الـ Palindrome)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> بنستخدم الـ `Two-Pointers` مؤشر من البداية `i` ومؤشر من النهاية `N - 1 - i` وبنلف لحد نص المصفوفة بس `N / 2` لو أي رقمين اختلفوا يبقى مش `Palindrome`
>
> **القانون الرياضي والمثال:**
> الطرف المقابل لأي `Index` هو `N - 1 - i`
> مثال: لو المصفوفة طولها 5 لما العداد بـ 0 الطرف التاني هيكون 4 ولما العداد بـ 1 الطرف التاني هيكون 3 بنقارنهم ببعض ونقف عند النص

> [!TIP]
> **Early Exit Optimization**
> الـ `return;` أول ما نلاقي اختلاف بتوفر وقت المعالجة بشكل رهيب

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$` وتحديداً بتعمل `N/2` مقارنة بس
> - **Space Complexity:** بتاخد `$O(N)$`

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int N; cin >> N;
>     int arr[N];
>     for(int i = 0; i < N; i++) cin >> arr[i];
> 
>     // نلف لحد النص بس
>     for(int i = 0; i < (N / 2); i++) {
>         if(arr[i] != arr[N - 1 - i]) {
>             cout << "NO" << endl;
>             return; // Early Exit
>         }
>     }
>     
>     cout << "YES" << endl;
> }
> ```

---

## 14) Logical Simplification (التفكير العكسي)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> بنبسط مشكلة مقارنة الـ `Strings` بتفكير عكسي بما إن فاسيا مش بيعرف يفرق بين الأخضر والأزرق يبقى الاختلاف الوحيد اللي هيلقطه هو الأحمر لو حرف أحمر والتاني لأ يبقى مش متطابقين غير كدا هيبقوا متطابقين
>
> **القانون الرياضي والمثال:**
> بنستخدم البوابة المنطقية `XOR` اللي بتدي `True` لو المدخلات مختلفة
> مثال: لو الحرف الأول أحمر يعني `True` والتاني أخضر يعني `False` كدا في اختلاف وهنطبع `NO`

> [!TIP]
> **Boolean XOR Logic in C++**
> استخدام علامة `!=` كـ `XOR` زي كدا `(s1[i] == 'R') != (s2[i] == 'R')` بتوفر شروط كتير متداخلة وبتخلي الكود `Clean` جداً

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$` لكل `Test Case`
> - **Space Complexity:** بتاخد `$O(N)$`

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int n; cin >> n;
>     string s1, s2; cin >> s1 >> s2;
> 
>     for(int i = 0; i < n; i++) {
>         // لو واحد أحمر والتاني لأ نطبع NO ونقفل
>         if((s1[i] == 'R') != (s2[i] == 'R')) {
>             cout << "NO" << endl;
>             return; // Early Exit
>         }
>     }
>     cout << "YES" << endl;
> }
> ```

---

## 15) Simulation using Frequency Array (المحاكاة)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> بنتبع حالة الحروف علشان نحسب البالونات بنعمل مصفوفة `freq` بحجم 26 مع كل حرف بنزود العداد بتاعه لو العداد بـ 1 نزود نقطتين لو أكبر من 1 نزود نقطة واحدة
>
> **القانون الرياضي والمثال:**
> بنحول الحرف لـ `Index` عن طريق طرح قيمة أول حرف
> `$$Index = Char - 'A'$$`
> مثال: لو الحرف `C` قيمته في الآسكي 67 والـ `A` قيمتها 65 كدا الـ `Index` هيكون 2 وبنزود العداد في `freq[2]`

> [!TIP]
> **Ternary Operator Optimization**
> اختصار بلوك `if-else` كامل في سطر زي كدا `(freq[s[i] - 'A'] == 1) ? cnt += 2 : cnt++;` دي حركة روشة جداً

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$`
> - **Space Complexity:** بتاخد `$O(1)$` لأن المصفوفة حجمها ثابت 26 دايماً

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int n; cin >> n;
>     string s; cin >> s;
>     int freq[26] = {0}; // تصفير الـ Array
>     int cnt = 0;
> 
>     for(int i = 0; i < n; i++) {
>         freq[s[i] - 'A']++;
>         
>         // أول مرة نضيف 2 بعد كدا نضيف 1
>         (freq[s[i] - 'A'] == 1) ? cnt += 2 : cnt++;
>     }
>     
>     cout << cnt << endl;
> }
> ```

---

## 16) Frequency Array Optimization (تحسين الذاكرة)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> بدل ما نخزن الأرقام كلها ونقعد ندور بنعمل مصفوفة `freq` بحجم `M + 1` أول ما نقرا الرقم بنستخدمه كـ `Index` ونزود العداد بتاعه علطول في نفس اللحظة `On-the-fly`
>
> **القانون الرياضي والمثال:**
> الفكرة كلها في الـ `Direct Indexing` بدل ما نعمل مصفوفة بنعمل `freq[x]++`
> مثال: لو المدخلات `[3, 1, 3]` اللوب هتعمل زيادة لرقم 3 وبعدين 1 وبعدين 3 في النهاية رقم 3 هيكون اتكرر مرتين

> [!TIP]
> **On-the-Fly Processing**
> إننا نقرا ونزود العداد علطول من غير ما نخزن في مصفوفة عادية بيوفر حلقة تكرارية كاملة وبيمنع استهلاك الذاكرة

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N + M)$`
> - **Space Complexity:** بتاخد `$O(M)$` للـ `Freq Array` بس

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int N, M; cin >> N >> M;
>     int freq[M + 1] {}; // تصفير مصفوفة التكرار
>     
>     // نقرا الرقم ونحدث التكرار لحظياً
>     for(int i = 0; i < N; i++){
>         int x; cin >> x;
>         freq[x]++;
>     }
> 
>     // طباعة التكرارات
>     for(int i = 1; i <= M; i++) {
>         cout << freq[i] << endl;
>     }
> }
> ```

---

## 17) Fibonacci Space Optimization (تحسين الذاكرة بمتغيرين)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> بنحسب رقم فيبوناتشي بأقل `Memory` ممكنة علشان كل رقم بيعتمد بس على آخر رقمين قبله مش محتاجين نحتفظ بتاريخ المتتالية نستخدم متغيرين بس `a` و `b` ونحسب الجديد ونعمل إزاحة `Shift`
>
> **القانون الرياضي والمثال:**
> متتالية فيبوناتشي
> `$$F_n = F_{n-1} + F_{n-2}$$`
> مثال: علشان نحسب الحد التالت بنجمع الأول والتاني 0 + 1 = 1 وبعدين بنخلي المتغيرين قيمتهم 1 ونكمل للخطوة الجاية

> [!TIP]
> **The Swap Magic Trick**
> بدل ما نعمل متغير تالت `c` بنجمع `a = a + b` وبعدين بنعمل `swap(a, b)` الـ `b` هتشيل المجموع الجديد والـ `a` هترجع للقيمة القديمة

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$` بنلف لفة واحدة بس
> - **Space Complexity:** بتاخد `$O(1)$` ثابتة لأننا استغنينا عن المصفوفات خالص

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>   int N; cin >> N;
>   
>   // Base Cases
>   if(N == 1){ cout << 0 << endl; return; }
>   if(N == 2){ cout << 1 << endl; return; }
> 
>   int a {0}, b {1};
> 
>   // O(N) Time, O(1) Space
>   for(int i = 3; i <= N; i++){
>     a = a + b;
>     swap(a, b);
>   }
> 
>   cout << b << endl;
> }
> ```

---

## 18) String abbreviations (اختصار الـ Strings)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> لو الكلمة أطول من 10 حروف بناخد أول حرف بـ `s.front()` وآخر حرف بـ `s.back()` ونحط في النص عدد الحروف اللي بينهم وهو `N - 2` لو مش أطول من 10 بنطبعها زي ما هي
>
> **القانون الرياضي والمثال:**
> طول الحروف اللي في النص دايماً بيساوي الحجم الكلي ناقص 2
> `$$Middle = N - 2$$`
> مثال: كلمة `localization` طولها 12 حرف أول حرف `l` وآخر حرف `n` الحروف اللي في النص عددهم 10 النتيجة هتكون `l10n`

> [!TIP]
> **The Hacker's One-Liner (سطر المحترفين)**
> استخدام الـ `Ternary Operator` للطباعة مباشرة بيخلينا منعملش متغيرات جديدة في الميموري وندمج النصوص بذكاء

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(1)$` لكل كلمة
> - **Space Complexity:** بتاخد `$O(1)$` مفيش أي `Arrays` إضافية

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     string s; cin >> s;
>     int n = s.length();
> 
>     // Ternary Operator لتقييم جملة الطباعة علطول
>     (n > 10) ? (cout << s.front() << n - 2 << s.back() << endl) : (cout << s << endl);
> }
> ```

---

## 19) Outlier Detection via Baseline (اكتشاف الجاسوس)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> علشان نلاقي الرقم المختلف جوا `Array` كلها أرقام متطابقة بدل ما نستخدم `Freq Array` بنستغل إن الأغلبية هتبان من أول 3 أرقام بنحدد الرقم العادي كمرجع `Baseline` وبعدين نلف على الـ `Array` نطلع اللي مش زيه
>
> **القانون الرياضي والمثال:**
> الأغلبية بنحسبها بقانون رياضي مبسط
> `$$Majority(a, b, c)$$`
> مثال: لو الـ `Array` فيها `[5, 5, 2]` بما إن الأول بيساوي التاني إذن المرجع هو 5 لو فيها `[5, 2, 2]` الأول مش بيساوي التاني إذن التالت سليم 100% وهو 2 المرجع هيكون 2

> [!TIP]
> **The Hacker's Logic (أذكى استنتاج)**
> نستخدم الـ `Ternary` كدا `int num = (a[0] == a[1]) ? a[0] : a[2];` لو أول رقمين زي بعض هما الأغلبية لو مختلفين يبقى التالت هو السليم 100%

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(N)$` بنعمل `Linear Search` ونتوقف فوراً
> - **Space Complexity:** بتاخد `$O(N)$`

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int n; cin >> n;
>     vector<int> a(n);
> 
>     for(int i = 0; i < n; i++) cin >> a[i];
> 
>     // تحديد الرقم المرجعي بذكاء
>     int num = (a[0] == a[1]) ? a[0] : a[2];
> 
>     // البحث عن الجاسوس
>     for(int i = 0; i < n; i++){
>         if(a[i] != num){
>             cout << i + 1 << endl;
>             return; // الخروج المبكر
>         }
>     }
> }
> ```

---

## 20) Beautiful Matrix (مسافة مانهاتن والتحويل الخطي)

> [!NOTE]
> **الفكرة التقنية (The Concept):**
> المسألة بتطلب نقل رقم 1 لمركز مصفوفة 5 × 5 عن طريق تبديل الصفوف والأعمدة دي حرفياً ترجمة لمفهوم رياضي اسمه مسافة مانهاتن `Manhattan Distance` بدل ما نقرأ المدخلات في `2D Array` ونعمل حلقتين تكرار بنقرأ الـ 25 عنصر في حلقة واحدة خطية `1D Loop` ولما نلاقي الرقم 1 بنحسب المسافة بين موقعه الحالي وبين المركز مباشرة المركز هو الصف 2 والعمود 2
>
> **القانون الرياضي والمثال:**
> قانون مسافة مانهاتن
> `$$D = |X_1 - X_2| + |Y_1 - Y_2|$$`
> وإحنا بنحول الـ `1D Index` لـ `2D` بالمعادلة دي
> - الصف `$X = i / 5$`
> - العمود `$Y = i \% 5$`
> مثال: لو الرقم 1 ظهر في العداد رقم 14 الصف هيكون 2 والعمود هيكون 4 المركز عند `(2, 2)` المسافة هتكون `|2 - 2| + |4 - 2| = 2` خطوات

> [!TIP]
> **1D to 2D Mapping (المعادلة السحرية)**
> علشان تحول رقم العداد الخطي `i` لمكان في `2D Array` رقم الصف بييجي بقسمة العداد على عرض المصفوفة ورقم العمود بييجي بباقي قسمة العداد على العرض علشان نحسب خطوات الوصول للمركز بنطرح الصف والعمود الحاليين من 2 وناخد القيمة المطلقة `abs()` علشان مفيش مسافة بالسالب ونجمعهم

> [!IMPORTANT]
> **الـ Complexity:**
> - **Time Complexity:** بتاخد `$O(1)$` ثابتة لأننا دايماً بنعمل 25 لفة بالظبط بغض النظر عن أي حاجة
> - **Space Complexity:** بتاخد `$O(1)$` الكود دا قمة الـ `Clean Code` لأننا استغنينا تماماً عن تخزين المصفوفة واستخدمنا متغير واحد بس للمراجعة اللحظية

> [!CAUTION]
> **C++ Template:**
> ```cpp
> void solve() {
>     int x;
>     // قراءة 25 عنصر في حلقة خطية واحدة
>     for(int i = 0; i < 25; i++) {
>         cin >> x;
>         
>         if(x == 1) {
>              // حساب مسافة مانهاتن للوصول للمركز 
>             // i / 5 بتجيب رقم الصف
>             // i % 5 بتجيب رقم العمود
>             cout << abs((i / 5) - 2) + abs((i % 5) - 2) << endl;
>         }
>     }
> }
> ```
