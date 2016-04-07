int c = 2;              // place your IR in the digital input = 2
unsigned long int high=0,d;         //initialization for high and low
unsigned long int low=0,h=0,l=0;
unsigned long int R;                 //RPM
int n;                 // no of spikes in wheel

void setup() {

Serial.begin(9600);                
pinMode(c, INPUT);          
}

void loop() {
  
  long int op = digitalRead(c);                   //Reading op of IR at op varibale
  if(op == 0)       //if IR is blocked
   {
  h = high++;}       //high ++
  else
 {
    l = low++;       //low ++
  }
  
  long int tim = ((l-h)/l);    //determining time
  
  float dis = ((3.14*9)/n);    //determining distance
  R = dis/tim;                // Speed = (Distance/Time)
  Serial.print("RPM is");
  Serial.print(R);
