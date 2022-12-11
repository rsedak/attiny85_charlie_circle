/*
/* Charlie circle module
 *  
 * Created 2022 by Robert Sedak
 * 
 * This example code is in the public domain.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
 *  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHOR(S) OR 
 *  CONTRIBUTOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
 *  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR 
 *  THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Tested on ATTiny85 running at 1MHz.
 * Charlieplexing: D0, D1, D2, D3
 * Buzzer: D4
 * Switch: D5
 *
 */

#include "pitches.h"
#include <EEPROM.h>


int notes[] = {
  NOTE_C2, NOTE_D2, NOTE_E2, NOTE_F2, NOTE_G2, NOTE_A2, NOTE_B2,
  NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_B3,
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4,
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5,
  NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_A6, NOTE_B6
};


// Charlieplexed LED definitions (current flowing from-to pairs)
const int LED[12][2] = {
  {0, 1},                            // 0 
  {0, 2},                            // 1
  {0, 3},                            // 2
  {1, 0},                            // 3
  {2, 0},                            // 4 
  {3, 0},                            // 5
  {1, 2},                            // 6
  {1, 3},                            // 7
  {2, 1},                            // 8 
  {3, 1},                            // 9
  {2, 3},                            // 10
  {3, 2}                             // 11
};


int current = 0;                     // LED in array with current focus
int previous = 0;                    // previous LED that was lit
byte steps = 0;

void setup() {
  randomSeed(analogRead(3));
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT); 
  pinMode(5, INPUT_PULLUP);
}

void loop() {
  LEDON(-1);                      // turn off all leds
  steps = random(34);
  current = 0;
  for (byte i = 0; i < steps; i++){  
    LEDON(current);
    tone(4,notes[i],50);
    delay(200);
    current++;
    if ( current == 12 ) current = 0;
  } 
  do {
  } while (digitalRead(5) == LOW);

}

// -----------------------------------------------------------------------
// turns on LED #thisLED.  Turns off all LEDs if the value is out of range
// -----------------------------------------------------------------------
void LEDON(int thisLED) {
  // turn off previous
  pinMode(LED[previous][0], INPUT);
  pinMode(LED[previous][1], INPUT);

  // turn on the one that's in focus
  if(thisLED >= 0 && thisLED <= 11) {
    pinMode(LED[thisLED][0], OUTPUT);
    pinMode(LED[thisLED][1], OUTPUT);
    digitalWrite(LED[thisLED][0], HIGH);
    digitalWrite(LED[thisLED][1], LOW);
  }
  previous = thisLED;
}
