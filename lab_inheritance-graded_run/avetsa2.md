


## Score: 80/90 (88.89%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor circle.cpp -o .objs/circle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor flower.cpp -o .objs/flower.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor line.cpp -o .objs/line.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor rectangle.cpp -o .objs/rectangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor shape.cpp -o .objs/shape.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor triangle.cpp -o .objs/triangle.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor truck.cpp -o .objs/truck.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor vector2.cpp -o .objs/vector2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c -Wno-delete-non-virtual-dtor cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/circle.o .objs/flower.o .objs/line.o .objs/rectangle.o .objs/shape.o .objs/triangle.o .objs/truck.o .objs/vector2.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [10/10] - test_virtual_perim

- **Points**: 10 / 10





### ✓ - [10/10] - test_virtual_area

- **Points**: 10 / 10





### ✓ - [20/20] - test_destructor

- **Points**: 20 / 20

```
==10625== Memcheck, a memory error detector
==10625== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10625== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10625== Command: ./test -r xml "test_destructor"
==10625== 
==10625== 
==10625== HEAP SUMMARY:
==10625==     in use at exit: 0 bytes in 0 blocks
==10625==   total heap usage: 1,667 allocs, 1,667 frees, 216,576 bytes allocated
==10625== 
==10625== All heap blocks were freed -- no leaks are possible
==10625== 
==10625== For counts of detected and suppressed errors, rerun with: -v
==10625== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_destructor" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="92">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - test_constructor

- **Points**: 20 / 20





### ✗ - [0/10] - test_pure_virtual

- **Points**: 0 / 10

```
==10633== Memcheck, a memory error detector
==10633== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10633== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10633== Command: ./test -r xml "test_pure_virtual"
==10633== 
==10633== 
==10633== HEAP SUMMARY:
==10633==     in use at exit: 616 bytes in 10 blocks
==10633==   total heap usage: 1,728 allocs, 1,718 frees, 1,757,183 bytes allocated
==10633== 
==10633== 64 bytes in 1 blocks are definitely lost in loss record 6 of 10
==10633==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==10633==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==10633==    by 0x40D1B0: Truck::Truck(Vector2 const&) (truck.cpp:50)
==10633==    by 0x430381: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==10633==    by 0x4663D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==10633==    by 0x457546: Catch::TestCase::invoke() const (catch.hpp:10793)
==10633==    by 0x457478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==10633==    by 0x4540C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==10633==    by 0x452737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==10633==    by 0x45B371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==10633==    by 0x45A00F: Catch::Session::runInternal() (catch.hpp:10149)
==10633==    by 0x459CCE: Catch::Session::run() (catch.hpp:10106)
==10633== 
==10633== 64 bytes in 1 blocks are definitely lost in loss record 7 of 10
==10633==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==10633==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==10633==    by 0x40D29A: Truck::Truck(Vector2 const&) (truck.cpp:50)
==10633==    by 0x430381: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==10633==    by 0x4663D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==10633==    by 0x457546: Catch::TestCase::invoke() const (catch.hpp:10793)
==10633==    by 0x457478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==10633==    by 0x4540C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==10633==    by 0x452737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==10633==    by 0x45B371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==10633==    by 0x45A00F: Catch::Session::runInternal() (catch.hpp:10149)
==10633==    by 0x459CCE: Catch::Session::run() (catch.hpp:10106)
==10633== 
==10633== 64 bytes in 1 blocks are definitely lost in loss record 8 of 10
==10633==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==10633==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==10633==    by 0x40D39C: Truck::Truck(Vector2 const&) (truck.cpp:50)
==10633==    by 0x430381: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==10633==    by 0x4663D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==10633==    by 0x457546: Catch::TestCase::invoke() const (catch.hpp:10793)
==10633==    by 0x457478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==10633==    by 0x4540C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==10633==    by 0x452737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==10633==    by 0x45B371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==10633==    by 0x45A00F: Catch::Session::runInternal() (catch.hpp:10149)
==10633==    by 0x459CCE: Catch::Session::run() (catch.hpp:10106)
==10633== 
==10633== 64 bytes in 1 blocks are definitely lost in loss record 9 of 10
==10633==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==10633==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==10633==    by 0x40D4DF: Truck::Truck(Vector2 const&) (truck.cpp:50)
==10633==    by 0x430381: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==10633==    by 0x4663D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==10633==    by 0x457546: Catch::TestCase::invoke() const (catch.hpp:10793)
==10633==    by 0x457478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==10633==    by 0x4540C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==10633==    by 0x452737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==10633==    by 0x45B371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==10633==    by 0x45A00F: Catch::Session::runInternal() (catch.hpp:10149)
==10633==    by 0x459CCE: Catch::Session::run() (catch.hpp:10106)
==10633== 
==10633== 360 (40 direct, 320 indirect) bytes in 1 blocks are definitely lost in loss record 10 of 10
==10633==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==10633==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==10633==    by 0x40D175: Truck::Truck(Vector2 const&) (truck.cpp:50)
==10633==    by 0x430381: ____C_A_T_C_H____T_E_S_T____8() (tests.cpp:115)
==10633==    by 0x4663D2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==10633==    by 0x457546: Catch::TestCase::invoke() const (catch.hpp:10793)
==10633==    by 0x457478: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==10633==    by 0x4540C6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==10633==    by 0x452737: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==10633==    by 0x45B371: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==10633==    by 0x45A00F: Catch::Session::runInternal() (catch.hpp:10149)
==10633==    by 0x459CCE: Catch::Session::run() (catch.hpp:10106)
==10633== 
==10633== LEAK SUMMARY:
==10633==    definitely lost: 296 bytes in 5 blocks
==10633==    indirectly lost: 320 bytes in 5 blocks
==10633==      possibly lost: 0 bytes in 0 blocks
==10633==    still reachable: 0 bytes in 0 blocks
==10633==         suppressed: 0 bytes in 0 blocks
==10633== 
==10633== For counts of detected and suppressed errors, rerun with: -v
==10633== ERROR SUMMARY: 5 errors from 5 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_pure_virtual" tags="[valgrind][weight=10]" filename="tests/tests.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - test_slicing

- **Points**: 20 / 20

```
==10676== Memcheck, a memory error detector
==10676== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10676== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10676== Command: ./test -r xml "test_slicing"
==10676== 
==10676== 
==10676== HEAP SUMMARY:
==10676==     in use at exit: 0 bytes in 0 blocks
==10676==   total heap usage: 1,794 allocs, 1,794 frees, 1,759,556 bytes allocated
==10676== 
==10676== All heap blocks were freed -- no leaks are possible
==10676== 
==10676== For counts of detected and suppressed errors, rerun with: -v
==10676== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_slicing" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="125">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **avetsa2** using **e430677d32142c9adb8b59eb6b925e9606a4868f** (from **February 11th 2019, 12:15:00 am**)
