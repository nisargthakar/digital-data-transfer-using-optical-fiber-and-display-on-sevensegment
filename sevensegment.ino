int k = A0;
int A = 2;
int B = 3;
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;

void setup() 
{
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);

  Serial.begin(9600);

}

void loop()
{
int y = analogRead(k);
Serial.println(y);
/*  if(y> 450 && y<650)
  {
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,HIGH);
  }

  
  else if(k==1)
  {
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
  }
  
  else if(k==2)
  {
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
  }
  
  else if(k==3)
  {
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
  }
  
  else if(k==4)
  {
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
  }
  
  else if(k==5)
  {
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
  }
  
  else if(k==6)
  {
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
  }
  
  else if(k==7)
  {
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
  }
  
  else if(k==8)
  {
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
  }
  
  else if(y>790)
  {
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,LOW);
    digitalWrite(G,LOW);
  }
  */
 //0 
 if(y> 450 && y<650)
 {
  
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(G,LOW);
 }
 
  //5
 else if(y> 660 && y<780)
 {
  
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
 }
  //9
  else if(y>790)
  {
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(E,LOW);
    digitalWrite(F,HIGH);
    digitalWrite(G,HIGH);
  }
 delay(1000);  
 
}
