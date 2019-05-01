


## Score: 36/36 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0


```
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c CYOA.cpp -o .objs/CYOA.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/HSLAPixel.cpp -o .objs/cs225/HSLAPixel.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/PNG.cpp -o .objs/cs225/PNG.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/lodepng/lodepng.cpp -o .objs/cs225/lodepng/lodepng.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/DirectedEdgeTests.cpp -o .objs/tests/DirectedEdgeTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/GraphTests.cpp -o .objs/tests/GraphTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/ShortestPath.cpp -o .objs/tests/ShortestPath.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c tests/KeyCountingTests.cpp -o .objs/tests/KeyCountingTests.o
clang++  -std=c++1y -stdlib=libc++ -O0 -pedantic -Wall -Werror -Wfatal-errors -Wextra -Wno-unused-parameter -Wno-unused-variable -MMD -MP -g -c cs225/catch/catchmain.cpp -o .objs/cs225/catch/catchmain.o
clang++ .objs/CYOA.o .objs/cs225/HSLAPixel.o .objs/cs225/PNG.o .objs/cs225/lodepng/lodepng.o .objs/tests/DirectedEdgeTests.o .objs/tests/GraphTests.o .objs/tests/ShortestPath.o .objs/tests/KeyCountingTests.o .objs/cs225/catch/catchmain.o  -std=c++1y -stdlib=libc++ -o test

```


### ✓ - [1/1] - Graphs with `DirectedEdge`s have directed edges

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: eight-vertex test graph has correct properties

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: Graph::degree is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: Graph::incidentEdges contains all incident edges

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: Graph::isAdjacent is correct (same-order test)

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: Graph::isAdjacent is correct (opposite-order test)

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: Graph::removeEdge is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Directed: Graph::removeVertex is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::numVertices() returns the vertex count

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::size returns the edge count

- **Points**: 1 / 1





### ✓ - [1/1] - Nine-vertex test graph has correct properties

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::degree is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::removeEdge is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::removeVertex is correct

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::incidentEdges contains incident edges (origin-only test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::incidentEdges contains incident edges (dest-only test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::incidentEdges contains incident edges (hybrid test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::isAdjacent is correct (same-order test)

- **Points**: 1 / 1





### ✓ - [1/1] - Graph::isAdjacent is correct (opposite-order test)

- **Points**: 1 / 1





### ✓ - [2/2] - Graph::shortestPath finds a shortest path with two vertices

- **Points**: 2 / 2





### ✓ - [2/2] - Graph::shortestPath finds a shortest path with three vertices

- **Points**: 2 / 2





### ✓ - [2/2] - Graph::shortestPath finds a shortest path with four vertices

- **Points**: 2 / 2





### ✓ - [2/2] - Graph::shortestPath finds a shortest path with four vertices (reverse)

- **Points**: 2 / 2





### ✓ - [2/2] - Graph::shortestPath finds a shortest path with five vertices

- **Points**: 2 / 2





### ✓ - [2/2] - Graph::shortestPath finds a shortest path with six vertices

- **Points**: 2 / 2





### ✓ - [5/5] - Graph::isAdjacent satisfies runtime constraints

- **Points**: 5 / 5





---

This report was generated for **avetsa2** using **2e291bf7d6d08ebbb35a69ed491d22a25a9311c0** (from **May 1st 2019, 12:05:00 am**)
