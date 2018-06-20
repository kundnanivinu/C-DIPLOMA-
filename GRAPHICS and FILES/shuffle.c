#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<alloc.h>
#include<process.h>
union REGS in,out;
void *buf;
int size,count=0,px,py,rnd[4][4],correct=0;

float octave [7]={130.81,146.83,164.81,174.61,196,220,246.94};

int callmouse()
{    in.x.ax=1;
int86(51,&in,&out);
return 1;

}
void mouseposi(int &xpos,int &ypos,int &click)
{   in.x.ax=3;
int86(51,&in,&out);
click=out.x.bx;
xpos=out.x.cx;
ypos=out.x.dx;
return ;
}
int  mousehide()
{
in.x.ax=2;
int86(51,&in,&out);
return 1;
}
void done(void)
{
int i,j;
mousehide();
j=0;
int n;
for(i=1;i<=15;i++)
{
n=random(7);
sound(octave[n]*4);
delay(300);
setfillstyle(1,2);
bar(42+j,425,68+j,455);
setfillstyle(1,0);
bar(68+j,425,72+j,455);
j=j+29;
}
nosound();
delay(1000);
for(j=0;j<382;j+=2)
{
for(i=0;i<575;i+=2)
{
putpixel(26+i,25+j,4);
putpixel(26+i,460-j,4);
putpixel(25+j*3/4,28+i*3/4,2);
putpixel(595-j*3/4,458-i*3/4,2);
delay(0);
}
}
delay(1000);
settextstyle(1,0,5);
setcolor(14);

outtextxy(320,300,”http://electrofriends.com”);
outtextxy(321,300,”http://electrofriends.com”);
delay(500);
getch();
exit(0);
}
checknum(int mat[4][4])
{
int k=0,i,j;
correct=0;
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
k++;
if(k==mat[i][j])
correct++;
}
}
gotoxy(10,11);
printf(“NUMBERS ARE IN CORRECT POSITION IS ..: %d  “,correct);
if(correct==15)
{
bar(130,40,480,80);
settextstyle(1,0,4);
outtextxy(300,60,”CONGRAGULATIONS !”);
done();
}
else
{
bar(20,415,480,463);
j=0;
for(i=1;i<=correct;i++)
{
setfillstyle(1,1);
bar(42+j,425,68+j,455);
setfillstyle(1,0);
bar(68+j,425,72+j,455);
j=j+29;
}
}
return 0;
}

void  move(int &a,int &b,int &c,int &d,int &w,int &x,int &y,int &z,int &num)
{
if(a>192 && b>190 && c<403 && d<404)
{
sound(600);
count++;
gotoxy(10,9);
printf(“NUMBER OF MOVES..: %d   “,count);
mousehide();
size=imagesize(a,b,c,d);
free(buf);
buf=malloc(size);
getimage(a,b,c,d,buf);
bar(a,b,c,d);
putimage(w,x,buf,COPY_PUT);
w=a;
x=b;
y=c;
z=d;
if(num==1)
{
rnd[px][py]=rnd[px+1][py];
rnd[px+1][py]=0;
px++;
}
else if(num==2)
{
rnd[px][py]=rnd[px-1][py];
rnd[px-1][py]=0;
px–;
}
else if(num==3)
{
rnd[px][py]=rnd[px][py+1];
rnd[px][py+1]=0;
py++;
}
else if(num==4)
{
rnd[px][py]=rnd[px][py-1];
rnd[px][py-1]=0;
py–;
}
checknum(rnd);
callmouse();
delay(40);
nosound();
}
return ;
}

