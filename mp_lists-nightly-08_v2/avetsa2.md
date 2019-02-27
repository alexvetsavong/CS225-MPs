


## Score: 63/114 (55.26%)


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


### ✓ - [5/5] - List::reverse

- **Points**: 5 / 5





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
==27445== Memcheck, a memory error detector
==27445== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27445== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27445== Command: ./test -r xml "List::insertFront\ size"
==27445== 
==27445== 
==27445== HEAP SUMMARY:
==27445==     in use at exit: 0 bytes in 0 blocks
==27445==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==27445== 
==27445== All heap blocks were freed -- no leaks are possible
==27445== 
==27445== For counts of detected and suppressed errors, rerun with: -v
==27445== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27448== Memcheck, a memory error detector
==27448== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27448== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27448== Command: ./test -r xml "List::insertBack\ size"
==27448== 
==27448== 
==27448== HEAP SUMMARY:
==27448==     in use at exit: 0 bytes in 0 blocks
==27448==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==27448== 
==27448== All heap blocks were freed -- no leaks are possible
==27448== 
==27448== For counts of detected and suppressed errors, rerun with: -v
==27448== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27450== Memcheck, a memory error detector
==27450== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27450== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27450== Command: ./test -r xml "List::insert\ contents"
==27450== 
==27450== 
==27450== HEAP SUMMARY:
==27450==     in use at exit: 0 bytes in 0 blocks
==27450==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==27450== 
==27450== All heap blocks were freed -- no leaks are possible
==27450== 
==27450== For counts of detected and suppressed errors, rerun with: -v
==27450== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27453== Memcheck, a memory error detector
==27453== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27453== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27453== Command: ./test -r xml "List::split\ simple"
==27453== 
==27453== 
==27453== HEAP SUMMARY:
==27453==     in use at exit: 0 bytes in 0 blocks
==27453==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==27453== 
==27453== All heap blocks were freed -- no leaks are possible
==27453== 
==27453== For counts of detected and suppressed errors, rerun with: -v
==27453== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27456== Memcheck, a memory error detector
==27456== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27456== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27456== Command: ./test -r xml "List::_destroy\ empty\ list"
==27456== 
==27456== 
==27456== HEAP SUMMARY:
==27456==     in use at exit: 0 bytes in 0 blocks
==27456==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==27456== 
==27456== All heap blocks were freed -- no leaks are possible
==27456== 
==27456== For counts of detected and suppressed errors, rerun with: -v
==27456== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27458== Memcheck, a memory error detector
==27458== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27458== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27458== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==27458== 
==27458== 
==27458== HEAP SUMMARY:
==27458==     in use at exit: 0 bytes in 0 blocks
==27458==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==27458== 
==27458== All heap blocks were freed -- no leaks are possible
==27458== 
==27458== For counts of detected and suppressed errors, rerun with: -v
==27458== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27460== Memcheck, a memory error detector
==27460== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27460== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27460== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==27460== 
==27460== 
==27460== HEAP SUMMARY:
==27460==     in use at exit: 0 bytes in 0 blocks
==27460==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==27460== 
==27460== All heap blocks were freed -- no leaks are possible
==27460== 
==27460== For counts of detected and suppressed errors, rerun with: -v
==27460== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27463== Memcheck, a memory error detector
==27463== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27463== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27463== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==27463== 
==27463== 
==27463== HEAP SUMMARY:
==27463==     in use at exit: 0 bytes in 0 blocks
==27463==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==27463== 
==27463== All heap blocks were freed -- no leaks are possible
==27463== 
==27463== For counts of detected and suppressed errors, rerun with: -v
==27463== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27465== Memcheck, a memory error detector
==27465== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27465== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27465== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==27465== 
==27465== 
==27465== HEAP SUMMARY:
==27465==     in use at exit: 0 bytes in 0 blocks
==27465==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==27465== 
==27465== All heap blocks were freed -- no leaks are possible
==27465== 
==27465== For counts of detected and suppressed errors, rerun with: -v
==27465== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27470== Memcheck, a memory error detector
==27470== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27470== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27470== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==27470== 
==27470== 
==27470== HEAP SUMMARY:
==27470==     in use at exit: 0 bytes in 0 blocks
==27470==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==27470== 
==27470== All heap blocks were freed -- no leaks are possible
==27470== 
==27470== For counts of detected and suppressed errors, rerun with: -v
==27470== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27472== Memcheck, a memory error detector
==27472== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27472== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27472== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==27472== 
==27472== 
==27472== HEAP SUMMARY:
==27472==     in use at exit: 0 bytes in 0 blocks
==27472==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==27472== 
==27472== All heap blocks were freed -- no leaks are possible
==27472== 
==27472== For counts of detected and suppressed errors, rerun with: -v
==27472== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27474== Memcheck, a memory error detector
==27474== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27474== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27474== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==27474== 
==27474== 
==27474== HEAP SUMMARY:
==27474==     in use at exit: 0 bytes in 0 blocks
==27474==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==27474== 
==27474== All heap blocks were freed -- no leaks are possible
==27474== 
==27474== For counts of detected and suppressed errors, rerun with: -v
==27474== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27476== Memcheck, a memory error detector
==27476== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27476== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27476== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==27476== 
==27476== 
==27476== HEAP SUMMARY:
==27476==     in use at exit: 0 bytes in 0 blocks
==27476==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==27476== 
==27476== All heap blocks were freed -- no leaks are possible
==27476== 
==27476== For counts of detected and suppressed errors, rerun with: -v
==27476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::reverse simple

