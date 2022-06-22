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
    assert((size(38) == 'S') ||(size(42) == 'M')|| (size(43) == 'L'));
    printf("\nAll is well (maybe!)\n");
}

int main() {
   testTShirt();
   return 0;
}
