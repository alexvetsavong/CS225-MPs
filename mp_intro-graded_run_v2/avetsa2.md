


## Score: 13/13 (100.00%)


### ✓ - [0/0] - Output from `make`

- **Points**: 0 / 0

```
intro.cpp:46:50: warning: using integer absolute value function 'abs' when argument is of floating point type [-Wabsolute-value]
        currInPixel.h = 360/(2*(double)height) * abs((double)(height/2) - (double)y);
                                                 ^
intro.cpp:46:50: note: use function 'std::abs' instead
        currInPixel.h = 360/(2*(double)height) * abs((double)(height/2) - (double)y);
                                                 ^~~
                                                 std::abs
1 warning generated.

```
```
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic main.cpp intro.cpp
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/PNG.cpp
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/HSLAPixel.cpp
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic cs225/lodepng/lodepng.cpp
clang++ intro.o PNG.o HSLAPixel.o lodepng.o main.o -std=c++1y -stdlib=libc++ -lpthread -lm -o intro
clang++ -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic tests/tests.cpp
clang++ tests.o PNG.o HSLAPixel.o lodepng.o intro.o -std=c++1y -stdlib=libc++ -lpthread -lm -o test
./intro 800
Calling myArt(800, 800) and saving it as `art.png`.

```


### ✓ - [1/1] - HSLAPixel's default constructor creates a white pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's default constructor creates an opaque pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSL constructor creates a pixel with provided HSL values

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSL constructor creates an opaque pixel

- **Points**: 1 / 1





### ✓ - [1/1] - HSLAPixel's HSLA constructor creates a pixel with provided HSLA values

- **Points**: 1 / 1





### ✓ - [1/1] - Rotate in_01.png

- **Points**: 1 / 1





### ✓ - [1/1] - Rotate in_02.png

- **Points**: 1 / 1





### ✓ - [1/1] - Rotate in_03.png

- **Points**: 1 / 1





### ✓ - [5/5] - Creative artwork contains at least three unique colors

- **Points**: 5 / 5





---

This report was generated for **avetsa2** using **5308edf89d9a08712e19ae7d507021f5d3ea3bc5** (from **January 30th 2019, 12:05:00 am**)
