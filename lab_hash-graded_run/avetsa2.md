


## Score: 32/150 (21.33%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c hashes.cpp -o .objs/hashes.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c textfile.cpp -o .objs/textfile.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests-dh.cpp -o .objs/tests/tests-dh.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests-sc.cpp -o .objs/tests/tests-sc.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests-lp.cpp -o .objs/tests/tests-lp.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/hashes.o .objs/textfile.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests-dh.o .objs/tests/tests-sc.o .objs/tests/tests-lp.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✗ - [0/6] - DH::testRemoveEASY

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="12">
      <Failure filename="tests/tests-dh.cpp" line="22">
        Insert did not work
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - DH::testRemoveHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="33">
      <Failure filename="tests/tests-dh.cpp" line="50">
        Insert did not work
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/7] - DH::testResizeOnce

- **Points**: 0 / 7


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-dh.cpp" line="61">
      <Expression success="false" type="REQUIRE" filename="tests/tests-dh.cpp" line="73">
        <Original>
          hashTable.tableSize() >= val / 0.7
        </Original>
        <Expanded>
          17 >= 122.8571428571
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/11] - DH::testResizeAll

- **Points**: 0 / 11


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-dh.cpp" line="82">
      <Expression success="false" type="REQUIRE" filename="tests/tests-dh.cpp" line="97">
        <Original>
          hashTable.tableSize() >= strings.size() / 0.7
        </Original>
        <Expanded>
          17 >= 37.1428571429
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/6] - DH::testInsertEasy

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-dh.cpp" line="108">
      <Failure filename="tests/tests-dh.cpp" line="119">
        Did not insert key: 'all'
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - DH::testInsertHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="DH::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-dh.cpp" line="128">
      <Failure filename="tests/tests-dh.cpp" line="140">
        Did not insert properly key: 'has'
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testRemoveEASY

- **Points**: 6 / 6

```
==30413== Memcheck, a memory error detector
==30413== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30413== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30413== Command: ./test -r xml "SC::testRemoveEASY"
==30413== 
==30413== 
==30413== HEAP SUMMARY:
==30413==     in use at exit: 0 bytes in 0 blocks
==30413==   total heap usage: 1,855 allocs, 1,855 frees, 241,392 bytes allocated
==30413== 
==30413== All heap blocks were freed -- no leaks are possible
==30413== 
==30413== For counts of detected and suppressed errors, rerun with: -v
==30413== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="12">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testRemoveHard

- **Points**: 10 / 10

```
==30416== Memcheck, a memory error detector
==30416== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30416== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30416== Command: ./test -r xml "SC::testRemoveHard"
==30416== 
==30416== 
==30416== HEAP SUMMARY:
==30416==     in use at exit: 0 bytes in 0 blocks
==30416==   total heap usage: 1,877 allocs, 1,877 frees, 242,272 bytes allocated
==30416== 
==30416== All heap blocks were freed -- no leaks are possible
==30416== 
==30416== For counts of detected and suppressed errors, rerun with: -v
==30416== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="33">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/7] - SC::testResizeOnce

- **Points**: 0 / 7

