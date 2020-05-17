
/**
 * wiring the stepper:
 * white-> m1b
 * blue -> m2a
 * green -> m1a
 * black -> m2b
 */
 int rst = 3;
int en = 4;
int m0 = 5;
int m1 = 6;
int m2 = 7;
int slp = 8;
int stp = 9;
int dir = 10;

void setup() {
  // put your setup code here, to run once: 
  pinMode(rst, OUTPUT);

  pinMode(dir, OUTPUT);
  pinMode(stp, OUTPUT);
  pinMode(slp, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(m0, LOW);
  pinMode(m1, LOW);
  pinMode(m2, LOW);
  delay(5);

  digitalWrite(rst, HIGH);
  digitalWrite(en, LOW);
  digitalWrite(m0, 1);
  digitalWrite(m1, 1);
  digitalWrite(m2, 1);
  digitalWrite(dir, HIGH);
  digitalWrite(slp, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(stp, HIGH);
  delay(1);
  digitalWrite(stp, LOW);
  delay(10);

}
