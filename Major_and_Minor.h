enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);


enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);


const int MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
