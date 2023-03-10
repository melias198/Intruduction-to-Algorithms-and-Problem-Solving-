# 1. Calculate time and space complexity of the following code snippet:
```
int a = 0, b = 0;
int matrix[N][M];
for (i = 0; i < N; i++) {
    a = a + i;
    matrix[i][i] = a;
}
for (j = 0; j < M; j++) {
    b = b + 2 * j;
}
```

**Time complexity:**
```
Time Complexity:-->O(M+N)
Analysis:
The time complexity of this code is O(N+M), where N is the number of rows in the matrix and M is the number of columns.

The first for loop iterates N times and performs constant time operations in each iteration, so it has a time complexity of O(N).

The second for loop iterates M times and performs constant time operations in each iteration, so it has a time complexity of O(M).

Since the two loops are independent and non-nested, we can add their time complexities to get the total time complexity of O(N+M).
```
**Space Complexity**
```
Space Complexity: --> O(M*N)
Analysis:
The space complexity of this code is O(N*M), as the matrix takes up NM integers in memory. The variables a and b each take up a constant amount of space, so they do not affect the overall space complexity.
```

# 2. Calculate time and space complexity of the following code:
```
int a = 0;
for (i = 0; i < N; i++) {
    for (j = N; j > i; j--) {
        a = a + i + j;
    }
}
```
**Time complexity:**
```
Time Complexity:-->O(n^2)
Analysis:
i=0--j=n
i=1--j=n-1
i=2--j=n-2
........
i=n--j=1
-->n+(n-1)+(n-2)+...+1
-->n*(n+1)/2
-->n^2
```
**Space Complexity**
```
Space Complexity: --> O(1)
Analysis:
The space complexity of this code is O(1), because the amount of memory used is constant regardless of the input size. The only variable used is "a", which takes a constant amount of memory regardless of the value of N.
```

# 3. Calculate time and space complexity of the following code:
```
int a = 0, i = N;
vector<int> vec;
while (i > 0) {
    a += i;
    i /= 2;
    vec.push_back(a);
}
```
**Time complexity:**
```
Time complexity:-->O(logn)
Analysis:
Let Assume, n=20
i=n
i/2=10
i/2*2=5
i/2*2*2=2
.......
i/2^k
the programme terminate when would be i<=1
i/2^k<=1
i=2^k
k=(2base)logn
```
**Space Complexity**
```
Space Complexity: --> O(logn)
Analysis:
The space complexity of the program is also O(log N) because the vector will contain log N elements, where N is the initial value of i. The integer variables a and i take constant space, so they do not contribute to the overall space complexity.
```

