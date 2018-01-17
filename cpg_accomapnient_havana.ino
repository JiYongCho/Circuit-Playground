#include <Adafruit_CircuitPlayground.h>
#include "pitches.h"
#include "durations.h"

#define REST 0 //do nothing

const int numNotes = 64; // count the number of notes you have
int notes[] = {
  NOTE_A2,  NOTE_G2,  NOTE_G3,  NOTE_G2, NOTE_G3, NOTE_DS2, NOTE_DS3, NOTE_DS2, NOTE_DS3,
  
  NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2,
  NOTE_G2,  NOTE_G3,  NOTE_G2, NOTE_G3, NOTE_DS2, NOTE_DS3, NOTE_DS2, NOTE_DS3,  

  NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2,
  NOTE_G2,  NOTE_G3,  NOTE_G2, NOTE_G3, NOTE_DS2, NOTE_DS3, NOTE_DS2, NOTE_DS3,  

  NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2,
  NOTE_G2,  NOTE_G3,  NOTE_G2, NOTE_G3, NOTE_DS2, NOTE_DS3, NOTE_DS2, NOTE_DS3,  

  NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2, NOTE_D2, NOTE_AS2
};

int noteDurations[] = { 
  EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, QUARTER, QUARTER,

  EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH,
  EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH,

  EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH,
  EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, 

  EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH,
  EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH,

  EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH
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
