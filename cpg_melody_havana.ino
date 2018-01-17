#include <Adafruit_CircuitPlayground.h>
#include "pitches.h"
#include "durations.h"

#define REST 0 //do nothing

const int numNotes = 61; // count the number of notes you have
int notes[] = {
  NOTE_AS3,  NOTE_D4,  NOTE_D4,  NOTE_AS3, NOTE_AS3, NOTE_G3, REST,

  REST, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_D4, NOTE_C4, NOTE_AS3,
  NOTE_D4,  NOTE_D4,  NOTE_AS3,  NOTE_AS3, NOTE_G3, REST,
  
  REST, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_D4, NOTE_C4, NOTE_AS3,
  NOTE_D4,  NOTE_D4,  NOTE_AS3,  NOTE_AS3, NOTE_G3, REST,
  
  REST, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_D4, NOTE_C4, NOTE_AS3,
  NOTE_C4, NOTE_D4, NOTE_AS3, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_AS3,
  NOTE_C4, NOTE_D4, NOTE_A3, REST, NOTE_AS3, NOTE_A3, NOTE_AS3, NOTE_A3, NOTE_A3, NOTE_G3      
};

int noteDurations[] = { 
  EIGHTH,    EIGHTH, EIGHTH,  EIGHTH, EIGHTH,   QUARTER, QUARTER,
  
  EIGHTH,    EIGHTH, EIGHTH,  EIGHTH, EIGHTH,   EIGHTH,  EIGHTH, EIGHTH,
  EIGHTH,    EIGHTH, EIGHTH,  EIGHTH, QUARTER,  QUARTER,
  
  EIGHTH,    EIGHTH, EIGHTH,  EIGHTH, EIGHTH,   EIGHTH,  EIGHTH, EIGHTH, 
  EIGHTH,    EIGHTH, EIGHTH,  EIGHTH, QUARTER,  QUARTER,
  
  EIGHTH,    EIGHTH, EIGHTH,  EIGHTH, EIGHTH,   EIGHTH,  EIGHTH, EIGHTH, 
  SIXTEENTH, EIGHTH, QUARTER, EIGHTH, EIGHTH,   EIGHTH,  EIGHTH, EIGHTH, 
  SIXTEENTH, EIGHTH, EIGHTH,  EIGHTH, EIGHTH,   EIGHTH,  EIGHTH, EIGHTH, EIGHTH, QUARTER
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
