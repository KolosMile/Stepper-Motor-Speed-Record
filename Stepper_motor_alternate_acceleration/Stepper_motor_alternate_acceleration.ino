#define dir 2
#define stp 3

int i, duty = 1000, dutyMin = 100, dutyMax = 1001, acc = 1;
long accTime = 100;
void setup() {

  Serial.begin(115200);
  
  pinMode(dir, OUTPUT);
  pinMode(stp, OUTPUT);
  
  digitalWrite(dir, HIGH);

}
void loop(){
  
  if(acc == 1){
    if(i >= accTime / duty and duty > dutyMin){
      duty--;
    }
  }
  if(acc == -1){
    if(i >= accTime / duty and duty < dutyMax){
      i = 0;
      duty++;
    }
  }
  if(acc == 1 and duty <= dutyMin){
    acc = -1;
  }
  if(acc == -1 and duty >= dutyMax){
    acc = 1;
  }

  digitalWrite(stp, HIGH);
  delayMicroseconds(duty);
  digitalWrite(stp, LOW);
  delayMicroseconds(2);

  i++;
}
