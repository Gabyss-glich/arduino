#define buzzer_pin 45
#define C 262
#define D 294
#define E 330
#define F 349
#define G 392
#define A 440
#define B 494

#define PLAY_TONE(freq, dur) tone(buzzer_pin, (freq), (dur))
#define STOP_TONE()

#define DURATION_MS 500
#define PAUSE_MS 500

void setup() {
  pinMode(buzzer_pin, OUTPUT);// ppinMode(buzzer_pin, OUTPUT);
}

void loop() {
  PLAY_TONE(C, DURATION_MS);
  PLAY_TONE(C, DURATION_MS); 
  PLAY_TONE(D, DURATION_MS);
  PLAY_TONE(D, DURATION_MS);
  PLAY_TONE(F, DURATION_MS);
  

}
