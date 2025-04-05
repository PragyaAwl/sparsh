int c_0=2;
int c_1=3;
int c_enable=4;

int d_a=5;
int d_b=6;
int d_c=7;

void setup() {
pinMode(c_0,OUTPUT);
pinMode(c_1,OUTPUT);
pinMode(c_enable,OUTPUT);

pinMode(d_a,OUTPUT);
pinMode(d_b,OUTPUT);
pinMode(d_c,OUTPUT);
digitalWrite(c_enable,HIGH);
}

void loop() {
for(int c=0;c<3;c++){
  cell(c);
  for(int d=0; d<6;d++){
    dot(d);
    delay(500);
  }
  delay(1000);
}
}
void cell(int c){

}
void dot(int d){
  
}