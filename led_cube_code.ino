/*Led cube 4x4x4
  code version 5
  Arduino team Politehnika
*/
int niz[]={2,3,4,5,6,7,8,9,10,11,12,13,A0,A1,A2,A3};
int nizK[]={2,3,4,5,9,13,A3,A2,A1,A0,10,6};
int nizP[]={7,8,12,11};
int niz1[]={2,3,4,5,7,8};
int niz2[]={2,6,10,A0,7,11};
int niz3[]={A0,A1,A2,A3,11,12};
int niz4[]={5,9,13,A3,8,12};
int nizRES[]={5,4,9,3,8,13,2,7,12,A3,6,11,A2,10,A1,A0};
int niz5[]={2,6,3,7};
int niz6[]={4,8,5,9};
int niz7[]={10,A0,11,A1};
int niz8[]={12,A2,13,A3};
int niz9[]={2,6,10,3,4,8,12,11};
int niz10[]={2,7,12,11,8};
int niz11[]={2,7,12,A3,A2,13};
int niz12[]={2,3,4,5,6,10,A0};
int niz13[]={6,7,8,9,3,11,A1};
int niz14[]={10,11,12,13,4,8,A2};
int niz15[]={A0,A1,A2,A3,5,9,13};
int niz16[]={3,2,6,7,11,10,A0,A1,A2,A3,13,12,8,9,5,4};
int niz17[]={2,7,12,8,3,4,5,9,13,A3,A2,A1,11,6,10,A0};
int niz18[]={2,3,4,5,6,10,A0};
int niz19[]={2,3,4,5,7,11,A1};
int niz20[]={2,3,4,5,8,12,A2};
int niz21[]={2,3,4,5,9,13,A3};
int niz22[]={2,6,10,A0,7,8,9};
int niz23[]={2,6,10,A0,11,12,13};
int niz24[]={2,6,10,A0,A1,A2,A3};

void setup(){
for(int i=0;i<16;i++)pinMode(niz[i],OUTPUT);
}

