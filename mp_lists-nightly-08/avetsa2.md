


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
==10399== Memcheck, a memory error detector
==10399== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10399== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10399== Command: ./test -r xml "List::insertFront\ size"
==10399== 
==10399== 
==10399== HEAP SUMMARY:
==10399==     in use at exit: 0 bytes in 0 blocks
==10399==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==10399== 
==10399== All heap blocks were freed -- no leaks are possible
==10399== 
==10399== For counts of detected and suppressed errors, rerun with: -v
==10399== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10404== Memcheck, a memory error detector
==10404== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10404== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10404== Command: ./test -r xml "List::insertBack\ size"
==10404== 
==10404== 
==10404== HEAP SUMMARY:
==10404==     in use at exit: 0 bytes in 0 blocks
==10404==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==10404== 
==10404== All heap blocks were freed -- no leaks are possible
==10404== 
==10404== For counts of detected and suppressed errors, rerun with: -v
==10404== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10411== Memcheck, a memory error detector
==10411== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10411== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10411== Command: ./test -r xml "List::insert\ contents"
==10411== 
==10411== 
==10411== HEAP SUMMARY:
==10411==     in use at exit: 0 bytes in 0 blocks
==10411==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==10411== 
==10411== All heap blocks were freed -- no leaks are possible
==10411== 
==10411== For counts of detected and suppressed errors, rerun with: -v
==10411== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10434== Memcheck, a memory error detector
==10434== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10434== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10434== Command: ./test -r xml "List::split\ simple"
==10434== 
==10434== 
==10434== HEAP SUMMARY:
==10434==     in use at exit: 0 bytes in 0 blocks
==10434==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==10434== 
==10434== All heap blocks were freed -- no leaks are possible
==10434== 
==10434== For counts of detected and suppressed errors, rerun with: -v
==10434== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10450== Memcheck, a memory error detector
==10450== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10450== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10450== Command: ./test -r xml "List::_destroy\ empty\ list"
==10450== 
==10450== 
==10450== HEAP SUMMARY:
==10450==     in use at exit: 0 bytes in 0 blocks
==10450==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==10450== 
==10450== All heap blocks were freed -- no leaks are possible
==10450== 
==10450== For counts of detected and suppressed errors, rerun with: -v
==10450== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10456== Memcheck, a memory error detector
==10456== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10456== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10456== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==10456== 
==10456== 
==10456== HEAP SUMMARY:
==10456==     in use at exit: 0 bytes in 0 blocks
==10456==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==10456== 
==10456== All heap blocks were freed -- no leaks are possible
==10456== 
==10456== For counts of detected and suppressed errors, rerun with: -v
==10456== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10463== Memcheck, a memory error detector
==10463== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10463== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10463== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==10463== 
==10463== 
==10463== HEAP SUMMARY:
==10463==     in use at exit: 0 bytes in 0 blocks
==10463==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==10463== 
==10463== All heap blocks were freed -- no leaks are possible
==10463== 
==10463== For counts of detected and suppressed errors, rerun with: -v
==10463== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10470== Memcheck, a memory error detector
==10470== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10470== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10470== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==10470== 
==10470== 
==10470== HEAP SUMMARY:
==10470==     in use at exit: 0 bytes in 0 blocks
==10470==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==10470== 
==10470== All heap blocks were freed -- no leaks are possible
==10470== 
==10470== For counts of detected and suppressed errors, rerun with: -v
==10470== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10476== Memcheck, a memory error detector
==10476== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10476== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10476== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==10476== 
==10476== 
==10476== HEAP SUMMARY:
==10476==     in use at exit: 0 bytes in 0 blocks
==10476==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==10476== 
==10476== All heap blocks were freed -- no leaks are possible
==10476== 
==10476== For counts of detected and suppressed errors, rerun with: -v
==10476== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10482== Memcheck, a memory error detector
==10482== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10482== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10482== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==10482== 
==10482== 
==10482== HEAP SUMMARY:
==10482==     in use at exit: 0 bytes in 0 blocks
==10482==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==10482== 
==10482== All heap blocks were freed -- no leaks are possible
==10482== 
==10482== For counts of detected and suppressed errors, rerun with: -v
==10482== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10488== Memcheck, a memory error detector
==10488== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10488== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10488== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==10488== 
==10488== 
==10488== HEAP SUMMARY:
==10488==     in use at exit: 0 bytes in 0 blocks
==10488==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==10488== 
==10488== All heap blocks were freed -- no leaks are possible
==10488== 
==10488== For counts of detected and suppressed errors, rerun with: -v
==10488== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10494== Memcheck, a memory error detector
==10494== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10494== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10494== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==10494== 
==10494== 
==10494== HEAP SUMMARY:
==10494==     in use at exit: 0 bytes in 0 blocks
==10494==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==10494== 
==10494== All heap blocks were freed -- no leaks are possible
==10494== 
==10494== For counts of detected and suppressed errors, rerun with: -v
==10494== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10501== Memcheck, a memory error detector
==10501== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10501== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10501== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==10501== 
==10501== 
==10501== HEAP SUMMARY:
==10501==     in use at exit: 0 bytes in 0 blocks
==10501==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==10501== 
==10501== All heap blocks were freed -- no leaks are possible
==10501== 
==10501== For counts of detected and suppressed errors, rerun with: -v
==10501== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10511== Memcheck, a memory error detector
==10511== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10511== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10511== Command: ./test -r xml "List::reverse\ simple"
==10511== 
==10511== 
==10511== HEAP SUMMARY:
==10511==     in use at exit: 0 bytes in 0 blocks
==10511==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==10511== 
==10511== All heap blocks were freed -- no leaks are possible
==10511== 
==10511== For counts of detected and suppressed errors, rerun with: -v
==10511== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10522== Memcheck, a memory error detector
==10522== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10522== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10522== Command: ./test -r xml "List::reverse\ edge\ cases"
==10522== 
==10522== 
==10522== HEAP SUMMARY:
==10522==     in use at exit: 0 bytes in 0 blocks
==10522==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==10522== 
==10522== All heap blocks were freed -- no leaks are possible
==10522== 
==10522== For counts of detected and suppressed errors, rerun with: -v
==10522== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10541== Memcheck, a memory error detector
==10541== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10541== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10541== Command: ./test -r xml "List::insert\ contents\ #2"
==10541== 
==10541== 
==10541== HEAP SUMMARY:
==10541==     in use at exit: 0 bytes in 0 blocks
==10541==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==10541== 
==10541== All heap blocks were freed -- no leaks are possible
==10541== 
==10541== For counts of detected and suppressed errors, rerun with: -v
==10541== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==10547== Memcheck, a memory error detector
==10547== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==10547== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==10547== Command: ./test -r xml "List::waterfall\ simple"
==10547== 
==10547== 
==10547== HEAP SUMMARY:
==10547==     in use at exit: 0 bytes in 0 blocks
==10547==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==10547== 
==10547== All heap blocks were freed -- no leaks are possible
==10547== 
==10547== For counts of detected and suppressed errors, rerun with: -v
==10547== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
