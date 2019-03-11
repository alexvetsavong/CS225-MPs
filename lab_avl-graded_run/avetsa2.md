


## Score: 10/50 (20.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c coloredout.cpp -o .objs/coloredout.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/coloredout.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [10/10] - test_find

- **Points**: 10 / 10

```
==13938== Memcheck, a memory error detector
==13938== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13938== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==13938== Command: ./test -r xml "test_find"
==13938== 
==13938== 
==13938== HEAP SUMMARY:
==13938==     in use at exit: 0 bytes in 0 blocks
==13938==   total heap usage: 1,664 allocs, 1,664 frees, 216,472 bytes allocated
==13938== 
==13938== All heap blocks were freed -- no leaks are possible
==13938== 
==13938== For counts of detected and suppressed errors, rerun with: -v
==13938== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_find" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="30">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="5" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="5" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - test_insert_small

- **Points**: 0 / 5


```
Original: solnFuncCalls == funcCalls
Expanded: { "rotateLeft" } == {  }
```


### ✗ - [0/10] - test_insert_find

- **Points**: 0 / 10


```
Original: solnFuncCalls == funcCalls
Expanded: { "rotateLeftRight", "rotateLeft", "rotateRight" }
==
{  }
```


### ✗ - [0/10] - test_insert_big

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_insert_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="76">
      <Expression success="false" type="REQUIRE" filename="tests/tests.cpp" line="25">
        <Original>
          solnFuncCalls == funcCalls
        </Original>
        <Expanded>
          { "rotateRight", "rotateRightLeft", "rotateRight", "rotateLeft", "rotateLeft", "rotateLeft", "rotateLeft", "rotateLeft" }
==
{  }
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - test_remove_small

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/10] - test_remove_big

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_remove_big" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="120">
      <FatalErrorCondition filename="tests/tests.cpp" line="120">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **avetsa2** using **bfe03f9db594755a23d65674357ffa3c268ea63f** (from **March 11th 2019, 12:15:00 am**)
