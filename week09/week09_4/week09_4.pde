//week09-4 好玩的程式設計(陣列 畫很多氣球)
PImage img;
void setup() {
  size(600, 500);
  img=loadImage("balloon.png");
}
float [] x=new float[200];
float [] y=new float[200];
float [] s=new float[200];
int n=0;
float s2=0.1;
void draw() {
  background(#FFFFF2);
  for(int i=0;i<n;i++)
  {
    image(img, x[i], y[i], 96*s[i], 132*s[i]);
  } 
  if(mousePressed){
    s2=s2*1.02;
    image(img, mouseX-96/2*s2, mouseY-132*s2, 96*s2,132*s2);
}else s2=0.1;
}
void mouseReleased(){
  x[n]=mouseX-96/2*s2;
  y[n]=mouseY-132/2*s2;
  s[n]=s2;
  n++;
}
