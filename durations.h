/*************************************************************************************************************************************************
 * Note Durations modified from https://github.com/adafruit/Adafruit_CircuitPlayground/blob/master/examples/Birthday_Candles/Birthday_Candles.ino*
 *************************************************************************************************************************************************/

#define WHOLE            2200       // Length of time in milliseconds of a whole note (i.e. a full bar).
#define HALF             WHOLE/2
#define QUARTER          HALF/2
#define EIGHTH           QUARTER/2
#define EIGHTH_TRIPLE    QUARTER/3
#define SIXTEENTH        EIGHTH/2
#define THIRTY_SECOND    SIXTEENTH/2 //added by Ji Yong

#define DOTTED_HALF      HALF + QUARTER  //added by Ji Yong
#define DOTTED_QUARTER   QUARTER + EIGHTH //added by Ji Yong
#define DOTTED_EIGHTH    EIGHTH + SIXTEENTH //added by Ji Yong
#define DOTTED_SIXTEENTH SIXTEENTH + THIRTY_SECOND //added by Ji Yong

