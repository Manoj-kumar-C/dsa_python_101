**Essential C++ Inbuilt Functions for Problem-Solving**

---

### **1. I/O Optimization**
- `ios_base::sync_with_stdio(false); cin.tie(NULL);`
  - **Usage:** Speeds up input and output operations.
  - **When to use:** Always use in competitive programming to improve I/O speed.

---

### **2. Common Algorithms (in `<algorithm>`)**

- **Sorting:**
  ```cpp
  sort(arr, arr + n); // Sort an array in ascending order
  sort(vec.begin(), vec.end()); // Sort a vector
  ```
  - **Custom sorting:**
    ```cpp
    sort(arr, arr + n, greater<int>()); // Descending order
    ```

- **Binary Search:**
  ```cpp
  bool found = binary_search(arr, arr + n, x); // Checks if x exists in sorted array
  ```

- **Lower and Upper Bounds:**
  ```cpp
  auto lb = lower_bound(arr, arr + n, x); // First element >= x
  auto ub = upper_bound(arr, arr + n, x); // First element > x
  ```

- **Maximum and Minimum:**
  ```cpp
  int mx = *max_element(arr, arr + n); // Max element in array
  int mn = *min_element(arr, arr + n); // Min element in array
  ```

- **Accumulate:**
  ```cpp
  int sum = accumulate(arr, arr + n, 0); // Sum of elements in array
  ```

- **Reverse:**
  ```cpp
  reverse(arr, arr + n); // Reverse array
  reverse(vec.begin(), vec.end()); // Reverse vector
  ```

- **Unique:**
  ```cpp
  auto it = unique(arr, arr + n); // Removes consecutive duplicates, returns new end
  ```

---

### **3. String Functions (in `<string>`)**

- **Substring:**
  ```cpp
  string sub = str.substr(pos, len); // Substring starting at pos with len characters
  ```

- **Find:**
  ```cpp
  size_t pos = str.find("pattern"); // First occurrence of "pattern"
  ```

- **Sort Characters:**
  ```cpp
  sort(str.begin(), str.end());
  ```

- **Reverse String:**
  ```cpp
  reverse(str.begin(), str.end());
  ```

---

### **4. Data Structure Utilities**

#### **Vector:**

- **Initialization:**
  ```cpp
  vector<int> vec = {1, 2, 3};
  ```

- **Push and Pop:**
  ```cpp
  vec.push_back(x); // Add element to end
  vec.pop_back();   // Remove last element
  ```

- **Size and Capacity:**
  ```cpp
  int sz = vec.size();
  ```

#### **Map and Set:**

- **Map:**
  ```cpp
  map<int, int> mp;
  mp[key] = value; // Insert key-value pair
  ```

- **Set:**
  ```cpp
  set<int> st;
  st.insert(x); // Add element
  st.erase(x);  // Remove element
  ```

#### **Pair:**

- **Initialization:**
  ```cpp
  pair<int, int> p = {1, 2};
  ```

- **Sort Vector of Pairs:**
  ```cpp
  sort(vec.begin(), vec.end()); // Sort by first, then second
  ```

---

### **5. Math Utilities (in `<cmath>`)**

- **Power:**
  ```cpp
  double res = pow(a, b); // a^b
  ```

- **Square Root:**
  ```cpp
  double res = sqrt(x);
  ```

- **Absolute Value:**
  ```cpp
  int res = abs(x);
  ```

- **Greatest Common Divisor (GCD) and Least Common Multiple (LCM):**
  ```cpp
  int g = gcd(a, b); // Requires <algorithm> in C++17
  int l = (a * b) / gcd(a, b);
  ```

- **Modulo:**
  ```cpp
  int mod = x % MOD;
  ```

---

### **6. Random Number Generation (in `<random>`)**
```cpp
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int random = uniform_int_distribution<int>(low, high)(rng);
```

---

### **7. Bit Manipulation (in `<bitset>`)**

- **Count Set Bits:**
  ```cpp
  int cnt = __builtin_popcount(x); // Number of 1's in binary representation
  ```

- **Trailing Zeros:**
  ```cpp
  int tz = __builtin_ctz(x); // Count trailing zeros
  ```

- **Leading Zeros:**
  ```cpp
  int lz = __builtin_clz(x); // Count leading zeros
  ```

---

### **8. Miscellaneous**

- **Swapping:**
  ```cpp
  swap(a, b); // Swap two values
  ```

- **Next Permutation:**
  ```cpp
  next_permutation(vec.begin(), vec.end());
  ```

- **Unique Element Count (with Set):**
  ```cpp
  set<int> uniqueElements(arr, arr + n);
  ```

---

These functions and utilities will help you solve a wide range of problems efficiently! Use them wisely and practice frequently to master their usage.

