#include <stdio.h>
#include <assert.h>

#include "Extract.h"
#include "Convert.h"

int main() {
    
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    
    int k=0;
    for(int i=1; i<25;i++)
    {
        //for(int j=1; j<=numberOfMinorColors; j++)
        //{
            k++;
            //printf("Pair Number %d is ",k);
            ColorPair colorPair = GetColorFromPairNumber(i);
            char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
            ColorPairToString(&colorPair, colorPairNames);
            printf("Got pair %s\n", colorPairNames);
            //testNumberToPair(i, (enum MajorColor)(i), (enum MinorColor)(i));
            //testPairToNumber((enum MajorColor)(i), (enum MinorColor)(j), 12);
            
        //}
        
    }

    
    return 0;
}
