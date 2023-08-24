//Common Anode(CA) 7 Segment Display

int segA=2;
int segB=3;
int segC=4;
int segD=5;
int segE=6;
int segF=7;
int segG=8;
int segDP=9;

int dlay=80;
//char Array for Digits and Alphabets
char digit_alpha[]={'0','1','2','3','4','5','6','7','8','9','A','b','C','d','E','F'};
int i;

void setup()
{ 
  //Setup all the pins for 7-Segment LED
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  pinMode(segDP, OUTPUT);
  
  //Set all the diode to off at the beginning
  digitalWrite(segA,HIGH);
  digitalWrite(segB,HIGH);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,HIGH);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,HIGH);
  digitalWrite(segDP,HIGH);
  
  //To Draw infinity pattern at the Starting
  Infinity();
  
}



void loop()
{ 
  for(i=0; i<16; i++)
  {
    PrintPattern(digit_alpha[i]);
    delay(1500);
    
    if(i==9) //Blink DP 3times: Stating that its time to print Alphabets
    {
  digitalWrite(segDP,HIGH);
  delay(200);
  digitalWrite(segDP,LOW);
  delay(200);
  digitalWrite(segDP,HIGH);
  delay(200);
  digitalWrite(segDP,LOW);
  delay(200);
  digitalWrite(segDP,HIGH);
  delay(200);
  digitalWrite(segDP,LOW);
  delay(200);
  digitalWrite(segDP,HIGH);
    }
  }
}




void Infinity()
{
  digitalWrite(segDP,LOW);
  digitalWrite(segG,LOW);
  delay(dlay);
  digitalWrite(segG,HIGH);
  digitalWrite(segB,LOW);
  delay(dlay);
  digitalWrite(segB,HIGH);
  digitalWrite(segA,LOW);
  delay(dlay);
  digitalWrite(segA,HIGH);
  digitalWrite(segF,LOW);
  delay(dlay);
  digitalWrite(segF,HIGH);
  digitalWrite(segG,LOW);
  delay(dlay);
  digitalWrite(segG,HIGH);
  digitalWrite(segC,LOW);
  delay(dlay);
  digitalWrite(segC,HIGH);
  digitalWrite(segD,LOW);
  delay(dlay);
  digitalWrite(segD,HIGH);
  digitalWrite(segE,LOW);
  delay(dlay);
  digitalWrite(segE,HIGH);
  digitalWrite(segG,LOW);
  delay(dlay);
  digitalWrite(segG,HIGH);
  
  //Blink DP 3times: Stating that printing Digits and Alphabet going to start
  digitalWrite(segDP,HIGH);
  delay(200);
  digitalWrite(segDP,LOW);
  delay(200);
  digitalWrite(segDP,HIGH);
  delay(200);
  digitalWrite(segDP,LOW);
  delay(200);
  digitalWrite(segDP,HIGH);
  /*delay(200);
  digitalWrite(segDP,LOW);
  delay(200);
  digitalWrite(segDP,HIGH);
  */
}



void PrintPattern(char A)
{
  switch (A)
  {
case '0'://when A value is '0' show ”0” on 7Segment
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, HIGH);
break;
case '1'://when A value is '1' show ”1” on 7Segment
digitalWrite(segA, HIGH);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
break;
case '2':
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, HIGH);
digitalWrite(segG, LOW);
break;
case '3':
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, LOW);
break;
case '4':
digitalWrite(segA, HIGH);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
break;
case '5':
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, HIGH);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
break;
case '6':
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
break;
case '7':
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, HIGH);
digitalWrite(segE, HIGH);
digitalWrite(segF, HIGH);
digitalWrite(segG, HIGH);
break;
case '8':
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
break;
case '9':
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, HIGH);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
break; 
    
//Alphabets: A, b, C, d, E, F
case 'A'://when A value is 'A' show ”A” on 7Segment
digitalWrite(segA, LOW);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, HIGH);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
break;  
case 'b'://when A value is 'b' show ”b” on 7Segment
digitalWrite(segA, HIGH);
digitalWrite(segB, HIGH);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
break;
case 'C':
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, HIGH);
break;
case 'd':
digitalWrite(segA, HIGH);
digitalWrite(segB, LOW);
digitalWrite(segC, LOW);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, HIGH);
digitalWrite(segG, LOW);
break;   
case 'E':
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, LOW);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
break;          
case 'F':
digitalWrite(segA, LOW);
digitalWrite(segB, HIGH);
digitalWrite(segC, HIGH);
digitalWrite(segD, HIGH);
digitalWrite(segE, LOW);
digitalWrite(segF, LOW);
digitalWrite(segG, LOW);
break; 
    
  }
}