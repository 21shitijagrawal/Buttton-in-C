/*This function is created by Mr.Shitij Agrawal*/
#include<dos.h>
#include<graphics.h>
int button(int x1,int y1,int x2,int y2,char text[],int color,int size,int font);
int button(int x1,int y1,int x2,int y2,char text[],int color,int size,int font)
{
  int x,y;
  int text_x=x1+((x2-x1)/4);
  int text_y=y1+((y2-y1)/4);
  union REGS i,o;
  i.x.ax=1;
  int86(0x33,&i,&o);
  i.x.ax=3;
  int86(0x33,&i,&o);
  x=o.x.cx;
  y=o.x.dx;
  setcolor(color);
  rectangle(x1,y1,x2,y2);
  settextstyle(font,0,size);
  outtextxy(text_x,text_y,text);
  if(o.x.bx==1)
  {
      if(x>=x1&&x<=x2&&y>=y1&&y<=y2)
      {
	rectangle(x1+1,y1+1,x2+1,y2+1);
	delay(100);
	return 1;
      }
  }
  return 0;
}
