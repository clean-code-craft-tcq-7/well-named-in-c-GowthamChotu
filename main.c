#include <stdio.h>
#include <assert.h>

#include "Extract.h"
#include "Convert.h"

int main() {
    
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    
    for(int i=0; i<numberOfMajorColors;i++)
    {
        for(int j=0; j<numberOfMinorColors; j++)
        {
            ColorPair colorPair = GetColorFromPairNumber(i);
            char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
            printf("Pair Number %d is %s\n", i+1,colorPairNames);
            //printf("Pair Number %d is %s and %s\n" i, 
        }
        
    }

    
    return 0;
}
