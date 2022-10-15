#include<reg51.h>
sbit red0=P1^0;
sbit gre0=P1^1;
sbit yel0=P1^2;
sbit red1=P1^0;
sbit gre1=P1^1;
sbit yel1=P1^2;
void delay();
void traffic0 ();
void main()
{
	red0=0;
	while(1)
	{
		traffic0();
		delay();
	}
}
void traffic0 ()
{
	red0 =1;
	delay();
	gre0=1;
	delay();
	yel0=1;
	delay();
}
void traffic1 ()
{
	red1 =1;
	delay();
	gre1=1;
	delay();
	yel1=1;
	delay();
}

void delay()
{
	int i;
	for( i=0; i<1000; i++)
	{
		
	}
}
