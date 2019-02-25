


## Score: 52/57 (91.23%)


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


### ✓ - [1/1] - List::insertFront size

- **Points**: 1 / 1

```
==29002== Memcheck, a memory error detector
==29002== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29002== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29002== Command: ./test -r xml "List::insertFront\ size"
==29002== 
==29002== 
==29002== HEAP SUMMARY:
==29002==     in use at exit: 0 bytes in 0 blocks
==29002==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==29002== 
==29002== All heap blocks were freed -- no leaks are possible
==29002== 
==29002== For counts of detected and suppressed errors, rerun with: -v
==29002== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29018== Memcheck, a memory error detector
==29018== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29018== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29018== Command: ./test -r xml "List::insertBack\ size"
==29018== 
==29018== 
==29018== HEAP SUMMARY:
==29018==     in use at exit: 0 bytes in 0 blocks
==29018==   total heap usage: 2,113 allocs, 2,113 frees, 251,496 bytes allocated
==29018== 
==29018== All heap blocks were freed -- no leaks are possible
==29018== 
==29018== For counts of detected and suppressed errors, rerun with: -v
==29018== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29022== Memcheck, a memory error detector
==29022== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29022== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29022== Command: ./test -r xml "List::insert\ contents"
==29022== 
==29022== 
==29022== HEAP SUMMARY:
==29022==     in use at exit: 0 bytes in 0 blocks
==29022==   total heap usage: 2,109 allocs, 2,109 frees, 251,400 bytes allocated
==29022== 
==29022== All heap blocks were freed -- no leaks are possible
==29022== 
==29022== For counts of detected and suppressed errors, rerun with: -v
==29022== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29046== Memcheck, a memory error detector
==29046== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29046== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29046== Command: ./test -r xml "List::split\ simple"
==29046== 
==29046== 
==29046== HEAP SUMMARY:
==29046==     in use at exit: 0 bytes in 0 blocks
==29046==   total heap usage: 1,971 allocs, 1,971 frees, 246,968 bytes allocated
==29046== 
==29046== All heap blocks were freed -- no leaks are possible
==29046== 
==29046== For counts of detected and suppressed errors, rerun with: -v
==29046== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29053== Memcheck, a memory error detector
==29053== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29053== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29053== Command: ./test -r xml "List::_destroy\ empty\ list"
==29053== 
==29053== 
==29053== HEAP SUMMARY:
==29053==     in use at exit: 0 bytes in 0 blocks
==29053==   total heap usage: 2,121 allocs, 2,121 frees, 252,328 bytes allocated
==29053== 
==29053== All heap blocks were freed -- no leaks are possible
==29053== 
==29053== For counts of detected and suppressed errors, rerun with: -v
==29053== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29073== Memcheck, a memory error detector
==29073== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29073== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29073== Command: ./test -r xml "List::begin()\ returns\ an\ iterator\ to\ the\ front\ of\ the\ list"
==29073== 
==29073== 
==29073== HEAP SUMMARY:
==29073==     in use at exit: 0 bytes in 0 blocks
==29073==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==29073== 
==29073== All heap blocks were freed -- no leaks are possible
==29073== 
==29073== For counts of detected and suppressed errors, rerun with: -v
==29073== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29112== Memcheck, a memory error detector
==29112== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29112== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29112== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (pre-increment)"
==29112== 
==29112== 
==29112== HEAP SUMMARY:
==29112==     in use at exit: 0 bytes in 0 blocks
==29112==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==29112== 
==29112== All heap blocks were freed -- no leaks are possible
==29112== 
==29112== For counts of detected and suppressed errors, rerun with: -v
==29112== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29163== Memcheck, a memory error detector
==29163== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29163== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29163== Command: ./test -r xml "List::ListIterator::operator++\ advances\ the\ iterator\ (post-increment)"
==29163== 
==29163== 
==29163== HEAP SUMMARY:
==29163==     in use at exit: 0 bytes in 0 blocks
==29163==   total heap usage: 2,125 allocs, 2,125 frees, 259,064 bytes allocated
==29163== 
==29163== All heap blocks were freed -- no leaks are possible
==29163== 
==29163== For counts of detected and suppressed errors, rerun with: -v
==29163== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29233== Memcheck, a memory error detector
==29233== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29233== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29233== Command: ./test -r xml "List::ListIterator::operator++\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==29233== 
==29233== 
==29233== HEAP SUMMARY:
==29233==     in use at exit: 0 bytes in 0 blocks
==29233==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==29233== 
==29233== All heap blocks were freed -- no leaks are possible
==29233== 
==29233== For counts of detected and suppressed errors, rerun with: -v
==29233== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29238== Memcheck, a memory error detector
==29238== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29238== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29238== Command: ./test -r xml "List::ListIterator::operator--\ moves\ the\ iterator\ backwards"
==29238== 
==29238== 
==29238== HEAP SUMMARY:
==29238==     in use at exit: 0 bytes in 0 blocks
==29238==   total heap usage: 2,125 allocs, 2,125 frees, 256,664 bytes allocated
==29238== 
==29238== All heap blocks were freed -- no leaks are possible
==29238== 
==29238== For counts of detected and suppressed errors, rerun with: -v
==29238== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29245== Memcheck, a memory error detector
==29245== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29245== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29245== Command: ./test -r xml "List::ListIterator::operator--\ (post-increment)\ returns\ an\ un-incremented\ iterator"
==29245== 
==29245== 
==29245== HEAP SUMMARY:
==29245==     in use at exit: 0 bytes in 0 blocks
==29245==   total heap usage: 2,125 allocs, 2,125 frees, 261,464 bytes allocated
==29245== 
==29245== All heap blocks were freed -- no leaks are possible
==29245== 
==29245== For counts of detected and suppressed errors, rerun with: -v
==29245== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29255== Memcheck, a memory error detector
==29255== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29255== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29255== Command: ./test -r xml "List::ListIterator::end\ is\ reached"
==29255== 
==29255== 
==29255== HEAP SUMMARY:
==29255==     in use at exit: 0 bytes in 0 blocks
==29255==   total heap usage: 2,118 allocs, 2,118 frees, 254,096 bytes allocated
==29255== 
==29255== All heap blocks were freed -- no leaks are possible
==29255== 
==29255== For counts of detected and suppressed errors, rerun with: -v
==29255== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29271== Memcheck, a memory error detector
==29271== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29271== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29271== Command: ./test -r xml "List::ListIterator::end\ is\ not\ ::begin\ in\ a\ non-empty\ list"
==29271== 
==29271== 
==29271== HEAP SUMMARY:
==29271==     in use at exit: 0 bytes in 0 blocks
==29271==   total heap usage: 2,118 allocs, 2,118 frees, 256,496 bytes allocated
==29271== 
==29271== All heap blocks were freed -- no leaks are possible
==29271== 
==29271== For counts of detected and suppressed errors, rerun with: -v
==29271== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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


### ✓ - [4/4] - List::insert contents #2

- **Points**: 4 / 4

```
==29274== Memcheck, a memory error detector
==29274== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29274== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29274== Command: ./test -r xml "List::insert\ contents\ #2"
==29274== 
==29274== 
==29274== HEAP SUMMARY:
==29274==     in use at exit: 0 bytes in 0 blocks
==29274==   total heap usage: 2,124 allocs, 2,124 frees, 251,896 bytes allocated
==29274== 
==29274== All heap blocks were freed -- no leaks are possible
==29274== 
==29274== For counts of detected and suppressed errors, rerun with: -v
==29274== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
==29289== Memcheck, a memory error detector
==29289== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==29289== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==29289== Command: ./test -r xml "List::waterfall\ simple"
==29289== 
==29289== 
==29289== HEAP SUMMARY:
==29289==     in use at exit: 0 bytes in 0 blocks
==29289==   total heap usage: 2,114 allocs, 2,114 frees, 251,560 bytes allocated
==29289== 
==29289== All heap blocks were freed -- no leaks are possible
==29289== 
==29289== For counts of detected and suppressed errors, rerun with: -v
==29289== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

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
