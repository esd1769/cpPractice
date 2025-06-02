#include <iostream>
#include <climits>
#include <chrono>
using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    for (int i = 0; i < INT_MAX; i++) {
        // no output
    }

    auto end = chrono::high_resolution_clock::now();
    cout << "Loop time: "
         << chrono::duration_cast<chrono::milliseconds>(end - start).count()
         << " ms" << endl;
    return 0;
}
/*You're executing about 2.1 billion iterations (INT_MAX ≈ 2,147,483,647).

In 535 ms, that’s roughly:

2,147,483,647/
0.535
 seconds
≈
4
×
10
9
 iterations/second
0.535 seconds
2,147,483,647
​
 ≈4×10 
9
  iterations/second
So your CPU is executing about 4 billion iterations per second 
(which aligns with a high-performance modern CPU).
✅ Your CPU is fast — loop computation isn't a bottleneck.

⚠️ When you add cout << i << endl;, the bottleneck becomes I/O (printing),
 which is thousands of times slower than pure computation. */