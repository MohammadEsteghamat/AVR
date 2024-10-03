#define DDR DDRA
#define PIN PINA
#define PORT PORTA 
int key[4][3]={{1,2,3},
			   {4,5,6},
			   {7,8,9},
			   {10,0,11}};
int x,y,v;
void KeyPadInit()
{
	   DDR |= 0b01111000;
	   DDR &= 0b11111000;
	   PORT |= 0b00000111;
	   PORT &= 0b10000111;
}
int CheckPad(){
	
	if ((PIN & 0b00000111)==0b00000111)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int SearchPad()
{   int keypad;
	for(x=0;x<4;x++)
	{
		PORT |= 0b01111000;
		PORT &=~(1<<(x+3));
		for (y=0;y<3;y++)
		{   v = PIN & (1<<y) ;
			if(v==0)
			{
				keypad = key[x][y];
			}
		}
		
	}
	PORT |= 0b00000111;
	PORT &= 0b10000111;
	return keypad;
}