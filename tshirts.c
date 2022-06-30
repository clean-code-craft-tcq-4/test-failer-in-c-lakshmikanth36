#include "tshirt.h"
char size(int cms) {
    char sizeName = '\0';
    if(cms <=TSHIRTSIZE_S2) {
        sizeName = 'S';
    } else if(cms > TSHIRTSIZE_S2 && cms <=TSHIRTSIZE_M2) {
        sizeName = 'M';
    } else if(cms > TSHIRTSIZE_M2) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTShirt()
{
    assert(size(TSHIRTSIZE_S1) == 'S');
    assert(size(TSHIRTSIZE_S1) == 'S');
    assert(size(TSHIRTSIZE_M1) == 'M');
    assert(size(TSHIRTSIZE_M2) == 'M');
    assert(size(TSHIRTSIZE_L) == 'L');
    printf("\nAll is well (maybe!)\n");
}

int main() {
   testTShirt();
   return 0;
}
