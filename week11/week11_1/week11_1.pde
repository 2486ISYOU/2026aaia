//week11-1好玩的程式設計-打死地鼠
//修改自week10-2好玩的程式設計-會地鼠冒出來
//從自己的GITHUB修改
void setup(){
  size(300,300);//視窗大小
}
int [][]a={{0,0,0},{0,0,0},{0,0,0}};
void mousePressed(){
  int i=mouseY/100,j=mouseX/100;
  if(a[i][j]>0){//地鼠的頭還在地面上
    a[i][j]=-120;
  }
}
void draw(){
  background(#67EA5C);//綠色背景
  if(frameCount%60==0){
    int i=int(random(3)),j=int(random(3));
    a[i][j]=60;
  }
  for(int i=0;i<3;i++){//左手I對應Y座標
    for(int j=0;j<3;j++){//右手J對應X座標
      int x=j*100+50,y=i*100+50;//算出座標
      if(a[i][j]<0){
        fill(255,0,0);
        a[i][j]++;
      }
      else if (a[i][j]>0){
        fill(#F5B857,a[i][j]*4);
        a[i][j]--;
      }else fill(#67EA5C);
      ellipse(x,y,80,80);//地鼠的洞
    }
  }
}
