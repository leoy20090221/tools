# Tools
## Describe
+ This is a header file for tools.
+ This is a collection of tools.
+ It's written in c header file.
+ The tools may be useful.
## Install
#### To install, copy "tools.h" to your workspace folder.
#### To use, add "#include "tools.h"" to your c++ file.
## Reference
- bool is_prime(int num) calc a num is/not a prime.
- bool is_even(int num) calc a num is/not a even.
- bool is_odd(int num) calc a num is/not a odd.
- void easy_memset(int *array, int len) easy memseting an array (in int).
- void easy_memset(char *array, int len) easy memseting an array (in char).
- void easy_memset(bool *array, int len) easy memseting an array (in bool).
- bool is_ok(int *ary, int len) if an array (in int), all (A(i) < A(j) and j = i + 1), returns true.
- void ccin(int *ary, int len) easy cinning an array (in int).
- void ccin(char *ary, int len) easy cinning an array (in char).
- void ccin(bool *ary, int len) easy cinning an array (in bool).
- int intcounts(int *ary, int len) sum an array (in int).
- int times2(int n) returns n * n.
- int times3(int n) returns n * n * n.
- int max_array(int *array, int len) find a bigest num in an array.
- int min_array(int *array, int len) find a lowest num in an array.
- int temp_array(int *array, int len) find a temprate of an array.
- int round_area(int r) calculate a area using PI * r.
- int minimize(int num) minimizing a num.
- int maximize(int num) maximizing a num.
- int *closeimize(int *array, int len) make an array close together, returns it(not use temprate!).
- int array_temp_left(int *array, int len) temprating an array and find the index in left.
- int array_temp_right(int *array, int len) temprating an array and find the index in right.
- int array_temp_middle(int *array, int len) temprating an array and find the index.
## Update logs
### 1.0.0.0
+ the first version
### 1.0.1.0
+ added min_array(), max_array()
+ added test.cpp
+ updated README.md
### 1.0.1.1
+ fixed bugs
### 1.0.2.0
+ added round_area(), more_regular_area()
+ updated README.md
### 1.0.2.1
+ deleted more_regular_area() which have bugs
+ updated README.md
### 1.0.3.0
+ added temp_array(), minimize(), maximize(), closeimize()
+ updated README.md
### 1.0.3.1
+ fixed bugs
+ updated README.md
### 1.1.1.0
+ updated how to count version, x.x.x as x.x.x.x
### 1.1.2.0
+ added array_temp_left(), array_temp_right(), array_temp_middle()
+ updated README.md
