


## Score: 54/114 (47.37%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part2.cpp -o .objs/tests/tests_part2.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1.cpp -o .objs/tests/tests_part1.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/test_part2_extra.cpp -o .objs/tests/test_part2_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests_part1_extra.cpp -o .objs/tests/tests_part1_extra.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests_part2.o .objs/tests/tests_part1.o .objs/tests/test_part2_extra.o .objs/tests/tests_part1_extra.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✗ - [0/5] - List::reverse

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #1

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Original: out == expected
Expanded: PNG(w=900, h=600, hash=3fa66744920ffb90)
==
PNG(w=900, h=600, hash=3fa66744920ffb90)
```


### ✗ - [0/10] - List::merge

- **Points**: 0 / 10


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <Info>
        Output image `out` saved as actual-merge.png
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/tests_part2.cpp" line="90">
        <Original>
          out == expected
        </Original>
        <Expanded>
          PNG(w=600, h=400, hash=0)
==
PNG(w=600, h=400, hash=0)
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="1" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #1

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="93">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #2

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <FatalErrorCondition filename="tests/tests_part2.cpp" line="108">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::sort #1

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✗ - [0/5] - List::sort #2

- **Points**: 0 / 5


```
Fatal Error: SIGSEGV - Segmentation violation signal
```


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==7663== Memcheck, a memory error detector
==7663== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7663== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7663== Command: ./test -r xml "List::insertFront\ size"
==7663== 
==7663== 
==7663== HEAP SUMMARY:
==7663==     in use at exit: 0 bytes in 0 blocks
==7663==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==7663== 
==7663== All heap blocks were freed -- no leaks are possible
==7663== 
==7663== For counts of detected and suppressed errors, rerun with: -v
==7663== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [2/2] - List::insertBack size

- **Points**: 2 / 2

```
==7681== Memcheck, a memory error detector
==7681== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7681== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7681== Command: ./test -r xml "List::insertBack\ size"
==7681== 
==7681== 
==7681== HEAP SUMMARY:
==7681==     in use at exit: 0 bytes in 0 blocks
==7681==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==7681== 
==7681== All heap blocks were freed -- no leaks are possible
==7681== 
==7681== For counts of detected and suppressed errors, rerun with: -v
==7681== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insertBack size" tags="[part=1][valgrind][weight=2]" filename="tests/tests_part1.cpp" line="28">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents

- **Points**: 4 / 4

```
==7685== Memcheck, a memory error detector
==7685== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7685== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7685== Command: ./test -r xml "List::insert\ contents"
==7685== 
==7685== 
==7685== HEAP SUMMARY:
==7685==     in use at exit: 0 bytes in 0 blocks
==7685==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==7685== 
==7685== All heap blocks were freed -- no leaks are possible
==7685== 
==7685== For counts of detected and suppressed errors, rerun with: -v
==7685== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1.cpp" line="36">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [15/15] - List::waterfall

- **Points**: 15 / 15





### ✓ - [5/5] - List::split simple

- **Points**: 5 / 5

```
==7710== Memcheck, a memory error detector
==7710== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7710== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7710== Command: ./test -r xml "List::split\ simple"
==7710== 
==7710== 
==7710== HEAP SUMMARY:
==7710==     in use at exit: 0 bytes in 0 blocks
==7710==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==7710== 
==7710== All heap blocks were freed -- no leaks are possible
==7710== 
==7710== For counts of detected and suppressed errors, rerun with: -v
==7710== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1.cpp" line="68">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::split images

- **Points**: 5 / 5





### ✓ - [3/3] - List::_destroy empty list

- **Points**: 3 / 3

```
==7742== Memcheck, a memory error detector
==7742== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7742== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7742== Command: ./test -r xml "List::_destroy\ empty\ list"
==7742== 
==7742== 
==7742== HEAP SUMMARY:
==7742==     in use at exit: 0 bytes in 0 blocks
==7742==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==7742== 
==7742== All heap blocks were freed -- no leaks are possible
==7742== 
==7742== For counts of detected and suppressed errors, rerun with: -v
==7742== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [1/1] - List::begin() returns an iterator to the front of the list

- **Points**: 1 / 1

```
==7762== Memcheck, a memory error detector
==7762== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7762== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7762== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==7762== 
==7762== 
==7762== HEAP SUMMARY:
==7762==     in use at exit: 0 bytes in 0 blocks
==7762==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==7762== 
==7762== All heap blocks were freed -- no leaks are possible
==7762== 
==7762== For counts of detected and suppressed errors, rerun with: -v
==7762== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::begin() returns an iterator to the front of the list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="156">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (pre-increment)

- **Points**: 1 / 1

