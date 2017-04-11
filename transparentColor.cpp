//Transparency

#include <stdio.h>
#include <iostream>
#include <graphics.h>
using namespace std;
int main( )
{
	initwindow( 640 , 480 , "WinBGIm" );
	
	int xa=0,xi=0,yi=0,x,y;
    	float t=0.5;
    	float ya=0;
	rectangle(150,100,250,200);
	for(int i=0;i<=100;i++){
            for(int j=0;j<=100;j++){
                    x=150+i;
                    y=100+j;
                    putpixel(150+i,100+j,3);
                    xi=getpixel(x,y);
                    }
                    }
	    rectangle(200,150,300,250);
	    for(int i=0;i<=100;i++){
		    for(int j=0;j<=100;j++){
		            x=200+i;
		            y=150+j;
		            putpixel(200+i,150+j,5);
		            yi=getpixel(x,y);
		            
		            if(x>=150 && x<=250 && x>=200 && x<=300 && y>=150 && y<=250 && y>=100 && y<=200)
		            {
		                     ya=xi*(1-t)+t*yi;
		                     //ya=t*y;
		                     putpixel(x,y,ya);
		                     }}
		            }

	while( !kbhit() ); 
	closegraph( );    
	return(0);
}
