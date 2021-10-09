//variable declarations
int inputVal=0;
int actualVal=0;

void setup()
{
  //input
  pinMode(A0, INPUT);
  //output
  pinMode(2, OUTPUT);//right
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);//left

  pinMode(8, OUTPUT);//right
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);//left
    
  Serial.begin(9600);           

}

void loop()
{
  //read input from potentiometer
  inputVal = analogRead(A0);
  //map values from potentiometer
  actualVal=map(inputVal, 0, 1023, 0, 99);
  
  //seperate digits to tens and ones
  int tens =actualVal/10;  
  int ones =actualVal%10;

 //displays tens
  switch(tens){
  	case 9:
  		digitalWrite(2,HIGH);
  		digitalWrite(3,LOW);
  		digitalWrite(4,LOW);
  		digitalWrite(5,HIGH);
   	
 	 break;
    case 8:
  
  		digitalWrite(2,LOW);
  		digitalWrite(3,LOW);
  		digitalWrite(4,LOW);
  		digitalWrite(5,HIGH);
  
    	break;
    case 7:
  		digitalWrite(2,HIGH);
  		digitalWrite(3,HIGH);
  		digitalWrite(4,HIGH);
  		digitalWrite(5,LOW);
   		break;
    case 6:
  		digitalWrite(2,LOW);
  		digitalWrite(3,HIGH);
  		digitalWrite(4,HIGH);
  		digitalWrite(5,LOW);
    	break;
    case 5:
  		digitalWrite(2,HIGH);
  		digitalWrite(3,LOW);
  		digitalWrite(4,HIGH);
  		digitalWrite(5,LOW);
    	break;
    case 4:
  		digitalWrite(2,LOW);
  		digitalWrite(3,LOW);
  		digitalWrite(4,HIGH);
  		digitalWrite(5,LOW);
    	break;
      case 3:
  		digitalWrite(2,HIGH);
  		digitalWrite(3,HIGH);
  		digitalWrite(4,LOW);
  		digitalWrite(5,LOW);
    	break;
      case 2:
  		digitalWrite(2,LOW);
  		digitalWrite(3,HIGH);
  		digitalWrite(4,LOW);
  		digitalWrite(5,LOW);
   		break;
      case 1:
  		digitalWrite(2,HIGH);
  		digitalWrite(3,LOW);
  		digitalWrite(4,LOW);
  		digitalWrite(5,LOW);
    	break;
      case 0:
  		digitalWrite(2,LOW);
  		digitalWrite(3,LOW);
  		digitalWrite(4,LOW);
  		digitalWrite(5,LOW);
    	break;
  }
  //displays ones
  switch(ones)
  {
  	case 9:
  		digitalWrite(8,HIGH);
  		digitalWrite(9,LOW);
  		digitalWrite(10,LOW);
  		digitalWrite(11,HIGH);
    	break;
    case 8:
  		digitalWrite(8,LOW);
  		digitalWrite(9,LOW);
  		digitalWrite(10,LOW);
  		digitalWrite(11,HIGH);
    	break;
    case 7:
  		digitalWrite(8,HIGH);
  		digitalWrite(9,HIGH);
  		digitalWrite(10,HIGH);
  		digitalWrite(11,LOW);
   		break;
    case 6:
  		digitalWrite(8,LOW);
  		digitalWrite(9,HIGH);
  		digitalWrite(10,HIGH);
  		digitalWrite(11,LOW);
    	break;
    case 5:
  		digitalWrite(2,HIGH);
  		digitalWrite(3,LOW);
  		digitalWrite(4,HIGH);
  		digitalWrite(5,LOW);
    	break;
    case 4:
  		digitalWrite(8,LOW);
  		digitalWrite(9,LOW);
  		digitalWrite(10,HIGH);
  		digitalWrite(11,LOW);
    	break;
      case 3:
  		digitalWrite(8,HIGH);
  		digitalWrite(9,HIGH);
  		digitalWrite(10,LOW);
  		digitalWrite(11,LOW);
  
    	break;
      case 2:
  		digitalWrite(8,LOW);
  		digitalWrite(9,HIGH);
  		digitalWrite(10,LOW);
  		digitalWrite(11,LOW);
   		break;
      case 1:
  		digitalWrite(8,HIGH);
  		digitalWrite(9,LOW);
  		digitalWrite(10,LOW);
  		digitalWrite(11,LOW);
    	break;
      case 0:
  		digitalWrite(8,LOW);
  		digitalWrite(9,LOW);
  		digitalWrite(10,LOW);
  		digitalWrite(11,LOW);
    	break;     
  }
  
  delay(10); // Wait for 10 millisecond(s)
  
}