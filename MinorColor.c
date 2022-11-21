#include <assert.h>

enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;