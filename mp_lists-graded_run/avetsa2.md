


## Score: 94/114 (82.46%)


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
Error: Unable to read buffer.
```


### ✗ - [0/5] - List::reverseNth #2

- **Points**: 0 / 5


```
Error: Unable to read buffer.
```


### ✓ - [10/10] - List::merge

- **Points**: 10 / 10

```
==543== Memcheck, a memory error detector
==543== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==543== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==543== Command: ./test -r xml "List::merge"
==543== 
==543== 
==543== HEAP SUMMARY:
==543==     in use at exit: 0 bytes in 0 blocks
==543==   total heap usage: 243,289 allocs, 243,289 frees, 79,504,041 bytes allocated
==543== 
==543== All heap blocks were freed -- no leaks are possible
==543== 
==543== For counts of detected and suppressed errors, rerun with: -v
==543== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge" tags="[part=2][valgrind][weight=10]" filename="tests/tests_part2.cpp" line="59">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="2" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="2" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #1

- **Points**: 2 / 2

```
==916== Memcheck, a memory error detector
==916== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==916== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==916== Command: ./test -r xml "List::sort\ simple\ #1"
==916== 
==916== 
==916== HEAP SUMMARY:
==916==     in use at exit: 0 bytes in 0 blocks
==916==   total heap usage: 2,183 allocs, 2,183 frees, 262,768 bytes allocated
==916== 
==916== All heap blocks were freed -- no leaks are possible
==916== 
==916== For counts of detected and suppressed errors, rerun with: -v
==916== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #1" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="93">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #2

- **Points**: 2 / 2

```
==919== Memcheck, a memory error detector
==919== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==919== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==919== Command: ./test -r xml "List::sort\ simple\ #2"
==919== 
==919== 
==919== HEAP SUMMARY:
==919==     in use at exit: 0 bytes in 0 blocks
==919==   total heap usage: 2,183 allocs, 2,183 frees, 262,816 bytes allocated
==919== 
==919== All heap blocks were freed -- no leaks are possible
==919== 
==919== For counts of detected and suppressed errors, rerun with: -v
==919== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #2" tags="[part=2][valgrind][weight=2]" filename="tests/tests_part2.cpp" line="108">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::sort #1

- **Points**: 5 / 5





### ✓ - [5/5] - List::sort #2

- **Points**: 5 / 5





### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==932== Memcheck, a memory error detector
==932== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==932== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==932== Command: ./test -r xml "List::insertFront\ size"
==932== 
==932== 
==932== HEAP SUMMARY:
==932==     in use at exit: 0 bytes in 0 blocks
==932==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==932== 
==932== All heap blocks were freed -- no leaks are possible
==932== 
==932== For counts of detected and suppressed errors, rerun with: -v
==932== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==935== Memcheck, a memory error detector
==935== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==935== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==935== Command: ./test -r xml "List::insertBack\ size"
==935== 
==935== 
==935== HEAP SUMMARY:
==935==     in use at exit: 0 bytes in 0 blocks
==935==   total heap usage: 2,328 allocs, 2,328 frees, 267,368 bytes allocated
==935== 
==935== All heap blocks were freed -- no leaks are possible
==935== 
==935== For counts of detected and suppressed errors, rerun with: -v
==935== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==957== Memcheck, a memory error detector
==957== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==957== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==957== Command: ./test -r xml "List::insert\ contents"
==957== 
==957== 
==957== HEAP SUMMARY:
==957==     in use at exit: 0 bytes in 0 blocks
==957==   total heap usage: 2,324 allocs, 2,324 frees, 267,272 bytes allocated
==957== 
==957== All heap blocks were freed -- no leaks are possible
==957== 
==957== For counts of detected and suppressed errors, rerun with: -v
==957== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==967== Memcheck, a memory error detector
==967== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==967== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==967== Command: ./test -r xml "List::split\ simple"
==967== 
==967== 
==967== HEAP SUMMARY:
==967==     in use at exit: 0 bytes in 0 blocks
==967==   total heap usage: 2,186 allocs, 2,186 frees, 262,840 bytes allocated
==967== 
==967== All heap blocks were freed -- no leaks are possible
==967== 
==967== For counts of detected and suppressed errors, rerun with: -v
==967== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==971== Memcheck, a memory error detector
==971== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==971== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==971== Command: ./test -r xml "List::_destroy\ empty\ list"
==971== 
==971== 
==971== HEAP SUMMARY:
==971==     in use at exit: 0 bytes in 0 blocks
==971==   total heap usage: 2,336 allocs, 2,336 frees, 268,200 bytes allocated
==971== 
==971== All heap blocks were freed -- no leaks are possible
==971== 
==971== For counts of detected and suppressed errors, rerun with: -v
==971== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==979== Memcheck, a memory error detector
==979== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==979== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==979== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==979== 
==979== 
==979== HEAP SUMMARY:
==979==     in use at exit: 0 bytes in 0 blocks
==979==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==979== 
==979== All heap blocks were freed -- no leaks are possible
==979== 
==979== For counts of detected and suppressed errors, rerun with: -v
==979== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==983== Memcheck, a memory error detector
==983== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==983== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==983== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==983== 
==983== 
==983== HEAP SUMMARY:
==983==     in use at exit: 0 bytes in 0 blocks
==983==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==983== 
==983== All heap blocks were freed -- no leaks are possible
==983== 
==983== For counts of detected and suppressed errors, rerun with: -v
==983== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==989== Memcheck, a memory error detector
==989== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==989== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==989== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==989== 
==989== 
==989== HEAP SUMMARY:
==989==     in use at exit: 0 bytes in 0 blocks
==989==   total heap usage: 2,340 allocs, 2,340 frees, 274,936 bytes allocated
==989== 
==989== All heap blocks were freed -- no leaks are possible
==989== 
==989== For counts of detected and suppressed errors, rerun with: -v
==989== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==993== Memcheck, a memory error detector
==993== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==993== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==993== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==993== 
==993== 
==993== HEAP SUMMARY:
==993==     in use at exit: 0 bytes in 0 blocks
==993==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==993== 
==993== All heap blocks were freed -- no leaks are possible
==993== 
==993== For counts of detected and suppressed errors, rerun with: -v
==993== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==999== Memcheck, a memory error detector
==999== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==999== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==999== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==999== 
==999== 
==999== HEAP SUMMARY:
==999==     in use at exit: 0 bytes in 0 blocks
==999==   total heap usage: 2,340 allocs, 2,340 frees, 272,536 bytes allocated
==999== 
==999== All heap blocks were freed -- no leaks are possible
==999== 
==999== For counts of detected and suppressed errors, rerun with: -v
==999== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1003== Memcheck, a memory error detector
==1003== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1003== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1003== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==1003== 
==1003== 
==1003== HEAP SUMMARY:
==1003==     in use at exit: 0 bytes in 0 blocks
==1003==   total heap usage: 2,340 allocs, 2,340 frees, 277,336 bytes allocated
==1003== 
==1003== All heap blocks were freed -- no leaks are possible
==1003== 
==1003== For counts of detected and suppressed errors, rerun with: -v
==1003== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1007== Memcheck, a memory error detector
==1007== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1007== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1007== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==1007== 
==1007== 
==1007== HEAP SUMMARY:
==1007==     in use at exit: 0 bytes in 0 blocks
==1007==   total heap usage: 2,333 allocs, 2,333 frees, 269,968 bytes allocated
==1007== 
==1007== All heap blocks were freed -- no leaks are possible
==1007== 
==1007== For counts of detected and suppressed errors, rerun with: -v
==1007== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1009== Memcheck, a memory error detector
==1009== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1009== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1009== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==1009== 
==1009== 
==1009== HEAP SUMMARY:
==1009==     in use at exit: 0 bytes in 0 blocks
==1009==   total heap usage: 2,333 allocs, 2,333 frees, 272,368 bytes allocated
==1009== 
==1009== All heap blocks were freed -- no leaks are possible
==1009== 
==1009== For counts of detected and suppressed errors, rerun with: -v
==1009== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1014== Memcheck, a memory error detector
==1014== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1014== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1014== Command: ./test -r xml "List::reverse\ simple"
==1014== 
==1014== 
==1014== HEAP SUMMARY:
==1014==     in use at exit: 0 bytes in 0 blocks
==1014==   total heap usage: 2,189 allocs, 2,189 frees, 262,948 bytes allocated
==1014== 
==1014== All heap blocks were freed -- no leaks are possible
==1014== 
==1014== For counts of detected and suppressed errors, rerun with: -v
==1014== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1017== Memcheck, a memory error detector
==1017== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1017== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1017== Command: ./test -r xml "List::reverse\ edge\ cases"
==1017== 
==1017== 
==1017== HEAP SUMMARY:
==1017==     in use at exit: 0 bytes in 0 blocks
==1017==   total heap usage: 2,334 allocs, 2,334 frees, 267,648 bytes allocated
==1017== 
==1017== All heap blocks were freed -- no leaks are possible
==1017== 
==1017== For counts of detected and suppressed errors, rerun with: -v
==1017== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
"&lt; 1 9 8 7 6 10 >"
        </Expanded>
      </Expression>
      <OverallResult success="false"/>
    </TestCase>
    <OverallResults successes="0" failures="1" expectedFailures="0"/>
  </Group>
  <OverallResults successes="0" failures="1" expectedFailures="0"/>
