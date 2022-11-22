#include <stdio.h>
#include <assert.h>

#include "Extract.c"
#include "Convert.c"

int main() {
    
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    ColorPairToString(WHITE, 1);
    
    return 0;
}
