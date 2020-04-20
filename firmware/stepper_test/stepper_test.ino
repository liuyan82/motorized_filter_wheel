
/**
 * wiring the stepper:
 * white-> m1b
 * blue -> m2b
 * green -> m1a
 * black -> m1b
 */

int dir = 4;
int step = 5;
int en = 6;
int ms1 = 7;
int ms2 = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(dir, OUTPUT);
  pinMode(step, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(ms1, OUTPUT);
  pinMode(ms2, OUTPUT);
  delay(5);

  digitalWrite(en, LOW);
  digitalWrite(ms1, LOW);
  digitalWrite(ms2, HIGH);
  digitalWrite(dir, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(step, HIGH);
  delay(10);
  digitalWrite(step, LOW);
  delay(10);

}
