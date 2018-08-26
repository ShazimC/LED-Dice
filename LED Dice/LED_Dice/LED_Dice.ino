int leftTwo = 7;
int midTwo = 6;
int rightTwo = 5;
int redOne = 3;
int button = 13;
int input;
int r;

void setup() {
  // put your setup code here, to run once:

  pinMode(leftTwo, OUTPUT);
  pinMode(midTwo, OUTPUT);
  pinMode(rightTwo, OUTPUT);
  pinMode(redOne, OUTPUT);
  pinMode(button, INPUT);
  randomSeed(analogRead(0));

}

void loop() {
  // put your main code here, to run repeatedly:

  input = digitalRead(button);
  
  if (input == HIGH){
    r = random(1, 7);
    shuffle();
    if (r == 1)
    {
      one();
    }
    if (r == 2)
    {
      two();
    }
    if (r == 3)
    {
      three();
    }
    if (r == 4)
    {
      four();
    }
    if (r == 5)
    {
      five();
    }
   if (r == 6)
    {
      six();
    }
    delay(3000);
  }
  else{
    off();
  }
}

void off(){
  digitalWrite(leftTwo, LOW);
  digitalWrite(midTwo, LOW);
  digitalWrite(rightTwo, LOW);
  digitalWrite(redOne, LOW);
}

void shuffle(){
  one();
  delay(100);
  off();
  delay(100);
  two();
  delay(100);
  off();
  delay(100);
  three();
  delay(100);
  off();
  delay(100);
  four();
  delay(100);
  off();
  delay(100);
  five();
  delay(100);
  off();
  delay(100);
  six();
  delay(100);
  off();
  delay(200);
}

void one(){
  digitalWrite(redOne, HIGH);
}

void two(){
  digitalWrite(midTwo, HIGH);
}

void three(){
  digitalWrite(midTwo, HIGH);
  digitalWrite(redOne, HIGH);
}

void four(){
  digitalWrite(leftTwo, HIGH);
  digitalWrite(rightTwo, HIGH);
}

void five(){
  digitalWrite(leftTwo, HIGH);
  digitalWrite(rightTwo, HIGH);
  digitalWrite(redOne, HIGH);
}

void six(){
  digitalWrite(leftTwo, HIGH);
  digitalWrite(midTwo, HIGH);
  digitalWrite(rightTwo, HIGH);
}