```
==7770== Memcheck, a memory error detector
==7770== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7770== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7770== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==7770== 
==7770== 
==7770== HEAP SUMMARY:
==7770==     in use at exit: 0 bytes in 0 blocks
==7770==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==7770== 
==7770== All heap blocks were freed -- no leaks are possible
==7770== 
==7770== For counts of detected and suppressed errors, rerun with: -v
==7770== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (pre-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="164">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ advances the iterator (post-increment)

- **Points**: 1 / 1

```
==7777== Memcheck, a memory error detector
==7777== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7777== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7777== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==7777== 
==7777== 
==7777== HEAP SUMMARY:
==7777==     in use at exit: 0 bytes in 0 blocks
==7777==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==7777== 
==7777== All heap blocks were freed -- no leaks are possible
==7777== 
==7777== For counts of detected and suppressed errors, rerun with: -v
==7777== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ advances the iterator (post-increment)" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="173">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator++ (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==7797== Memcheck, a memory error detector
==7797== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7797== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7797== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==7797== 
==7797== 
==7797== HEAP SUMMARY:
==7797==     in use at exit: 0 bytes in 0 blocks
==7797==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==7797== 
==7797== All heap blocks were freed -- no leaks are possible
==7797== 
==7797== For counts of detected and suppressed errors, rerun with: -v
==7797== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator++ (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="183">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- moves the iterator backwards

- **Points**: 1 / 1

```
==7810== Memcheck, a memory error detector
==7810== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7810== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7810== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==7810== 
==7810== 
==7810== HEAP SUMMARY:
==7810==     in use at exit: 0 bytes in 0 blocks
==7810==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==7810== 
==7810== All heap blocks were freed -- no leaks are possible
==7810== 
==7810== For counts of detected and suppressed errors, rerun with: -v
==7810== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- moves the iterator backwards" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="193">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="4" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="4" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::operator-- (post-increment) returns an un-incremented iterator

- **Points**: 1 / 1

```
==7816== Memcheck, a memory error detector
==7816== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7816== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7816== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==7816== 
==7816== 
==7816== HEAP SUMMARY:
==7816==     in use at exit: 0 bytes in 0 blocks
==7816==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==7816== 
==7816== All heap blocks were freed -- no leaks are possible
==7816== 
==7816== For counts of detected and suppressed errors, rerun with: -v
==7816== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::operator-- (post-increment) returns an un-incremented iterator" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="205">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is reached

- **Points**: 1 / 1

```
==7834== Memcheck, a memory error detector
==7834== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7834== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7834== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==7834== 
==7834== 
==7834== HEAP SUMMARY:
==7834==     in use at exit: 0 bytes in 0 blocks
==7834==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==7834== 
==7834== All heap blocks were freed -- no leaks are possible
==7834== 
==7834== For counts of detected and suppressed errors, rerun with: -v
==7834== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is reached" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="218">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [1/1] - List::ListIterator::end is not ::begin in a non-empty list

- **Points**: 1 / 1

```
==7842== Memcheck, a memory error detector
==7842== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7842== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7842== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==7842== 
==7842== 
==7842== HEAP SUMMARY:
==7842==     in use at exit: 0 bytes in 0 blocks
==7842==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==7842== 
==7842== All heap blocks were freed -- no leaks are possible
==7842== 
==7842== For counts of detected and suppressed errors, rerun with: -v
==7842== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::ListIterator::end is not ::begin in a non-empty list" tags="[part=1][valgrind][weight=1]" filename="tests/tests_part1.cpp" line="232">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/4] - List::reverse simple

- **Points**: 0 / 4


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="28">
        <Original>
          "&lt; 4 12 -1 99 3 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 12 -1 99 3 >" == "&lt; 3 99 -1 12 4 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==7852== Memcheck, a memory error detector
==7852== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7852== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7852== Command: ./test -r xml "List::reverse\ edge\ cases"
==7852== 
==7852== 
==7852== HEAP SUMMARY:
==7852==     in use at exit: 0 bytes in 0 blocks
==7852==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==7852== 
==7852== All heap blocks were freed -- no leaks are possible
==7852== 
==7852== For counts of detected and suppressed errors, rerun with: -v
==7852== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse edge cases" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="31">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::reverseNth #3

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverseNth #3" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="47">
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="59">
        <Original>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >" == s.str()
        </Original>
        <Expanded>
          "&lt; 4 3 2 1 8 7 6 5 10 9 >"
==
"&lt; 1 2 3 4 5 6 7 8 9 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::merge #2

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <Info>
        Does not empty out the parameter list
      </Info>
      <Info>
        Does not empty out the parameter list
      </Info>
      <Expression success="false" type="REQUIRE" filename="tests/test_part2_extra.cpp" line="84">
        <Original>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >" == s1.str()
        </Original>
        <Expanded>
          "&lt; 1 2 10 15 20 30 35 40 45 50 55 65 75 100 200 300 400 500 >"
==
"&lt; >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="2" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="1" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/2] - List::sort simple #3

- **Points**: 0 / 2


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <FatalErrorCondition filename="tests/test_part2_extra.cpp" line="87">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==7874== Memcheck, a memory error detector
==7874== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7874== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7874== Command: ./test -r xml "List::insert\ contents\ #2"
==7874== 
==7874== 
==7874== HEAP SUMMARY:
==7874==     in use at exit: 0 bytes in 0 blocks
==7874==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==7874== 
==7874== All heap blocks were freed -- no leaks are possible
==7874== 
==7874== For counts of detected and suppressed errors, rerun with: -v
==7874== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::insert contents #2" tags="[part=1][valgrind][weight=4]" filename="tests/tests_part1_extra.cpp" line="14">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✗ - [0/5] - List::split edge cases

- **Points**: 0 / 5


```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::split edge cases" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="30">
      <FatalErrorCondition filename="tests/tests_part1_extra.cpp" line="30">
        SIGSEGV - Segmentation violation signal
      </FatalErrorCondition>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::waterfall simple

- **Points**: 5 / 5

```
==7885== Memcheck, a memory error detector
==7885== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7885== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7885== Command: ./test -r xml "List::waterfall\ simple"
==7885== 
==7885== 
==7885== HEAP SUMMARY:
==7885==     in use at exit: 0 bytes in 0 blocks
==7885==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==7885== 
==7885== All heap blocks were freed -- no leaks are possible
==7885== 
==7885== For counts of detected and suppressed errors, rerun with: -v
==7885== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::waterfall simple" tags="[part=1][valgrind][weight=5]" filename="tests/tests_part1_extra.cpp" line="50">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **avetsa2** using **3797fac5b3bf4fc4c60aeb4e4e706e3005adf299** (from **February 25th 2019, 12:05:00 am**)
