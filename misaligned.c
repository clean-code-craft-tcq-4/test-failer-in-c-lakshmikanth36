#include "misaligned.h"

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int majorColorIndex = 0, minorColorIndex = 0;
    for(majorColorIndex = 0; majorColorIndex < numberOfMajorMinorColors; majorColorIndex++) {
        for(minorColorIndex = 0; minorColorIndex < numberOfMajorMinorColors; minorColorIndex++) {
            printf("%d | %s | %s\n", (majorColorIndex * numberOfMajorMinorColors + minorColorIndex+1), majorColor[majorColorIndex], minorColor[minorColorIndex]);
        }
    }
    return  majorColorIndex * minorColorIndex;
}
void testprintColorMap()
{
    int result = printColorMap();
    assert(result == 25);
    printf("All is well (maybe!)\n");
}
int main() {
    testprintColorMap();
    return 0;
}
