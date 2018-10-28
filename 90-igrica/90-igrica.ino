///////////////////////////////////////////////////
// Project 2.04 Serial Ski Game
// http://learn.olympiacircuits.com/204-ski-game.html
char poles[] = "!                 !";
long now = 1000;
int newMove = 0;
int oldMove = 0;
int direct = 0;
int steps = 0;
int ski = 8;
int SW1 = 1;
int SW2 = 4;
long sTime = 0;
long howLong = 0;
long skiSpeed;

void setup(){
  Serial.begin(9600);
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
}

void loop(){
 newMove = random(5,40);
 steps = abs(newMove - oldMove)/(newMove - oldMove);
 while(oldMove != newMove){
   oldMove = oldMove + steps;
   for(int k = 0; k < oldMove; k++){
     Serial.print(" ");
   }
   //reposition poles
   poles[ski] = ' ';
   poles[ski + 1] = ' ';  
   ski = ski - steps;
   if(digitalRead(SW1)==HIGH){
     ski = ski + 1;
   }
   if(digitalRead(SW2)==HIGH){
     ski = ski - 1;
   }
   ski = constrain(ski,1,16);
   poles[ski] = '|';
   poles[ski+1] = '|';
   Serial.println(poles);
   howLong = (millis() - sTime)/1000;
   skiSpeed = map(howLong,0,20,200,50);
   delay(skiSpeed);
   if(ski == 1 || ski ==16){
     Serial.println("    BANG !!!!!");
     Serial.print("   You skied for ");
     Serial.print(howLong);
     Serial.println(" seconds");
     int sec = 4;
     while(sec > 0){
       Serial.print("   Start in ");
       Serial.print(sec);
       Serial.println("...");
       delay(1000);
       sec = sec - 1;
     }
     poles[ski] = ' ';
     poles[ski + 1] = ' '; 
     ski = 8;
     sTime = millis();
      } //end if for crash
 } 
}   
///////////////////////////////////////////////////
