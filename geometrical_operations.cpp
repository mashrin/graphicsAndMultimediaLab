//Transformation, scaling and rotation

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <graphics.h>

using namespace std;
void trans(int xt,int yt)
{
     int i=0,x=100,y=100,x1,y1;
     for(i=0;i<50;i++){
                      x1=x+xt;
                      y1=y+yt;
                      putpixel(x1,y1,4);
                      x++;
                      y++;
                      }
     		      x=150;y=150;
                      for(i=0;i<50;i++){
                      x1=x+xt;
                      y1=y+yt;
                      putpixel(x1,y1,4);
                      x++;
                      y--;
                      }
       		      x=200,y=100;
                      for(i=0;i<100;i++){
                      x1=x+xt;
                      y1=y+yt;
                      putpixel(x1,y1,4);
                      x--;
                      }};

void scal(int sx,int sy,int xf,int yf)
{
    
     int i=0,x=100,y=100,x1,y1;
     for(i=0;i<50;i++){
                      x1=x*sx+xf*(1-sx);
                      y1=y*sy+yf*(1-sy);
                      putpixel(x1,y1,4);
                      x++;
                      y++;
                      }
     		      x=150;y=150;
                      for(i=0;i<50;i++){
                      x1=x*sx+xf*(1-sx);
                      y1=y*sy+yf*(1-sy);
                      putpixel(x1,y1,4);
                      x++;
                      y--;
                      }
		      x=200,y=100;
                      for(i=0;i<100;i++){
                      x1=x*sx+xf*(1-sx);
                      y1=y*sy+yf*(1-sy);
                      putpixel(x1,y1,4);
                      x--;
                      }};
void rot(int th)
{
      	float pi=3.142;
    	int x1=100,y1=100,x2=150,y2=150;
        x1=x1*cos(pi*th/180)+y1*sin(pi*th/180);
        y1=y1*cos(pi*th/180)-x1*sin(pi*th/180);
        x2=x2*cos(pi*th/180)+y2*sin(pi*th/180);
        y2=y2*cos(pi*th/180)-x2*sin(pi*th/180);
    	line(x1,y1,x2,y2);
     	x1=150,y1=150,x2=200,y2=100;
        x1=x1*cos(pi*th/180)+y1*sin(pi*th/180);
        y1=y1*cos(pi*th/180)-x1*sin(pi*th/180);
        x2=x2*cos(pi*th/180)+x2*sin(pi*th/180);
        y2=y2*cos(pi*th/180)-x2*sin(pi*th/180);
	line(x1,y1,x2,y2);
      	x1=200,y1=100,x2=100,y2=100;
        x1=x1*cos(pi*th/180)+y1*sin(pi*th/180);
        y1=y1*cos(pi*th/180)-x1*sin(pi*th/180);
        x2=x2*cos(pi*th/180)+x2*sin(pi*th/180);
        y2=y2*cos(pi*th/180)-x2*sin(pi*th/180);
    	line(x1,y1,x2,y2);
                    /*  x=150;y=150,xc=150,yc=150;
                      for(i=0;i<50;i++)
     {
                      x1=x*cos(pi*th/180)+y*sin(pi*th/180);
                      cout<<x1<<endl;
                      y1=y*cos(pi*th/180)-x*sin(pi*th/180);
                      cout<<y1<<endl;
                      putpixel(x1,y1,4);
                      x++;
                      y++;
                      }
     
       x=200,y=100,xc=200,yc=100;
                      for(i=0;i<100;i++)
     {
                      x1=x*cos(pi*th/180)+y*sin(pi*th/180);
                      cout<<x1<<endl;
                      y1=y*cos(pi*th/180)-x*sin(pi*th/180);
                      cout<<y1<<endl;
                      putpixel(x1,y1,4);
                      x++;
                      y++;
                      } */
 };
 
int main( )
{
	initwindow( 640 , 480 , "WinBGIm" );
    	
    	while(1)
    	{
	//triangle
    	line(100,100,150,150 );
	line(150,150,200,100);
	line(200,100,100,100 );
  
      /* rectangle( 540, 430, 580, 450 );
    rectangle( 540, 400, 580, 420 );
    rectangle( 540, 370, 580, 390 );
  
     int x,y,x1,y1,r,a1,b1;
               if(ismouseclick(WM_LBUTTONDOWN))
            {
                  getmouseclick(WM_LBUTTONDOWN,x,y);
                 if(430<y<450 && 540<x<580)
                 {
                              //cleardevice();
                              trans();
                 }
                              else if(400<y<420 && 540<x<580)
                 {
                              //cleardevice();
                              rot();
                              }
                               else if(370<y<390 && 540<x<580)
                 {
                              //cleardevice();
                              scal();
                              }
            }*/
int no,th,xt,yt,xf,yf;
cout<<"Enter the number according to the operation"<<endl;
cin>>no;
if(no==1)
{
         cout<<"Enter the amount you want to increment x and y by "<<endl;
         cin>>xt>>yt;
         trans(xt,yt);
         }
    

if(no==2)
{
         cout<<"Enter the angle you want to rotate by and the point"<<endl;
         cin>>th;
         rot(th);
         }
if(no==3)
{
         cout<<"Enter the amount you want to scale x and y by "<<endl;
         cin>>xt>>yt;
         cout<<"Enter the fixed point to scal along"<<endl;
         cin>>xf>>yf;
         scal(xt,yt,xf,yf);
         }    
} 
	while(!kbhit());
	closegraph();    
	return(0);
}
