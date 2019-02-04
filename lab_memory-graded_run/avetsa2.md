


## Score: 90/100 (90.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c letter.cpp -o .objs/letter.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c room.cpp -o .objs/room.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c allocator.cpp -o .objs/allocator.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c fileio.cpp -o .objs/fileio.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/letter.o .objs/room.o .objs/allocator.o .objs/fileio.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✗ - [0/5] - Test the constructor (valgrind)

- **Points**: 0 / 5

```
==18876== Memcheck, a memory error detector
==18876== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18876== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18876== Command: ./test -r xml "Test\ the\ constructor\ (valgrind)"
==18876== 
==18876== 
==18876== HEAP SUMMARY:
==18876==     in use at exit: 2,592 bytes in 11 blocks
==18876==   total heap usage: 2,492 allocs, 2,481 frees, 278,680 bytes allocated
==18876== 
==18876== 208 bytes in 1 blocks are definitely lost in loss record 1 of 3
==18876==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==18876==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==18876==    by 0x40A175: Allocator::createLetterGroups() (allocator.cpp:24)
==18876==    by 0x40A123: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:16)
==18876==    by 0x44C25E: ____C_A_T_C_H____T_E_S_T____0() (tests.cpp:13)
==18876==    by 0x4812E2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==18876==    by 0x472456: Catch::TestCase::invoke() const (catch.hpp:10793)
==18876==    by 0x472388: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==18876==    by 0x46EFD6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==18876==    by 0x46D647: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==18876==    by 0x476281: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==18876==    by 0x474F1F: Catch::Session::runInternal() (catch.hpp:10149)
==18876== 
==18876== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 3 of 3
==18876==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==18876==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==18876==    by 0x40A486: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:48)
==18876==    by 0x40A13D: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==18876==    by 0x44C25E: ____C_A_T_C_H____T_E_S_T____0() (tests.cpp:13)
==18876==    by 0x4812E2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==18876==    by 0x472456: Catch::TestCase::invoke() const (catch.hpp:10793)
==18876==    by 0x472388: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==18876==    by 0x46EFD6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==18876==    by 0x46D647: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==18876==    by 0x476281: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==18876==    by 0x474F1F: Catch::Session::runInternal() (catch.hpp:10149)
==18876== 
==18876== LEAK SUMMARY:
==18876==    definitely lost: 720 bytes in 2 blocks
==18876==    indirectly lost: 1,872 bytes in 9 blocks
==18876==      possibly lost: 0 bytes in 0 blocks
==18876==    still reachable: 0 bytes in 0 blocks
==18876==         suppressed: 0 bytes in 0 blocks
==18876== 
==18876== For counts of detected and suppressed errors, rerun with: -v
==18876== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test the constructor (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="10">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - Test allocate() (valgrind)

- **Points**: 0 / 5

```
==18879== Memcheck, a memory error detector
==18879== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18879== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18879== Command: ./test -r xml "Test\ allocate()\ (valgrind)"
==18879== 
==18879== 
==18879== HEAP SUMMARY:
==18879==     in use at exit: 2,384 bytes in 10 blocks
==18879==   total heap usage: 2,492 allocs, 2,482 frees, 276,488 bytes allocated
==18879== 
==18879== 2,384 (512 direct, 1,872 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 2
==18879==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==18879==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==18879==    by 0x40A486: Allocator::loadRooms(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:48)
==18879==    by 0x40A13D: Allocator::Allocator(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const&) (allocator.cpp:18)
==18879==    by 0x44C3BE: ____C_A_T_C_H____T_E_S_T____2() (tests.cpp:20)
==18879==    by 0x4812E2: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==18879==    by 0x472456: Catch::TestCase::invoke() const (catch.hpp:10793)
==18879==    by 0x472388: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==18879==    by 0x46EFD6: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==18879==    by 0x46D647: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==18879==    by 0x476281: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==18879==    by 0x474F1F: Catch::Session::runInternal() (catch.hpp:10149)
==18879== 
==18879== LEAK SUMMARY:
==18879==    definitely lost: 512 bytes in 1 blocks
==18879==    indirectly lost: 1,872 bytes in 9 blocks
==18879==      possibly lost: 0 bytes in 0 blocks
==18879==    still reachable: 0 bytes in 0 blocks
==18879==         suppressed: 0 bytes in 0 blocks
==18879== 
==18879== For counts of detected and suppressed errors, rerun with: -v
==18879== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test allocate() (valgrind)" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="17">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [20/20] - Test printRooms() (valgrind)

- **Points**: 20 / 20

```
==18881== Memcheck, a memory error detector
==18881== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==18881== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==18881== Command: ./test -r xml "Test\ printRooms()\ (valgrind)"
==18881== 
==18881== 
==18881== HEAP SUMMARY:
==18881==     in use at exit: 0 bytes in 0 blocks
==18881==   total heap usage: 2,496 allocs, 2,496 frees, 277,208 bytes allocated
==18881== 
==18881== All heap blocks were freed -- no leaks are possible
==18881== 
==18881== For counts of detected and suppressed errors, rerun with: -v
==18881== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="Test printRooms() (valgrind)" tags="[valgrind][weight=20]" filename="tests/tests.cpp" line="25">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="0" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [30/30] - Test printRooms() for overall output

- **Points**: 30 / 30





### ✓ - [40/40] - Test printRooms() for individual output

- **Points**: 40 / 40





---

This report was generated for **avetsa2** using **29eb8b1e11b37326d5353f70163e82515557f1b1** (from **February 4th 2019, 12:15:00 am**)
