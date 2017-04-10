#include <stdio.h>
#include <iostream>
#include <graphics.h>
using namespace std;
void drawcurve(float xp0,float yp0,float xp1, float yp1,float xp2, float yp2,float xp3, float yp3)
{
     	
	float xr0,xr1,xr2;
	float xq0,xq1;
    	int xx0;
	float yr0,yr1,yr2,yr3;
	float yq0,yq1;
    	int yx0;
	float t=0.001;
	line(xp0,yp0,xp1,yp1);
	line(xp1,yp1,xp2,yp2);
	line(xp2,yp2,xp3,yp3);
	
	for(int i=0;i<1000;i++)
	{
      
	xr0=xp0*(1-t)+xp1*t;
	xr1=xp1*(1-t)+xp2*t;
	xr2=xp2*(1-t)+xp3*t;
	
	yr0=yp0*(1-t)+yp1*t;
	yr1=yp1*(1-t)+yp2*t;
	yr2=yp2*(1-t)+yp3*t;

	xq0=xr0*(1-t)+xr1*t;
	xq1=xr1*(1-t)+xr2*t;

	yq0=yr0*(1-t)+yr1*t;
	yq1=yr1*(1-t)+yr2*t;

	xx0=xq0*(1-t)+xq1*t;
	yx0=yq0*(1-t)+yq1*t;
	
	putpixel(xx0,yx0,CYAN);
	t=t+0.001;  
	}
 }
void drawquadcurve(float xp0,float yp0,float xp1, float yp1,float xp2, float yp2)
{
     	
	float xr0,xr1,xr2;
	float xq0,xq1;
    	int xx0;
	float yr0,yr1,yr2,yr3;
	float yq0,yq1;
    	int yx0;
	float t=0.001;
	line(xp0,yp0,xp1,yp1);
	line(xp1,yp1,xp2,yp2);
	
	for(int i=0;i<1000;i++)
	{
      
	xr0=xp0*(1-t)+xp1*t;
	xr1=xp1*(1-t)+xp2*t;
	
	yr0=yp0*(1-t)+yp1*t;
	yr1=yp1*(1-t)+yp2*t;

	xq0=xr0*(1-t)+xr1*t;

	yq0=yr0*(1-t)+yr1*t;

	
	putpixel(xq0,yq0,RED);
    	t=t+0.001;  
	}

	line(xp0,yp0,xp1,yp1);
	line(xp1,yp1,xp2,yp2);
 }

int main( )
{
       	initwindow( 640 , 480 , "WinBGIm" ); 
	int px0=100,py0=400,px1=200,py1=200,px2=300,py2=200,px3=400,py3=400;             
	drawcurve(px0,py0,px1,py1,px2,py2,px3,py3);
   	drawquadcurve(200,200,300,100,400,200);

	int x,y,x0=100,y0=400;    int flag=0;
	while(1){
	if(ismouseclick(WM_LBUTTONDOWN))
            {
                getmouseclick(WM_LBUTTONDOWN,x0,y0);
                {
		if(x0==100 && y0==400)
                 flag=0;
                 else if(x0==200 && y0==200)
                 flag=1;
                 else if(x0==300 && y0==200)
                 flag=2;
                 else if(x0==400 && y0==400)
                 flag=3;
                }}
	if(ismouseclick(WM_RBUTTONDOWN))
            {
                 getmouseclick(WM_RBUTTONDOWN,x,y); 
                 {
                 cout<<x<<y;
                 cleardevice();
                 if(flag==0){
                 	drawcurve(x,y,px1,py1,px2,py2,px3,py3);
	                px0=x;py0=y;}
                        else if(flag==1){
		         drawcurve(px0,py0,x,y,px2,py2,px3,py3); 
		         px1=x;py1=y;}
                         else if(flag==2){
		         drawcurve(px0,py0,px1,py1,x,y,px3,py3);
		         px2=x;py2=y;}
		         else if(flag==3){
		         drawcurve(px0,py0,px1,py1,px2,py2,x,y);   
		         px3=x;py3=y;}
		         }}
	}
	while(!kbhit()); 
       
	closegraph();
    	return(0);
}
