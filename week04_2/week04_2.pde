//week04-2 好玩的程式設計 Processing for迴圈+if判斷
//Ctrl-n 可開新的視窗來寫程式
void setup(){
  size(800,200);//視窗大小800x200
}
void draw(){
  for (int x=0;x<800;x+=100){//for迴圈
  //Tool-色彩選擇器,可選色彩再複製,再貼
  if(x<mouseX&&mouseX<x+100)fill(#FF8F05);//設定橘色
  else fill(#FFFFF2);//否則設定填充淡黃色
  rect(x,0,100,100);
  }
}
