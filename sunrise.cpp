//Sunrise basic animation

#include <stdio.h>
#include <iostream>
#include <graphics.h>
using namespace std;
int main( )
{
	initwindow( 640 , 480 , "WinBGIm" );
	int r,x,y,p,xc=320,yc=240;
	r=100;
    	outstreamxy( 0 , 15 ); 
	printf( "Hello Console!\n" );
	cout << "Hello Console-Stream!\n";
   for(int i=0;i<490;i++){
    setcolor(15);
    line( 0, 240, 80, 120 );
    line( 80, 120, 160, 240 );
    line( 160, 240, 240, 120 );
    line( 240, 120, 320, 240 );
    line( 320, 240, 400, 120 );
    line( 400, 120, 480, 240 );
    line( 480, 240, 560, 120 );
    line( 560, 120, 640, 240 );
    line( 0,240,0,400);
    line( 640,240,640,400);
    line( 0,400,640,400);
    x=0;
    y=r;
    putpixel(xc+x,yc-y,1);
    printf("%d\n",i);
    p=3-(2*r);
    floodfill(320,250,WHITE);
    for(x=0;x<=y;x++)
    {
    if (p<0)
    {
    y=y;
    p=(p+(4*x)+6);
    }
    else
    {
    y=y-1;    
    p=p+((4*(x-y)+10));
    }
    if (getpixel(xc+x,yc-y-i)!=15)
    putpixel(xc+x,yc-y-i,14);
    if (getpixel(xc-x,yc-y-i)!=15)
    putpixel(xc-x,yc-y-i,14);
    if (getpixel(xc+x,yc+y-i)!=15)
    putpixel(xc+x,yc+y-i,14);
    if (getpixel(xc-x,yc+y-i)!=15)
    putpixel(xc-x,yc+y-i,14);
    if (getpixel(xc+y,yc-x-i)!=15)
    putpixel(xc+y,yc-x-i,14);
    if (getpixel(xc-y,yc-x-i)!=15)
    putpixel(xc-y,yc-x-i,14);
    if (getpixel(xc+y,yc+x-i)!=15)
    putpixel(xc+y,yc+x-i,14);
    if (getpixel(xc-y,yc+x-i)!=15)
    putpixel(xc-y,yc+x-i,14);
}
    delay(200);
    cleardevice();
}
	while(!kbhit()); 
	closegraph();    
	return(0);
}
