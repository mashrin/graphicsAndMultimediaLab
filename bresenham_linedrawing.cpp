//Bresenham’s Line Drawing Algorithm

#include <stdio.h>
#include <iostream>
#include <graphics.h>

using namespace std;
void brelin(int x,int y,int x1,int y1)
{
     int x0=x,y0=y,dx=x1-x,dy=y1-y,p0;
     putpixel (x0,y0,3);
     p0=2*dy-dx;
     for(int i=0;i<dx;i++)
     {
             if(p0<0)
             {
                     x0=x0+1;
                     p0=p0+2*dy;
                     putpixel(x0,y0,3);
                   }
             else
              {
                     x0=x0+1;
                      y0=y0+1;
                     p0=p0+2*dy-2*dx;
                     putpixel(x0,y0,3);
                   }
             }
 };
int main( )
{
	initwindow(640,480,"WinBGIm");

	while(1)
	{
            brelin(100,100,200,200);
            brelin(400,400,500,400);
            }
	while(!kbhit()); 
	closegraph();
    	return(0);
}
