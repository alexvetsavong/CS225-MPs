


## Score: 0/12 (0.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c graph.cpp -o .objs/graph.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c NimLearner.cpp -o .objs/NimLearner.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c tests/unit_tests.cpp -o .objs/tests/unit_tests.o
clang++  -std=c++1y -stdlib=libc++ -g -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -msse2 -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/graph.o .objs/NimLearner.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/unit_tests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -lpthread -o test

```


### ✗ - [0/1] - NimLearner(10) constructor creates a starting vertex "p1-10"

- **Points**: 0 / 1


```
Original: g.vertexExists("p1-10")
Expanded: false
```


### ✗ - [0/1] - NimLearner(3) constructor creates the correct vertices

- **Points**: 0 / 1


```
Original: g.vertexExists("p1-3")
Expanded: false
```


### ✗ - [0/1] - NimLearner(3) constructor creates the correct edges

- **Points**: 0 / 1


```
Original: g.edgeExists("p1-3", "p2-2")
Expanded: false
```


### ✗ - [0/1] - NimLearner(1) plays a trivial random game

- **Points**: 0 / 1


```
Original: path.size() == 1
Expanded: 0 == 1
```


### ✗ - [0/1] - NimLearner(10) plays random game

- **Points**: 0 / 1


```
Original: path.size() >= 5
Expanded: 0 >= 5
```


### ✗ - [0/1] - Path from playRandomGame of NimLearner(10) source vertex is labeled "p1-10"

- **Points**: 0 / 1


```
Original: path.size() > 0
Expanded: 0 > 0
```


### ✗ - [0/1] - Path from playRandomGame of NimLearner(10) final vertex is labeled "p1-0" or "p2-0"

- **Points**: 0 / 1


```
Original: path.size() > 0
Expanded: 0 > 0
```


### ✗ - [0/1] - A NimLearner(1) random path contains one edge

- **Points**: 0 / 1


```
Original: path.size() == 1
Expanded: 0 == 1
```


### ✗ - [0/1] - NimLearner(1) updates the edge weight correctly

- **Points**: 0 / 1


```
Original: path.size() > 0
Expanded: 0 > 0
```


### ✗ - [0/1] - NimLearner(3) learns that (p1-3\, p2-2) and (p1-3\, p2-1) are losing edges

- **Points**: 0 / 1


```
Original: g.getEdgeWeight( "p1-3", "p2-2") > g.getEdgeWeight( "p1-3", "p2-1")
Expanded: -2147483648 > -2147483648
```


### ✗ - [0/1] - NimLearner(4) learns that (p1-4\, p2-3) is a better edge than (p1-4\, p2-2)

- **Points**: 0 / 1


```
Original: g.getEdgeWeight( "p1-4", "p2-3") > g.getEdgeWeight( "p1-4", "p2-2")
Expanded: -2147483648 > -2147483648
```


### ✗ - [0/1] - NimLearner(4) has ending edge weights summing to the random games played

- **Points**: 0 / 1


```
Original: g.getEdgeWeight( p1_2, p2_0 ) + g.getEdgeWeight( p1_1, p2_0 ) + g.getEdgeWeight( p2_2, p1_0 ) + g.getEdgeWeight( p2_1, p1_0 ) == 10000
Expanded: 0 == 10000 (0x2710)
```


---

This report was generated for **avetsa2** using **c22688c364fcf9ad5f951e38de676d6231a57381** (from **April 22nd 2019, 12:15:00 am**)