```
==30418== Memcheck, a memory error detector
==30418== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30418== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30418== Command: ./test -r xml "SC::testResizeOnce"
==30418== 
==30418== 
==30418== HEAP SUMMARY:
==30418==     in use at exit: 3,088 bytes in 39 blocks
==30418==   total heap usage: 2,009 allocs, 1,970 frees, 249,760 bytes allocated
==30418== 
==30418== 992 (416 direct, 576 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 4
==30418==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==30418==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==30418==    by 0x43AF25: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::SCHashTable(unsigned long) (schashtable.cpp:14)
==30418==    by 0x437BEB: ____C_A_T_C_H____T_E_S_T____4() (tests-sc.cpp:64)
==30418==    by 0x4750C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==30418==    by 0x466236: Catch::TestCase::invoke() const (catch.hpp:10793)
==30418==    by 0x466168: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==30418==    by 0x462DB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==30418==    by 0x461427: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==30418==    by 0x46A061: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==30418==    by 0x468CFF: Catch::Session::runInternal() (catch.hpp:10149)
==30418==    by 0x4689BE: Catch::Session::run() (catch.hpp:10106)
==30418== 
==30418== 2,096 (896 direct, 1,200 indirect) bytes in 1 blocks are definitely lost in loss record 4 of 4
==30418==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==30418==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==30418==    by 0x43D932: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (schashtable.cpp:166)
==30418==    by 0x43C198: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:63)
==30418==    by 0x437C95: ____C_A_T_C_H____T_E_S_T____4() (tests-sc.cpp:70)
==30418==    by 0x4750C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==30418==    by 0x466236: Catch::TestCase::invoke() const (catch.hpp:10793)
==30418==    by 0x466168: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==30418==    by 0x462DB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==30418==    by 0x461427: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==30418==    by 0x46A061: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==30418==    by 0x468CFF: Catch::Session::runInternal() (catch.hpp:10149)
==30418== 
==30418== LEAK SUMMARY:
==30418==    definitely lost: 1,312 bytes in 2 blocks
==30418==    indirectly lost: 1,776 bytes in 37 blocks
==30418==      possibly lost: 0 bytes in 0 blocks
==30418==    still reachable: 0 bytes in 0 blocks
==30418==         suppressed: 0 bytes in 0 blocks
==30418== 
==30418== For counts of detected and suppressed errors, rerun with: -v
==30418== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-sc.cpp" line="61">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/11] - SC::testResizeAll

- **Points**: 0 / 11

```
==30420== Memcheck, a memory error detector
==30420== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30420== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30420== Command: ./test -r xml "SC::testResizeAll"
==30420== 
==30420== 
==30420== HEAP SUMMARY:
==30420==     in use at exit: 3,040 bytes in 38 blocks
==30420==   total heap usage: 1,908 allocs, 1,870 frees, 242,944 bytes allocated
==30420== 
==30420== 944 (416 direct, 528 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 4
==30420==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==30420==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==30420==    by 0x43AF25: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::SCHashTable(unsigned long) (schashtable.cpp:14)
==30420==    by 0x438B43: ____C_A_T_C_H____T_E_S_T____6() (tests-sc.cpp:91)
==30420==    by 0x4750C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==30420==    by 0x466236: Catch::TestCase::invoke() const (catch.hpp:10793)
==30420==    by 0x466168: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==30420==    by 0x462DB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==30420==    by 0x461427: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==30420==    by 0x46A061: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==30420==    by 0x468CFF: Catch::Session::runInternal() (catch.hpp:10149)
==30420==    by 0x4689BE: Catch::Session::run() (catch.hpp:10106)
==30420== 
==30420== 2,096 (896 direct, 1,200 indirect) bytes in 1 blocks are definitely lost in loss record 4 of 4
==30420==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==30420==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==30420==    by 0x43D932: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::resizeTable() (schashtable.cpp:166)
==30420==    by 0x43C198: SCHashTable<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, int>::insert(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, int const&) (schashtable.cpp:63)
==30420==    by 0x438C05: ____C_A_T_C_H____T_E_S_T____6() (tests-sc.cpp:95)
==30420==    by 0x4750C2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==30420==    by 0x466236: Catch::TestCase::invoke() const (catch.hpp:10793)
==30420==    by 0x466168: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==30420==    by 0x462DB6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==30420==    by 0x461427: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==30420==    by 0x46A061: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==30420==    by 0x468CFF: Catch::Session::runInternal() (catch.hpp:10149)
==30420== 
==30420== LEAK SUMMARY:
==30420==    definitely lost: 1,312 bytes in 2 blocks
==30420==    indirectly lost: 1,728 bytes in 36 blocks
==30420==      possibly lost: 0 bytes in 0 blocks
==30420==    still reachable: 0 bytes in 0 blocks
==30420==         suppressed: 0 bytes in 0 blocks
==30420== 
==30420== For counts of detected and suppressed errors, rerun with: -v
==30420== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-sc.cpp" line="82">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [6/6] - SC::testInsertEasy

- **Points**: 6 / 6

```
==30451== Memcheck, a memory error detector
==30451== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30451== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30451== Command: ./test -r xml "SC::testInsertEasy"
==30451== 
==30451== 
==30451== HEAP SUMMARY:
==30451==     in use at exit: 0 bytes in 0 blocks
==30451==   total heap usage: 1,854 allocs, 1,854 frees, 241,344 bytes allocated
==30451== 
==30451== All heap blocks were freed -- no leaks are possible
==30451== 
==30451== For counts of detected and suppressed errors, rerun with: -v
==30451== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-sc.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [10/10] - SC::testInsertHard

- **Points**: 10 / 10

```
==30515== Memcheck, a memory error detector
==30515== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==30515== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==30515== Command: ./test -r xml "SC::testInsertHard"
==30515== 
==30515== 
==30515== HEAP SUMMARY:
==30515==     in use at exit: 0 bytes in 0 blocks
==30515==   total heap usage: 1,876 allocs, 1,876 frees, 242,224 bytes allocated
==30515== 
==30515== All heap blocks were freed -- no leaks are possible
==30515== 
==30515== For counts of detected and suppressed errors, rerun with: -v
==30515== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="SC::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-sc.cpp" line="128">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/6] - LP::testRemoveEASY

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveEASY" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="12">
      <Failure filename="tests/tests-lp.cpp" line="22">
        Insert did not work
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - LP::testRemoveHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testRemoveHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="34">
      <Failure filename="tests/tests-lp.cpp" line="51">
        Insert did not work
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/7] - LP::testResizeOnce

- **Points**: 0 / 7


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeOnce" tags="[valgrind][weight=7]" filename="tests/tests-lp.cpp" line="62">
      <Expression success="false" type="REQUIRE" filename="tests/tests-lp.cpp" line="74">
        <Original>
          hashTable.tableSize() >= val / 0.7
        </Original>
        <Expanded>
          17 >= 122.8571428571
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/11] - LP::testResizeAll

- **Points**: 0 / 11


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testResizeAll" tags="[valgrind][weight=11]" filename="tests/tests-lp.cpp" line="83">
      <Expression success="false" type="REQUIRE" filename="tests/tests-lp.cpp" line="98">
        <Original>
          hashTable.tableSize() >= strings.size() / 0.7
        </Original>
        <Expanded>
          17 >= 37.1428571429
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/6] - LP::testInsertEasy

- **Points**: 0 / 6


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertEasy" tags="[valgrind][weight=6]" filename="tests/tests-lp.cpp" line="110">
      <Failure filename="tests/tests-lp.cpp" line="121">
        Did not insert key: 'all'
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/10] - LP::testInsertHard

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="LP::testInsertHard" tags="[valgrind][weight=10]" filename="tests/tests-lp.cpp" line="130">
      <Failure filename="tests/tests-lp.cpp" line="142">
        Did not insert properly key: 'has'
      </Failure>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **avetsa2** using **e952e4584fcffd429b14b8207398ecd0faf13315** (from **April 1st 2019, 12:15:00 am**)
