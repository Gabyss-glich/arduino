#define buzzer_pin 45
#define led_pin 13
#define C 262
#define Cs 277
#define D 294
#define Ds 311
#define E 330
#define F 349
#define G 392
#define Gs 415
#define A 440
#define As 466
#define B 494

#define PLAY_TONE(freq, dur) tone(buzzer_pin, (freq), (dur))
#define STOP_TONE()

#define DURATION_MS 500
#define PAUSE_MS 500

void setup() {
  pinMode(buzzer_pin, OUTPUT);
  pinMode(led_pin, OUTPUT);  // ppinMode(buzzer_pin, OUTPUT);
}

void loop() {
  PLAY_TONE(E, DURATION_MS);
  delay(500);
  PLAY_TONE(E, DURATION_MS);
  delay(500);
  PLAY_TONE(E, DURATION_MS);
  delay(500);
  PLAY_TONE(C, DURATION_MS);
  delay(500);
  PLAY_TONE(G, DURATION_MS);
  delay(500);
  PLAY_TONE(E, DURATION_MS);

  delay(500);

  PLAY_TONE(D, DURATION_MS);
  delay(500);
  PLAY_TONE(G, DURATION_MS);
  delay(500);
  PLAY_TONE(E, DURATION_MS);
  
  delay(500);

  PLAY_TONE(B, DURATION_MS);
  delay(500);
  PLAY_TONE(B, DURATION_MS);
  delay(500);
  PLAY_TONE(B, DURATION_MS);
  delay(500);
  PLAY_TONE(C, DURATION_MS);
  delay(500);
  PLAY_TONE(G, DURATION_MS);
  delay(500);
  PLAY_TONE(Ds, DURATION_MS);  
  
  delay(500);

  PLAY_TONE(D, DURATION_MS);
  delay(500);
  PLAY_TONE(G, DURATION_MS);
  delay(500);
  PLAY_TONE(E, DURATION_MS);

STOP_TONE()
}
