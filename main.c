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
    for(int i=1; i<=numberOfMajorColors;i++)
    {
        for(int j=1; j<=numberOfMinorColors; j++)
        {
            k++;
            printf("Pair Number %d is ",k);
            testNumberToPair(i, (enum MajorColor)(i), (enum MinorColor)(j));
            //testPairToNumber((enum MajorColor)(i), (enum MinorColor)(j), 12);
            
        }
        
    }

    
    return 0;
}
