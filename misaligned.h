#include <stdio.h>
#include <assert.h>
#define numberOfMajorMinorColors 5
#define COLORMAPVALUE1 24
#define COLORMAPVALUE2 25
#define COLORMAPVALUE3 26
const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int majorColorIndex = 0, minorColorIndex = 0;
int printColorMap();
void testprintColorMap();
int GetprintColorMap();
