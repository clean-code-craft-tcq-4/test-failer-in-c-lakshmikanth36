#include <stdio.h>
#include <assert.h>
#define numberOfMajorMinorColors 5
#define COLORMAPVALUE1 24
#define COLORMAPVALUE2 25
#define COLORMAPVALUE3 26
int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int majorColorIndex = 0, minorColorIndex = 0;
    for(majorColorIndex = 0; majorColorIndex < numberOfMajorMinorColors; majorColorIndex++) {
        for(minorColorIndex = 0; minorColorIndex < numberOfMajorMinorColors; minorColorIndex++) {
            printf("%d | %s | %s\n", (majorColorIndex * numberOfMajorMinorColors + minorColorIndex), majorColor[majorColorIndex], minorColor[minorColorIndex]);
        }
    }
    return  majorColorIndex * minorColorIndex;
}
void testprintColorMap()
{
    int result = printColorMap();
    assert(result == COLORMAPVALUE1);
    assert(result == COLORMAPVALUE2);
    assert(result == COLORMAPVALUE3);
    printf("All is well (maybe!)\n");
}
int main() {
    testprintColorMap();
    return 0;
}
