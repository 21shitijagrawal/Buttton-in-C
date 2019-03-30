#include<button.h>
#include<stdio.h>
#include<conio.h>
int main(){

    int x1=100,y1=100,x2=300,y2=200,color=4,size_text=5,font=3;
    int gd=DETECT,gm;
    char name[10];
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("\n\t Enter the name of button : ");
    scanf("%s",name);
    while(!kbhit()){
	if(1==(button(x1,y1,x2,y2,name,color,size_text,font))){
		printf("\n\t Hey i am pressed :");
	}
    }     
    getch();
    closegraph();
    return 0;
}
