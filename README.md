# World-of-Cpp

## What is FAST and What is SLOW ?
- In competitive programming, it is important to read input as fast as possible so we save valuable time. Faster I/O techniques:
1. It is often recommended to use scanf/printf instead of cin/cout for a fast input and output.
- However, you can still use cin/cout and achieve the same speed as scanf/printf by including the following two lines in your main() function:
```cpp
    ios_base::sync_with_stdio(false);
```
```cpp
    cin.tie(NULL);
```

2. It is recommended to use cout << “\n”; instead of cout << endl;. endl is slower.
```
cout << endl  : Inserts a new line and flushes the stream

cout << "\n"  : Only inserts a new line.
```
