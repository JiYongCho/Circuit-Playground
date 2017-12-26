#include <Adafruit_CircuitPlayground.h>
#include "pitches.h"

// Define note durations.  You only need to adjust the whole note
// time and other notes will be subdivided from it directly.
// from: https://github.com/adafruit/Adafruit_CircuitPlayground/blob/master/examples/Birthday_Candles/Birthday_Candles.ino
#define WHOLE         2200       // Length of time in milliseconds of a whole note (i.e. a full bar).
#define HALF          WHOLE/2
#define QUARTER       HALF/2
#define EIGHTH        QUARTER/2
#define EIGHTH_TRIPLE QUARTER/3
#define SIXTEENTH     EIGHTH/2
#define DOTHALF       HALF + QUARTER  //added by Ji Yong
#define DOTQUARTER    QUARTER + EIGHTH //added by Ji Yong

const int numNotes = 27;
int notes[] = {
  NOTE_D3,  NOTE_D3,  NOTE_D3,  NOTE_E3, NOTE_FS3,
  NOTE_FS3, NOTE_E3,  NOTE_FS3, NOTE_G3, NOTE_A3,
  NOTE_D4,  NOTE_D4,  NOTE_D4,  NOTE_A3, NOTE_A3, NOTE_A3,
  NOTE_FS3, NOTE_FS3, NOTE_FS3, NOTE_D3, NOTE_D3, NOTE_D3,
  NOTE_A3,  NOTE_G3,  NOTE_FS3, NOTE_E3, NOTE_D3        
};

int noteDurations[] = { 
  DOTQUARTER, DOTQUARTER, QUARTER, EIGHTH, DOTQUARTER,
  QUARTER,    EIGHTH,     QUARTER, EIGHTH, DOTHALF,
  EIGHTH,     EIGHTH,     EIGHTH,  EIGHTH, EIGHTH,     EIGHTH,
  EIGHTH,     EIGHTH,     EIGHTH,  EIGHTH, EIGHTH,     EIGHTH,
  QUARTER,    EIGHTH,     QUARTER, EIGHTH, DOTQUARTER    
};

void setup() {
  CircuitPlayground.begin();  // initialize the CP library
}

void loop() {
  if(CircuitPlayground.leftButton()) {   // play when we press the left button
    for(int index = 0; index < numNotes; index++){
      CircuitPlayground.playTone(notes[index], noteDurations[index]); //play the note
      delay(7); // to distinguish the notes, set a minimum time between them
    }
  }
}
