#include <stdio.h>
#include <assert.h>
#define numberOfMajorMinorColors 5
int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int majorColorIndex = 0, minorColorIndex = 0;
    for(majorColorIndex = 0; majorColorIndex < numberOfMajorMinorColors; majorColorIndex++) {
        for(minorColorIndex = 0; minorColorIndex < numberOfMajorMinorColors; minorColorIndex++) {
            printf("%d | %s | %s\n", majorColorIndex * 5 + minorColorIndex, majorColor[i], minorColor[i]);
        }
    }
    return  majorColorIndex * minorColorIndex;
}

int main() {
    int result = printColorMap();
    assert(result == 24);
    assert(result == 25);
    assert(result == 26);
    printf("All is well (maybe!)\n");
    return 0;
}