main()
{
int a1,b1,cl,a,b,c,d,w,x,y,z,key,p=0,q=0;
int g=DETECT,m,ext=0,rst=0,rx,ry,num,i,j;
initgraph(&g,&m,”c:\\TC\\bgi”);
randomize();
gotoxy(50,9);
printf(“http://electrofriends.com”);

do
{
correct=0;
count=0;
gotoxy(10,9);
printf(“NUMBER OF MOVES..: %d   “,count);

gotoxy(10,11);
printf(“NUMBERS ARE IN CORRECT POSITION IS ..: %d  “,correct);
setfillstyle(SOLID_FILL,4);
setcolor(15);
for(j=200;j<360;j+=50)
{
for(i=200;i<365;i+=50)
{
rectangle(j-1,i-1,j+46,i+46);
bar(j,i,j+45,i+45);
}
}
rectangle(192,190,403,404);
settextstyle(1,0,3);
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
rnd[i][j]=0;
}
}
for(i=0;i<=15;i++)
{
do
{
rx=random(4);
ry=random(4);
}  while(rnd[rx][ry]);
rnd[rx][ry]=i;
}
char ab[10];
settextjustify(CENTER_TEXT,CENTER_TEXT);
q=p=0;
for(i=0;i<=3;i++)
{
for(j=0;j<=3;j++)
{
if(rnd[i][j]!=0)
{
sprintf(ab,”%d”,rnd[i][j]);
outtextxy(225+p,217+q,ab);
}
else
{
setfillstyle(1,0);
px=i;py=j;
bar(199+p,199+q,247+p,247+q);
w=199+p;
x=199+q;
y=247+p;
z=247+q;
}
p+=50 ;
}
p=0;
q+=50 ;
}
bar(130,40,480,80);
bar(10,425,480,455);
setfillstyle(SOLID_FILL,4);
rectangle(534,374,591,411);
bar(535,375,590,410);
outtextxy(561,390,”EXIT”);
rectangle(484,419,591,456);
bar(485,420,590,455);
outtextxy(538,433,”RESTART”);
setcolor(4);
rectangle(10,10,610,470);
rectangle(15,15,605,465);
setcolor(14);
rectangle(12,12,607,467);
settextstyle(1,0,4);
outtextxy(300,60,”SHUFFLE GAME”);
line(150,85,450,85);

j=0;
delay(1500);
int n;
for(i=1;i<=15;i++)
{
n=random(7);
sound(octave[n]*4);
delay(300);
setfillstyle(1,2);
bar(42+j,425,68+j,455);
setfillstyle(1,0);
bar(68+j,425,72+j,455);
j=j+29;
}
nosound();
setfillstyle(SOLID_FILL,0);
bar(30,425,480,455);
settextstyle(2,0,5);
outtextxy(250,425,”YOU CAN USE ARROW BUTTONS OR MOUSE TO MOVE BLOCKS.”);
outtextxy(250,450,”      PRESS ANY KEY TO START……..” );

getch();
bar(20,415,480,463);
callmouse();
do
{
gotoxy(10,20);
mouseposi(a1,b1,cl);
if(a1>w && a1<y && b1>x+50 && b1<z+50 && cl==1)
{
num=1;
move(w,x+50,y,z+50,w,x,y,z,num);                   //up
}
if(a1>w && a1<y && b1>x-50 && b1<z-50 && cl==1)
{
num=2;
move(w,x-50,y,z-50,w,x,y,z,num);              //down
}
if(a1>w+50 && a1<y+50 && b1>x && b1<z && cl==1)
{
num=3;
move(w+50,x,y+50,z,w,x,y,z,num);                   //left
}
if(a1>w-50 && a1<y-50 && b1>x && b1<z && cl==1)
{
num=4;
move(w-50,x,y-50,z,w,x,y,z,num);                   //right
}
if(kbhit())
{
key=getch();
switch(key)
{
case 72: num=1;
move(w,x+50,y,z+50,w,x,y,z,num);           //up
break;
case 80: num=2;
move(w,x-50,y,z-50,w,x,y,z,num);           //down
break;
case 75: num=3;
move(w+50,x,y+50,z,w,x,y,z,num);          //left
break;
case 77: num=4;
move(w-50,x,y-50,z,w,x,y,z,num);          //right
break;
}
}

if((a1>535 && a1<590 && b1>375 && b1<410 && cl==1) || key==27)
done();
rst=0;
if(a1>485 && a1<590 && b1>420 && b1<455 && cl==1 )
rst=1;
} while(rst==0);
} while(rst!=0);
closegraph();
}