- **Points**: 4 / 4

```
==27478== Memcheck, a memory error detector
==27478== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27478== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27478== Command: ./test -r xml "List::reverse\ simple"
==27478== 
==27478== 
==27478== HEAP SUMMARY:
==27478==     in use at exit: 0 bytes in 0 blocks
==27478==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==27478== 
==27478== All heap blocks were freed -- no leaks are possible
==27478== 
==27478== For counts of detected and suppressed errors, rerun with: -v
==27478== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::reverse simple" tags="[part=2][valgrind][weight=4]" filename="tests/test_part2_extra.cpp" line="15">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::reverse edge cases

- **Points**: 2 / 2

```
==27492== Memcheck, a memory error detector
==27492== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27492== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27492== Command: ./test -r xml "List::reverse\ edge\ cases"
==27492== 
==27492== 
==27492== HEAP SUMMARY:
==27492==     in use at exit: 0 bytes in 0 blocks
==27492==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==27492== 
==27492== All heap blocks were freed -- no leaks are possible
==27492== 
==27492== For counts of detected and suppressed errors, rerun with: -v
==27492== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
"&lt; 10 20 30 40 50 >"
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
==27558== Memcheck, a memory error detector
==27558== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27558== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27558== Command: ./test -r xml "List::insert\ contents\ #2"
==27558== 
==27558== 
==27558== HEAP SUMMARY:
==27558==     in use at exit: 0 bytes in 0 blocks
==27558==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==27558== 
==27558== All heap blocks were freed -- no leaks are possible
==27558== 
==27558== For counts of detected and suppressed errors, rerun with: -v
==27558== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==27574== Memcheck, a memory error detector
==27574== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==27574== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==27574== Command: ./test -r xml "List::waterfall\ simple"
==27574== 
==27574== 
==27574== HEAP SUMMARY:
==27574==     in use at exit: 0 bytes in 0 blocks
==27574==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==27574== 
==27574== All heap blocks were freed -- no leaks are possible
==27574== 
==27574== For counts of detected and suppressed errors, rerun with: -v
==27574== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **avetsa2** using **6313884a2643381ff30725a586506da8d298b24e** (from **February 26th 2019, 12:05:00 am**)
