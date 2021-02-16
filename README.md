# World-of-Cpp

## What is FAST and What is SLOW ?
- In competitive programming, it is important to read input as fast as possible so we save valuable time. Faster I/O techniques:
- It is often recommended to use scanf/printf instead of cin/cout for a fast input and output.
- However, you can still use cin/cout and achieve the same speed as scanf/printf by including the following two lines in your main() function:
```cpp
    ios_base::sync_with_stdio(false);
```
```cpp
    cin.tie(NULL);
```