</Catch>

```


### ✓ - [5/5] - List::merge #2

- **Points**: 5 / 5

```
==1022== Memcheck, a memory error detector
==1022== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1022== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1022== Command: ./test -r xml "List::merge\ #2"
==1022== 
==1022== 
==1022== HEAP SUMMARY:
==1022==     in use at exit: 0 bytes in 0 blocks
==1022==   total heap usage: 2,224 allocs, 2,224 frees, 264,904 bytes allocated
==1022== 
==1022== All heap blocks were freed -- no leaks are possible
==1022== 
==1022== For counts of detected and suppressed errors, rerun with: -v
==1022== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::merge #2" tags="[part=2][valgrind][weight=5]" filename="tests/test_part2_extra.cpp" line="62">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="3" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="3" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [2/2] - List::sort simple #3

- **Points**: 2 / 2

```
==1025== Memcheck, a memory error detector
==1025== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1025== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1025== Command: ./test -r xml "List::sort\ simple\ #3"
==1025== 
==1025== 
==1025== HEAP SUMMARY:
==1025==     in use at exit: 0 bytes in 0 blocks
==1025==   total heap usage: 2,186 allocs, 2,186 frees, 262,880 bytes allocated
==1025== 
==1025== All heap blocks were freed -- no leaks are possible
==1025== 
==1025== For counts of detected and suppressed errors, rerun with: -v
==1025== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="List::sort simple #3" tags="[part=2][valgrind][weight=2]" filename="tests/test_part2_extra.cpp" line="87">
      <OverallResult success="true"/>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==1034== Memcheck, a memory error detector
==1034== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1034== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1034== Command: ./test -r xml "List::insert\ contents\ #2"
==1034== 
==1034== 
==1034== HEAP SUMMARY:
==1034==     in use at exit: 0 bytes in 0 blocks
==1034==   total heap usage: 2,339 allocs, 2,339 frees, 267,768 bytes allocated
==1034== 
==1034== All heap blocks were freed -- no leaks are possible
==1034== 
==1034== For counts of detected and suppressed errors, rerun with: -v
==1034== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==1038== Memcheck, a memory error detector
==1038== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==1038== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==1038== Command: ./test -r xml "List::waterfall\ simple"
==1038== 
==1038== 
==1038== HEAP SUMMARY:
==1038==     in use at exit: 0 bytes in 0 blocks
==1038==   total heap usage: 2,329 allocs, 2,329 frees, 267,432 bytes allocated
==1038== 
==1038== All heap blocks were freed -- no leaks are possible
==1038== 
==1038== For counts of detected and suppressed errors, rerun with: -v
==1038== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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

This report was generated for **avetsa2** using **f8f0458057f7415d69a84116102e674c442b4774** (from **February 27th 2019, 12:05:00 am**)
