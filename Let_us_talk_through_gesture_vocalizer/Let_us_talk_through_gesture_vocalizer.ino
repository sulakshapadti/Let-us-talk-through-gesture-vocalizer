/*
NAME OF THE PROJECT: LET US TALK THROUGH GESTURE VOCALIZER
TEAM MEMBERS: THEJASWINI(1DS19CS181), VAIBHAVI(1DS19CS184), YASHASWINI(1DS19CS195), SULAKSHA(1DS20CS420)
GUIDE: PROF. PRASAD AM, Assistant Professor, CSE, DSCE Bangalore.
CO-GUIDE: SUMIT SAGAR, Walmart-Retail.
*/

int f1=A0;
int f2=A1;
int f3=A2;
int f4=A3;

int x=A5;
int y=A6;
int z=A7;
int data1=0,X,Y,Z;

/*
int v1=2;
int v2=3;
int v3=4;
int v4=5;
int v5=6;
int v6=7;
int v7=8;
int v8=9;
*/
void setup()
{
  Serial.begin(9600);
  pinMode(f1,INPUT); // fingers as input
  pinMode(f2,INPUT);
  pinMode(f3,INPUT);
  pinMode(f4,INPUT);
  digitalWrite(f1,1);
  digitalWrite(f2,1);
  digitalWrite(f3,1);
  digitalWrite(f4,1);

}

void loop()
{
  X=analogRead(x);
  Y=analogRead(y);
  Z=analogRead(z);
 //data1=analogRead(x);
// Serial.print("x= ");
// Serial.print(analogRead(x));
// Serial.print("     ");
// Serial.print("y= ");
// Serial.print(analogRead(y));
// Serial.print("     ");
// Serial.print("z= ");
// Serial.println(analogRead(z));
 delay(2000);

if(X<300)
{
  if(digitalRead(f1)==0)
    {
 Serial.println("CALL AMBULANCE");
 digitalWrite(v1,0);
 delay(500);
 digitalWrite(v1,1);
    }
   else if(digitalRead(f2)==0)
    {
 Serial.println("I NEED WATER");
 digitalWrite(v2,0);
 delay(500);
 digitalWrite(v2,1);
    }
  else if(digitalRead(f3)==0)
    {
 Serial.println("I NEED FOOD");
 digitalWrite(v3,0);
 delay(500);
 digitalWrite(v3,1);
    }
    else  if(digitalRead(f4)==0)
    {
 Serial.println("I'M NOT WELL");
 digitalWrite(v4,0);
 delay(500);
 digitalWrite(v4,1);
    }
}
 if(X>400)
{
   if(digitalRead(f1)==0)
   {
 Serial.println("PLEASE CALL THE POLICE");
// digitalWrite(v1,0);
// delay(500);
// digitalWrite(v1,1);
  }
  else if(digitalRead(f2)==0)
  {
 Serial.println("LEFT");

  }
  else if(digitalRead(f3)==0)
    {
 Serial.println("RIGHT");
 
    }
   else if(digitalRead(f4)==0)
    {
 Serial.println("WELCOME");

    }
}


 if(Y<300)
{
   if(digitalRead(f1)==0)
   {
 Serial.println("HELLO");
  }
  else if(digitalRead(f2)==0)
  {
 Serial.println("HOW ARE YOU");
 
  }
  else if(digitalRead(f3)==0)
    {
 Serial.println("I AM GOOD THANK YOU");
 
    }
 else if(digitalRead(f4)==0)
    {
 Serial.println("WHO ARE YOU");
 
    }
}
else if(Y>400)
{
   if(digitalRead(f1)==0)
   {
    Serial.println("WHERE ARE YOU GOING");
   }
  else if(digitalRead(f2)==0)
  {
    Serial.println("WHAT IS THE TIME");
  }
  else if(digitalRead(f3)==0)
    {
 Serial.println("CAN I COME WITH YOU");
 
    }
 else if(digitalRead(f4)==0)
    {
 Serial.println("HOW WAS THE DAY");
 
    }
}


else if(Z<325)
 {
   if(digitalRead(f1)==0)
   {
 Serial.println("YES");
  }
  else if(digitalRead(f2)==0)
  {
 Serial.println("NO");
 
  }
  else if(digitalRead(f3)==0)
    {
 Serial.println("SORRY");
    }
  else if(digitalRead(f4)==0)
    {
 Serial.println("GO STRAIGHT");
  digitalWrite(v5,0);
 delay(500);
 digitalWrite(v5,1);
  }
 }
}
