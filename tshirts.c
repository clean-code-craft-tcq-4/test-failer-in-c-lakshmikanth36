#include "tshirt.h"
char size(int cms) {
    char sizeName = '\0';
    if(cms <=TSHIRTSIZE_S) {
        sizeName = 'S';
    } else if(cms > TSHIRTSIZE_S && cms <= TSHIRTSIZE_L) {
        sizeName = 'M';
    } else if(cms > TSHIRTSIZE_L) {
        sizeName = 'L';
    }
    return sizeName;
}

void testTShirt()
{
    assert(size(TSHIRTSIZE_S) == 'S');
    assert(size(TSHIRTSIZE_L) == 'M');
    printf("\nAll is well (maybe!)\n");
}

int main() {
   testTShirt();
   return 0;
}
