#include "tshirt.h"

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTShirt()
{
    int testTShirt;
    printf("Enter TShirt Value S/M/L-Size in cms:");
    scanf("%d", &testTShirt);
    assert((size(testTShirt) == 'S') ||(size(testTShirt) == 'M')|| (size(testTShirt) == 'L'));
    printf("\nAll is well (maybe!)\n");
}

int main() {
   testTShirt();
   return 0;
}
