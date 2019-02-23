


## Score: 3/57 (5.26%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✗ - [0/1] - List::insertFront size

- **Points**: 0 / 1

```
==27511== Memcheck, a memory error detector
==27511== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27511== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27511== Command: ./test -r xml "List::insertFront\ size"
==27511== 
==27511== Conditional jump or move depends on uninitialised value(s)
==27511==    at 0x42CA4F: List<int>::insertFront(int const&) (List.hpp:55)
==27511==    by 0x42610A: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==27511==    by 0x468442: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27511==    by 0x4595B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==27511==    by 0x4594E8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27511==    by 0x456136: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27511==    by 0x4547A7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27511==    by 0x45D3E1: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27511==    by 0x45C07F: Catch::Session::runInternal() (catch.hpp:10149)
==27511==    by 0x45BD3E: Catch::Session::run() (catch.hpp:10106)
==27511==    by 0x45BCBC: Catch::Session::run(int, char**) (catch.hpp:10074)
==27511==    by 0x487301: main (catch.hpp:13613)
==27511== 
==27511== Conditional jump or move depends on uninitialised value(s)
==27511==    at 0x42CA96: List<int>::insertFront(int const&) (List.hpp:58)
==27511==    by 0x42610A: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==27511==    by 0x468442: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27511==    by 0x4595B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==27511==    by 0x4594E8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27511==    by 0x456136: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27511==    by 0x4547A7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27511==    by 0x45D3E1: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27511==    by 0x45C07F: Catch::Session::runInternal() (catch.hpp:10149)
==27511==    by 0x45BD3E: Catch::Session::run() (catch.hpp:10106)
==27511==    by 0x45BCBC: Catch::Session::run(int, char**) (catch.hpp:10074)
==27511==    by 0x487301: main (catch.hpp:13613)
==27511== 
==27511== Conditional jump or move depends on uninitialised value(s)
==27511==    at 0x459660: Catch::RunContext::handleExpr(Catch::AssertionInfo const&, Catch::ITransientExpression const&, Catch::AssertionReaction&) (catch.hpp:9683)
==27511==    by 0x438B9E: Catch::AssertionHandler::handleExpr(Catch::ITransientExpression const&) (catch.hpp:5467)
==27511==    by 0x426269: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:25)
==27511==    by 0x468442: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27511==    by 0x4595B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==27511==    by 0x4594E8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27511==    by 0x456136: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27511==    by 0x4547A7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27511==    by 0x45D3E1: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27511==    by 0x45C07F: Catch::Session::runInternal() (catch.hpp:10149)
==27511==    by 0x45BD3E: Catch::Session::run() (catch.hpp:10106)
==27511==    by 0x45BCBC: Catch::Session::run(int, char**) (catch.hpp:10074)
==27511== 
==27511== 
==27511== HEAP SUMMARY:
==27511==     in use at exit: 240 bytes in 10 blocks
==27511==   total heap usage: 2,113 allocs, 2,103 frees, 251,496 bytes allocated
==27511== 
==27511== 240 bytes in 10 blocks are definitely lost in loss record 1 of 1
==27511==    at 0x4C29BC3: malloc (vg_replace_malloc.c:299)
==27511==    by 0x4ED2D29: operator new(unsigned long) (in /class/cs225/lm35/lib/libc++.so.1.0)
==27511==    by 0x42CA03: List<int>::insertFront(int const&) (List.hpp:51)
==27511==    by 0x42610A: ____C_A_T_C_H____T_E_S_T____0() (tests_part1.cpp:23)
==27511==    by 0x468442: Catch::TestInvokerAsFunction::invoke() const (catch.hpp:10892)
==27511==    by 0x4595B6: Catch::TestCase::invoke() const (catch.hpp:10793)
==27511==    by 0x4594E8: Catch::RunContext::invokeActiveTestCase() (catch.hpp:9658)
==27511==    by 0x456136: Catch::RunContext::runCurrentTest(std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >&) (catch.hpp:9622)
==27511==    by 0x4547A7: Catch::RunContext::runTest(Catch::TestCase const&) (catch.hpp:9408)
==27511==    by 0x45D3E1: Catch::(anonymous namespace)::runTests(std::__1::shared_ptr<Catch::Config> const&) (catch.hpp:9948)
==27511==    by 0x45C07F: Catch::Session::runInternal() (catch.hpp:10149)
==27511==    by 0x45BD3E: Catch::Session::run() (catch.hpp:10106)
==27511== 
==27511== LEAK SUMMARY:
==27511==    definitely lost: 240 bytes in 10 blocks
==27511==    indirectly lost: 0 bytes in 0 blocks
==27511==      possibly lost: 0 bytes in 0 blocks
==27511==    still reachable: 0 bytes in 0 blocks
==27511==         suppressed: 0 bytes in 0 blocks
==27511== 
==27511== For counts of detected and suppressed errors, rerun with: -v
==27511== Use --track-origins=yes to see where uninitialised values come from
==27511== ERROR SUMMARY: 13 errors from 4 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertFront size" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="20">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::insertBack size

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="33">
        <Original>
          10 == list.size()
        </Original>
        <Expanded>
          10 == 0
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="49">
        <Original>
          "&lt; 1 2 3 3 2 1 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 2 3 3 2 1 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/15] - List::waterfall

- **Points**: 0 / 15


```
Original: expected == out
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=0)
```


### ✗ - [0/5] - List::split simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="82">
        <Original>
          "&lt; 1 2 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split images

- **Points**: 0 / 5


```
Original: out1 == expected_1
Expanded: PNG(w=400, h=240, hash=0)
==
PNG(w=400, h=240, hash=7f399ca10baeec7f)
```


### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==27525== Memcheck, a memory error detector
==27525== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27525== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27525== Command: ./test -r xml "List::_destroy\ empty\ list"
==27525== 
==27525== 
==27525== HEAP SUMMARY:
==27525==     in use at exit: 0 bytes in 0 blocks
==27525==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==27525== 
==27525== All heap blocks were freed -- no leaks are possible
==27525== 
==27525== For counts of detected and suppressed errors, rerun with: -v
==27525== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::_destroy empty list" tags="[part=1][valgrind][weight=3]" filename="tests/tests_part1.cpp" line="145">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::begin() returns an iterator to the front of the list

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="156">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="164">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="173">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="183">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="193">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="205">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is reached

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <FatalErrorCondition filename="tests/tests_part1.cpp" line="218">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 0 / 1


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1.cpp" line="238">
        <Original>
          (bool)(list.begin() != list.end())
        </Original>
        <Expanded>
          false
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::insert contents #2

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1_extra.cpp" line="27">
        <Original>
          "&lt; 1 2 3 1 2 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 2 3 1 2 3 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1_extra.cpp" line="45">
        <Original>
          4 == slist.size()
        </Original>
        <Expanded>
          4 == 0
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::waterfall simple

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <Expression success="false" type="REQUIRE" filename="tests/tests_part1_extra.cpp" line="62">
        <Original>
          "&lt; 1 3 5 7 2 6 4 8 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 1 3 5 7 2 6 4 8 >" == "&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **avetsa2** using **a1d89f4afa2a36cf320efca29d3c9dd8b30cb888** (from **February 23rd 2019, 12:05:00 am**)
