#define A 		13
#define B 		12
#define C 		11
#define D 		10
#define _step 	9
#define _way	8
#define _count 	7

int previouses[3] = {1, 1, 1};
int count = 0;
int way = 1;
int step = 1;

void setup()
{
  Serial.begin(9600);
  
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  
  pinMode(_step,  INPUT_PULLUP);
  pinMode(_way,   INPUT_PULLUP);
  pinMode(_count, INPUT_PULLUP);
  
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
}

void loop()
{
  ReadFront(_count);
  ReadFront(_way);
  ReadFront(_step);
}


int Count(int number, int mul)
{
  if(way == 1)
  {
  	number += mul;
    if(number > 9)
    {
      number = number - 10;
    }
  }
  else
  {
    number -= mul;
    if(number < 0)
    {
      number = number + 10;
    }
  }
  return number;
}

int Display(int number)
{
  digitalWrite(A, number & 0x01);
  digitalWrite(B, number & 0x02);
  digitalWrite(C, number & 0x04);
  digitalWrite(D, number & 0x08);
}

void ReadFront(int button)
{
  int current = digitalRead(button);
  if(current == LOW && current != previouses[button-7])
  {
    if(button == 7)
    {	 
      count = Count(count, step);
      Display(count);
    }
    else if(button == 8)
    {
   	  way ^= 1;
    }
    else if(button == 9)
    {
      step = Count(step, 1);
    }
  }
  
  previouses[button-7] = current;
  delay(1);
}
