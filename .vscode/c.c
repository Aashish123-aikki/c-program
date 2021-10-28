#include< studio.h>
#include< conio.h>
#include< graphics.h>
#include< math.h>
void lineDDA(int x1,int y1,int x2,int y2)
{
    int x,y,steps,xin,yin,k;
    int dx=x2-x1;
    int dy=y2-y1;
    x=x1;
    y=y1;
    if(abs(dx)>abs(dy)){
        steps=dx;
    }
    else {
    steps=dy;
}
xin=dx/int(steps);
yin=dy/int(steps);
putpixel(x,y,white);
for(m=0;k<steps;k++){
    x+ =xin;
    y+ =yin;
putpixel(x,y,white);
}
}
void main(){
    int x,y,x1,y1,steps,xin,yin;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,)
    printf("enter the cordinate of initial point");
    scanf("%d%d",&x,&y);
    printf("enter the cordinate of final point");
    scanf("%d%d",&x1,&y1);
    lineDDA(x,y,x1,y1);
    getch();
    closegraph();

}