void loop(){
sve();
odozgo();
levo();
krug();
zmija();
d1();
trapez();
RG();
resetka();
RG();
slucajno();
kockice();
kocka();
strela();
skener();
zmija2();
zmija3();
}
void sve(){
  for(int j=0;j<16;j++)
{
digitalWrite(niz[j],HIGH);
delay(100);
digitalWrite(niz[j],LOW);
}
for(int j=0;j<16;j++){
  digitalWrite(niz[j],HIGH);
}
delay(500);
for(int j=0;j<16;j++){
  digitalWrite(niz[j],LOW);
}
}
void odozgo(){
  int k=0;
  while(k<4){
  for(int j=k;j<16;j+=4){
  digitalWrite(niz[j],HIGH);
}
delay(300);
for(int j=k;j<16;j+=4){
  digitalWrite(niz[j],LOW);
}
k++;
  }
  
}
void levo(){
    int k=4,p=0;
  while(p<4){
  for(int j=k-4;j<k;j++){
  digitalWrite(niz[j],HIGH);
}
delay(300);
for(int j=k-4;j<k;j++){
  digitalWrite(niz[j],LOW);
}
k+=4;p++;
  } 
}
void krug(){
  int k=0;
  while(k<4){
for(int j=0;j<12;j++)
{
digitalWrite(nizK[j],HIGH);
digitalWrite(nizK[j+6],HIGH);
delay(100);
digitalWrite(nizK[j],LOW);
digitalWrite(nizK[j+6],LOW);
}
k++;
  } 
}
void zmija(){
  for(int j=0;j<12;j++)
{
digitalWrite(nizK[j],HIGH);
delay(150);

}
  for(int j=0;j<4;j++){
    digitalWrite(nizP[j],HIGH);
    delay(150);
  }
   for(int j=3;j>=0;j--){
    digitalWrite(nizP[j],LOW);
    delay(150);
  }
    for(int j=12;j>0;j--)
{
digitalWrite(nizK[j],LOW);
delay(150);

}
}
void RG (){
  for(int j=0;j<16;j++){
  digitalWrite(niz[j],HIGH);
}
delay(1000);
  for(int j=0;j<16;j++){
  digitalWrite(niz[j],LOW);
}
  
}
void d1(){
  int k=0;
  while(k<4){
  for(int i=0;i<12;i++){
    digitalWrite(nizK[i],HIGH);
  }
  delay(200);
  for(int i=0;i<12;i++){
    digitalWrite(nizK[i],LOW);
  }
  for(int i=0;i<4;i++){
    digitalWrite(nizP[i],HIGH);
  }
  delay(200);
  for(int i=0;i<4;i++){
    digitalWrite(nizP[i],LOW);
  }
  k++;
  }
  
}
void trapez(){
  for(int i=0;i<6;i++){
    digitalWrite(niz1[i],HIGH);
  }
  delay(500);
  for(int i=0;i<6;i++){
    digitalWrite(niz1[i],LOW);
  } 
  for(int i=0;i<6;i++){
    digitalWrite(niz2[i],HIGH);
  }
  delay(500);
  for(int i=0;i<6;i++){
    digitalWrite(niz2[i],LOW);
  }
  for(int i=0;i<6;i++){
    digitalWrite(niz3[i],HIGH);
  }
  delay(500);
  for(int i=0;i<6;i++){
    digitalWrite(niz3[i],LOW);
  }
  for(int i=0;i<6;i++){
    digitalWrite(niz4[i],HIGH);
  }
  delay(500);
  for(int i=0;i<6;i++){
    digitalWrite(niz4[i],LOW);
  }
}
void resetka(){
  int k=0;
  while(k<16){
    for(int i=0;i<16-k;i++){
    digitalWrite(nizRES[i],HIGH);
  }
  delay(200);
  for(int i=0;i<16-k;i++){
    digitalWrite(nizRES[i],LOW);
  }
  k++;
  }
}
void slucajno(){
  int k=0,x;
  while(k<20){
    x=random(0,16);
    digitalWrite(niz[x],HIGH);
    delay(200);
    digitalWrite(niz[x],LOW);
   k++; 
  }
  
}
void kockice(){
  for(int i=0; i<4; i++)
  {
    digitalWrite(niz6[i], HIGH);
  }
  delay(500);
    for(int i=0; i<4; i++)
    {
    digitalWrite(niz6[i], LOW);
   }
   for(int i=0; i<4; i++)
   {
     digitalWrite(niz8[i], HIGH);
   }
   delay(500);
   for(int i=0; i<4; i++)
   {
     digitalWrite(niz8[i], LOW);
   }
   for(int i=0; i<4; i++)
  {
    digitalWrite(niz5[i], HIGH);
  }
  delay(500);
    for(int i=0; i<4; i++)
    {
    digitalWrite(niz5[i], LOW);
   }
   for(int i=0; i<4; i++)
  {
    digitalWrite(niz7[i], HIGH);
  }
  delay(500);
    for(int i=0; i<4; i++)
    {
    digitalWrite(niz7[i], LOW);
    }
}
    
 void kocka(){
 
 for(int i=0; i<4; i++)
  {
    digitalWrite(niz5[i], HIGH);
  }
  delay(500);
  for(int i=0; i<4; i++)
  {
    digitalWrite(niz5[i], LOW);
  }
   for(int i=0; i<8; i++)
  {
    digitalWrite(niz9[i], HIGH);
  }
  delay(500);
  for(int i=0; i<8; i++)
  {
    digitalWrite(niz9[i], LOW);
  }
   for(int i=0; i<12; i++)
  {
    digitalWrite(nizK[i], HIGH);
  }
  delay(500);
  for(int i=0; i<12; i++)
  {
    digitalWrite(nizK[i], LOW);
  }
 }
  
  void strela(){
   
    for(int i=0; i<4; i++)
    {
      digitalWrite(niz5[i], HIGH);
    }
    delay(500);
       for(int i=0; i<4; i++)
    {
      digitalWrite(niz5[i], LOW);
    }
          for(int i=0; i<5; i++)
    {
      digitalWrite(niz10[i], HIGH);
    }
       delay(500);
       for(int i=0; i<5; i++)
    {
      digitalWrite(niz10[i], LOW);
    }
         for(int i=0; i<6; i++)
    {
      digitalWrite(niz11[i], HIGH);
    }
        delay(500);
       for(int i=0; i<6; i++)
    {
     
      digitalWrite(niz11[i], LOW);
    
    }
    delay(50);
  }
  
  
  void skener(){
   for(int i=0; i<7; i++)
  {
    digitalWrite(niz18[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz18[i], LOW);
  }
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz19[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz19[i], LOW);
  }
   
   for(int i=0; i<7; i++)
  {
    digitalWrite(niz20[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz20[i], LOW);
  }
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz21[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz21[i], LOW);
  }
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz18[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz18[i], LOW);
  }
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz22[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz22[i], LOW);
  }
   
   for(int i=0; i<7; i++)
  {
    digitalWrite(niz23[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz23[i], LOW);
  }
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz24[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz24[i], LOW);
  }
   
    for(int i=0; i<7; i++)
  {
    digitalWrite(niz12[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz12[i], LOW);
  }
  
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz13[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz13[i], LOW);
  }
  
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz14[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz14[i], LOW);
  }
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz15[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz15[i], LOW);
  }
  
   for(int i=0; i<7; i++)
  {
    digitalWrite(niz12[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz12[i], LOW);
  }
  
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz13[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz13[i], LOW);
  }
  
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz14[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz14[i], LOW);
  }
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz15[i], HIGH);
  }
  delay(500);
  for(int i=0; i<7; i++)
  {
    digitalWrite(niz15[i], LOW);
  }
}
 void zmija2(){
  for(int i=0; i<16; i++)
  {
  digitalWrite(niz16[i], HIGH);
  delay(100);
  }
  for(int i=0; i<16; i++)
 {
    digitalWrite(niz16[i], LOW);
  }
}
void zmija3(){
  for(int i=0; i<16; i++)
  {
  digitalWrite(niz17[i], HIGH);
  delay(100);
  }
  for(int i=0; i<16; i++)
 {
    digitalWrite(niz17[i], LOW);
  }
}
