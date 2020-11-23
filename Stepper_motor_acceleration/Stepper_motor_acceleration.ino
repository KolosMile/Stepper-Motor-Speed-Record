#define dir 2
#define stp 3

int i, duty = 1000, dutyMin = 14;
long accTime = 40000;

void setup(){
  
  pinMode(dir, OUTPUT);
  pinMode(stp, OUTPUT);
  
  digitalWrite(dir, HIGH);

}

void loop(){
  
  if(i == accTime / duty and duty > dutyMin){
    duty--;
    i = 0;
  }

  digitalWrite(stp, HIGH);
  delayMicroseconds(duty);
  digitalWrite(stp, LOW);
  delayMicroseconds(2);

  i++;
}
