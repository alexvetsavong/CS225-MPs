


## Score: 14/14 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c huffman_tree.cpp -o .objs/huffman_tree.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c frequency.cpp -o .objs/frequency.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c encoder.cpp -o .objs/encoder.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c decoder.cpp -o .objs/decoder.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c binary_file_writer.cpp -o .objs/binary_file_writer.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c binary_file_reader.cpp -o .objs/binary_file_reader.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/tests.cpp -o .objs/tests/tests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/huffman_tree.o .objs/frequency.o .objs/encoder.o .objs/decoder.o .objs/binary_file_writer.o .objs/binary_file_reader.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - test_remove_smallest

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_binary

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_binary2

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_writetree

- **Points**: 1 / 1





### ✓ - [1/1] - test_encoder_writetree2

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode2

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode_readtree

- **Points**: 1 / 1





### ✓ - [1/1] - test_decode_readtree2

- **Points**: 1 / 1





### ✓ - [5/5] - test_the_works

- **Points**: 5 / 5

```
==7676== Memcheck, a memory error detector
==7676== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==7676== Using Valgrind-3.13.0 and LibVEX; rerun with -h for copyright info
==7676== Command: ./test -r xml "test_the_works"
==7676== 
==7676== 
==7676== HEAP SUMMARY:
==7676==     in use at exit: 0 bytes in 0 blocks
==7676==   total heap usage: 1,903 allocs, 1,903 frees, 305,504 bytes allocated
==7676== 
==7676== All heap blocks were freed -- no leaks are possible
==7676== 
==7676== For counts of detected and suppressed errors, rerun with: -v
==7676== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

```
```
<?xml version="1.0" encoding="UTF-8"?>
<Catch name="test">
  <Group name="test">
    <TestCase name="test_the_works" tags="[valgrind][weight=5]" filename="tests/tests.cpp" line="162">
      <OverallResult success="true">
        <StdOut>
Printing generated HuffmanTree...
                                                ______________ 63 _____________                                                  
                                 ______________/                               \______________                                   
                        ______ 31 _____                                                       e:32                               
                 ______/               \______                                                                                   
            __ 15 _                           d:16                                                                               
         __/       \__                                                                                                           
       7              c:8                                                                                                        
     /   \                                                                                                                       
   3      b:4                                                                                                                    
  / \                                                                                                                            
\n:1a:2                                                                                                                          
Saving HuffmanTree to file...
        </StdOut>
      </OverallResult>
    </TestCase>
    <OverallResults successes="1" failures="0" expectedFailures="0"/>
  </Group>
  <OverallResults successes="1" failures="0" expectedFailures="0"/>
</Catch>

```


---

This report was generated for **avetsa2** using **7a1c67335265f84c56c5f986ddacf07439342bf6** (from **March 4th 2019, 12:15:00 am**)
