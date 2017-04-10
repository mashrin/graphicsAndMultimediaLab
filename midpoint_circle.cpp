//Midpoint Circle Algorithm
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <graphics.h>
#define round(a)((int)(a+0.5))
using namespace std;
void dracircle(int x,int y, int r)
{
     int x0=0,y0=r,p=0;
     p=(5/4-r);
     while((x0)<(y0))
     {if(p<0)
     {
             x0=x0+1;
            y0=y0;
            p=p+2*(x0+1)+1;
           
            putpixel ((x+x0), (y+y0),3);
            putpixel ((x+x0), (y-y0),3);
            putpixel ((x+y0), (y-x0),3);
            putpixel ((x-y0), (y-x0),3);
            putpixel ((x-x0), (y-y0),3);
            putpixel ((x-x0), (y+y0),3);
            putpixel ((x-y0), (y+x0),3);
            putpixel ((x+y0), (y+x0),3);
            }
     else
     {
            x0=x0+1;
            y0=y0-1;
            p=p+2*(x0+1)+1-2*y0-2;
            
            putpixel ((x+x0), (y+y0),3);
            putpixel ((x+x0), (y-y0),3);
            putpixel ((x+y0), (y-x0),3);
            putpixel ((x-y0), (y-x0),3);
            putpixel ((x-x0), (y-y0),3);
            putpixel ((x-x0), (y+y0),3);
            putpixel ((x-y0), (y+x0),3);
            putpixel ((x+y0), (y+x0),3);
     }}
     
};


int main( )
{
	initwindow( 640 , 480 , "WinBGIm" );
  
while(1)
{
        int x,y,x1,y1,r,a1,b1;
               if(ismouseclick(WM_LBUTTONDOWN))
            {
                  getmouseclick(WM_LBUTTONDOWN,x,y);
                  a1=x;b1=y;
                  cout<<a1<<b1;
            }
                  if(ismouseclick(WM_RBUTTONDOWN))
            {
                  getmouseclick(WM_RBUTTONDOWN,x1,y1);
                  cout<<x1<<y1<<endl;
                  int a=pow((y1-b1),2);
                  int b=pow((x1-a1),2);
                  r=sqrt(a+b);
                  cout<<a1<<b1<<r;
                  dracircle(a1,b1,r);
                  
                  }

                
        dracircle(300,300,50);
        dracircle(200,150,50);        
}

	while(!kbhit()); 
	closegraph();
	return(0);
}

