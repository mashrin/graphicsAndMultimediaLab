//Colour Picker and Boundary filling algorithm
#include <stdio.h>
#include <iostream>
#include<math.h>
#include <graphics.h>

using namespace std;
void boundaryFill(int x, int y, int fillColor, int borderColor) 
{  
  int col=getpixel(x, y);
  if ((col != borderColor) && (col != fillColor))
 {
	putpixel(x,y,fillColor);
	boundaryFill(x+1,y,fillColor,borderColor);
	boundaryFill(x-1,y,fillColor,borderColor);
	boundaryFill(x,y+1,fillColor,borderColor);
	boundaryFill(x,y-1,fillColor,borderColor);
  }
};

void dracircle(int x,int y, int r)
{
     int x0=0,y0=r,p=0;
     p=(5/4-r);
                 putpixel (x, (y+r),3);
            putpixel ((x+r), y,3);
            putpixel (x, (y-r),3);
            putpixel ((x-r), y,3);
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
void palfil(int b)
{
 
      int i=0,j=0,a=0,k=0;
            for(i=0;i<256;i++)
            {
                              for(j=0;j<256;j++)
                              {
                                                a=COLOR(j,i,b);
                                                putpixel(j,i,a);
                                  }
            }
            for(k=0;k<256;k++)
            {
                      a=COLOR(0,0,k);
                      putpixel(300,k,a);
                      putpixel(301,k,a);
                      putpixel(302,k,a);
                      putpixel(303,k,a);        
            }
 
     
 };
int main( )
{
	initwindow( 640 , 480 , "WinBGIm" );
	palfil(0);
	while(1)
    {
         int x,y,x1,y1;       
        dracircle(350,400,50);
        if(ismouseclick(WM_RBUTTONDOWN))
            {
                  getmouseclick(WM_RBUTTONDOWN,x1,y1);
                  int yc=COLOR(x,y,y1);
                  palfil(y1);
                  }
         if(ismouseclick(WM_LBUTTONDOWN))
            {
                  getmouseclick(WM_LBUTTONDOWN,x,y);
                  int xc=COLOR(x,y,y1);
                  boundaryFill(350, 400, xc, 3);
            }
}
	while(!kbhit()); 
	closegraph();
	return(0);
}
