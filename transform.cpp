//Use animation to transform a triangle into a rectangle.

#include <stdio.h>
#include <iostream>
#include <graphics.h>

using namespace std;
void dtri()
{
    line(100,200,200,200);
	line(150,100,200,200);
	line(100,200,150,100);
	/* a
	  b c 
	  a=150,100
	  b=100,200
	  c=200,200
	  d=175,150;
    */
     }
     void dsq(){
    line(400,200,500,200);
    line(400,200,400,100);
    line(500,200,500,100);
    line(400,100,500,100);
	/* a b
	   c d 
	  a=400,100
	  b=500,100
	  c=400,200
	  d=500,200
    */
          }
          void drawline()
          {
                   line(150,100,400,100);
    line(100,200,400,200);
    line(200,200,500,200);
    line(175,150,500,100);
           }
           
           void delay()
           { for(int j=0;j<1000;j++)
           {
                     for(int k=0;k<1000;k++);}
           }
int main( )
{
      initwindow( 640 , 480 , "WinBGIm" );

    dtri();
    dsq();
    int lk,lk1,lmax,lmin,ne,ns;
    if(lk>lk1)
    {
              lmax=lk;
              lmin=lk1;
    }
    else 
    {
         lmin=lk;
         lmax=lk1;
    }
    ne=lmax%lmin;
    ns=lmax/lmin;
    float x1=150,x2=200,y1=100,y2=200;
    float x,y,u;
    u=0.5;
    x=x1+u*(x2-x1);
    y=y1+u*(y2-y1);
    line(x,y,500,100);
    cout<<x<<y;
    u=0;
    int xa1=150,xa2=400,ya1=100,ya2=100,xa,ya;
    int xb1=100,xb2=400,yb1=200,yb2=200,xb,yb;
    int xc1=200,xc2=500,yc1=200,yc2=200,xc,yc;
    int xd1=175,xd2=500,yd1=150,yd2=100,xd,yd;
    float xp0=xa1,yp0=ya1,xp2=xa2,yp2=ya2,xp1=xa1+(xa2-xa1)/2,yp1=ya1-50; 
    float xp0b=xb1,yp0b=yb1,xp2b=xb2,yp2b=yb2,xp1b=xb1+(xb2-xb1)/2,yp1b=yb1-50; 
    float xp02=xd1,yp02=yd1,xp22=xd2,yp22=yd2,xp12=xd1+(xd2-xd1)/2,yp12=yd1-50;
    float xp03=xc1,yp03=yc1,xp23=xc2,yp23=yc2,xp13=xc1+(xc2-xc1)/2,yp13=yc1-50;
    	
    for(int i=0;i<1000;i++)
    {
            xa=xa1+u*(xa2-xa1);
            ya=ya1+u*(ya2-ya1);
            xb=xb1+u*(xb2-xb1);
            yb=yb1+u*(yb2-yb1);
            xc=xc1+u*(xc2-xc1);
            yc=yc1+u*(yc2-yc1);
            xd=xd1+u*(xd2-xd1);
            yd=yd1+u*(yd2-yd1);
           cleardevice();
	float xr0,xr1,xr2;
	float xq0,xq1;
    int xx0;
	float yr0,yr1,yr2,yr3;
	float yq0,yq1;
    int yx0;
    float xq0a,yq0a,xq0b,yq0b,xq0c,yq0c,xq0d,yq0d;
	float t=u;
	xr0=xp0*(1-t)+xp1*t;
	xr1=xp1*(1-t)+xp2*t;
	yr0=yp0*(1-t)+yp1*t;
	yr1=yp1*(1-t)+yp2*t;
	xq0a=xr0*(1-t)+xr1*t;
	yq0a=yr0*(1-t)+yr1*t;
   	xr0=xp0b*(1-t)+xp1b*t;
	xr1=xp1b*(1-t)+xp2b*t;
	yr0=yp0b*(1-t)+yp1b*t;
	yr1=yp1b*(1-t)+yp2b*t;
	xq0b=xr0*(1-t)+xr1*t;
	yq0b=yr0*(1-t)+yr1*t;
	 xr0=xp02*(1-t)+xp12*t;
	xr1=xp12*(1-t)+xp22*t;
	yr0=yp02*(1-t)+yp12*t;
	yr1=yp12*(1-t)+yp22*t;
	xq0d=xr0*(1-t)+xr1*t;
	yq0d=yr0*(1-t)+yr1*t;
	xr0=xp03*(1-t)+xp13*t;
	xr1=xp13*(1-t)+xp23*t;
	yr0=yp03*(1-t)+yp13*t;
	yr1=yp13*(1-t)+yp23*t;
	xq0c=xr0*(1-t)+xr1*t;
	yq0c=yr0*(1-t)+yr1*t;
    	line(xq0a,yq0a,xq0b,yq0b);       
    	line(xq0b,yq0b,xq0c,yq0c);         
	line(xq0a,yq0a,xq0d,yq0d);
	line(xq0d,yq0d,xq0c,yq0c);
            dtri();
            dsq();
            delay();
           u=u+0.001;
            }
	while( !kbhit() ); 
	closegraph( );
	return( 0 );
}
