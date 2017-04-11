#include <stdio.h>
#include <iostream>
#include <graphics.h>
using namespace std;

int main( )
{
int xmin=100,ymin=100,xmax=300,ymax=300;
int x1=0,y1=0,x2=350,y2=250;
int p[4],q[4];
int i,a1,a2,b1,b2;
float u1,u2,u[4];
	initwindow( 640 , 480 , "WinBGIm" );
    setcolor(RED);
	rectangle(xmin,ymin,xmax,ymax);
	line(x1,y1,x2,y2);
	
	int dx=x2-x1;
	int dy=y2-y1;
	p[0]=-dx;
	p[1]=dx;
	p[2]=-dy;
	p[3]=dy;
	
	q[0]=x1-xmin;
	q[1]=xmax-x1;
	q[2]=y1-ymin;
	q[3]=ymax-y1;
	
	for(i=0;i<4;i++){ 
		if(p[i]!=0){
			u[i]=(float)q[i]/p[i];
		}
		else
			if(p[i]==0 && q[i]<0)
				cout<<"line is completely outside the window";
			else
				if(p[i]==0 && q[i]>=0)
					cout<<"line is completely inside the window";
	}
	if (u[0]>u[2]){
		u1=u[0];
	}
	else{
		u1=u[2];
	}
	if (u[1]<u[3]){
		u2=u[1];
	}
	else{
		u2=u[3];
	}
	if (u1<u2){
		a1=x1+u1*dx;
		a2=x1+u2*dx;
		b1=y1+u1*dy;
		b2=y1+u2*dy;
		cout<<"line after clipping:";
		setcolor(WHITE);
		line(a1,b1,a2,b2);
	}
	else{
		cout<<"line lies out of the window";
	}
	while( !kbhit() ); 
	closegraph( );
	return( 0 );
}
