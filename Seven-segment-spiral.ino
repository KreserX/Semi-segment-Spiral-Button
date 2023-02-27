void setup() {
  pinMode(8, OUTPUT);//G
  pinMode(9, OUTPUT);//F
  pinMode(2, OUTPUT);//A
  pinMode(3, OUTPUT);//B
  pinMode(4, OUTPUT);//E
  pinMode(5, OUTPUT);//D
  pinMode(6, OUTPUT);//C
  pinMode(7, OUTPUT);//DP

  pinMode(11, INPUT);
}

bool DP;


void loop() {
  DP = 0;
  if (digitalRead(11) == 1) {
      Function();
  }
  else {
    DP = 1;
    digitalWrite(7, DP);

  }
}

long Function() {
  const int i = 50;
  digitalWrite(7, 0);
  digitalWrite(9, 1);
  delay(i);
  digitalWrite(9, 0);
  digitalWrite(2, 1);
  delay(i);
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  delay(i);
  digitalWrite(3, 0);
  digitalWrite(6, 1);
  delay(i);
  digitalWrite(6, 0);
  digitalWrite(5, 1);
  delay(i);
  digitalWrite(5, 0);
  digitalWrite(4, 1);
  delay(i);
  digitalWrite(4, 0);
}