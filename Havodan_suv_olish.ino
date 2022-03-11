void setup() {
  pinMode(5, OUTPUT);
}
void loop() {
  digitalWrite(5, HIGH);  //Peltiye yonsin
  delay(3600);              //Peltiye kutsin (dam olish pauzasi)
  digitalWrite(5, LOW);    //Peltiye yonsin
  delay(3600);              //Peltiye kutsin (dam olish pauzasi)
}
