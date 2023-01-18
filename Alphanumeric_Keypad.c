#include<reg51.h>
#include<lcd.h>

void keypad();

sbit r1=P1^0;sbit r2=P1^1;
sbit r3=P1^2;sbit r4=P1^3;//Keypad rows and coulombs
sbit c1=P1^4;sbit c2=P1^5;
sbit c3=P1^6;sbit c4=P1^7;

                                   //MAIN FUNCTION
int main()
{
int count=0;
//Display string on 16x2 lcd Row-1
char st[]={"PLEASE ENTER YOUR NAME "};
lcdinit();                         //Initialize 16x2 lcd

while(st[count]!='\0') //Display st[] string on 16x2 lcd
{
lcddata(st[count]);
if(count==16)
cmd(0xC0);
count++;
}

delay(100000);  //Delay st[] string will remain on lcd for some time
cmd(0x01);   //Clear Lcd - st[] string will vanish
cmd(0x80);   //Put string on first row of Lcd

while(1)     //Check for keystrokes 
{
keypad();
	while(1)
	{
		cmd(0x18);
		delay(10000);
	}
}

return 0;
}
                                    //DATA FUNCTION

                                   //IDENTIFYING KEYSTROKE
void keypad()
{
unsigned char c='E';
while(c=='E')
{
                    
r1=0;r2=1;r3=1;r4=1;                 //a,b,c,1
if(c1==0 && r1==0){
lcddata('a');P1=0xFE;delay(10000);
     if(c1==0 && r1==0){	 
     cmd(0x10); lcddata('b');P1=0xFE;delay(10000);
     if(c1==0 && r1==0){
     cmd(0x10); lcddata('c');P1=0xFE;delay(10000);
     if(c1==0 && r1==0){
     cmd(0x10); lcddata('1');P1=0XFE;delay(10000);
                                                  }
                                  }
                       }
  P1=0xFF; 
                  }

r1=0;r2=1;r3=1;r4=1;	              //d,e,f,2
if(c2==0 && r1==0){
lcddata('d');P1=0xFE;delay(10000);
     if(c2==0 && r1==0){
     cmd(0x10); lcddata('e');P1=0xFE;delay(10000);
     if(c2==0 && r1==0){
     cmd(0x10); lcddata('f');P1=0xFE;delay(10000);
     if(c2==0 && r1==0){
     cmd(0x10); lcddata('2');P1=0xFE;delay(10000);
                                                  }
                                    }
                       } 
   P1=0xFF;
                  }

r1=0;r2=1;r3=1;r4=1;                  //g,h,i,3
if(c3==0 && r1==0){
lcddata('g');P1=0xFE;delay(10000);
     if(c3==0 && r1==0){
     cmd(0x10); lcddata('h');P1=0xFE;delay(10000);
     if(c3==0 && r1==0){
     cmd(0x10); lcddata('i');P1=0xFE;delay(10000);
     if(c3==0 && r1==0){
     cmd(0x10); lcddata('3');P1=0xFE;delay(10000);
                                                  }
                                    }
                       }	
   P1=0xFF;
                  }

                                        //crs_mov_bck
r1=0;r2=1;r3=1;r4=1;
if(c4==0 && r1==0){
     cmd(0x10);P1=0xFE;delay(10000);                    
      P1=0xFF;
                  }

r1=1;r2=0;r3=1;r4=1;                  //j,k,l,4
if(c1==0 && r2==0){
lcddata('j');P1=0xFD;delay(10000);
     if(c1==0 && r2==0){
     cmd(0x10); lcddata('k');P1=0xFD;delay(10000);
     if(c1==0 && r2==0){
     cmd(0x10); lcddata('l');P1=0xFD;delay(10000);
     if(c1==0 && r2==0){
     cmd(0x10); lcddata('4');P1=0xFD;delay(10000);
                                                  }
                                    }
                       }	
    P1=0xFF;
                  }
                                       
r1=1;r2=0;r3=1;r4=1;									//m,n,o,5
if(c2==0 && r2==0){
lcddata('m');P1=0xFD;delay(10000);
     if(c2==0 && r2==0){
     cmd(0x10); lcddata('n');P1=0xFD;delay(10000);
     if(c2==0 && r2==0){
     cmd(0x10); lcddata('o');P1=0xFD;delay(10000);
     if(c2==0 && r2==0){
     cmd(0x10); lcddata('5');P1=0xFD;delay(10000);
                                                  }
                                    }
                       }	
    P1=0xFF;
                  }
                                       
 r1=1;r2=0;r3=1;r4=1;									//p,q,r,6
if(c3==0 && r2==0){
lcddata('p');P1=0xFD;delay(10000);
     if(c3==0 && r2==0){
     cmd(0x10); lcddata('q');P1=0xFD;delay(10000);
     if(c3==0 && r2==0){
     cmd(0x10); lcddata('r');P1=0xFD;delay(10000);
     if(c3==0 && r2==0){
     cmd(0x10); lcddata('6');P1=0xFD;delay(10000);
                                                  }
                                    }
                       }	
    P1=0xFF;
                  }

                                       //crs_mov_fwr
r1=1;r2=0;r3=1;r4=1;
if(c4==0 && r2==0){
     cmd(0x14);P1=0xFD;delay(10000);	
       P1=0xFF;
                  }
                                        
r1=1;r2=1;r3=0;r4=1;									//s,t,u,7
if(c1==0 && r3==0){
lcddata('s');P1=0xFB;delay(10000);
     if(c1==0 && r3==0){
     cmd(0x10); lcddata('t');P1=0xFB;delay(10000);
     if(c1==0 && r3==0){
     cmd(0x10); lcddata('u');P1=0xFB;delay(10000);
     if(c1==0 && r3==0){
     cmd(0x10); lcddata('7');P1=0xFB;delay(10000);
                                                  }
                                    }
                       }	
     P1=0xFF;
                  }
                                        
r1=1;r2=1;r3=0;r4=1;									//v,w,x,8
if(c2==0 && r3==0){
lcddata('v');P1=0xFB;delay(10000);
     if(c2==0 && r3==0){
     cmd(0x10); lcddata('w');P1=0xFB;delay(10000);
     if(c2==0 && r3==0){
     cmd(0x10); lcddata('x');P1=0xFB;delay(10000);
     if(c2==0 && r3==0){
     cmd(0x10); lcddata('8');P1=0xFB;delay(10000);
                                                  }
                                    }
                       }	 
      P1=0xFF;
                  }
                                         
r1=1;r2=1;r3=0;r4=1;									//y,z,9
if(c3==0 && r3==0){
lcddata('y');P1=0xFB;delay(10000);
     if(c3==0 && r3==0){
     cmd(0x10); lcddata('z');P1=0xFB;delay(10000);
     if(c3==0 && r3==0){
     cmd(0x10); lcddata('9');P1=0xFB;delay(10000);
                                    }
                       }	 
      P1=0xFF;
                  }

r1=1;r2=1;r3=0;r4=1;									//crs_mov
if(c4==0 && r3==0){
     cmd(0x18);P1=0xFB;delay(10000);
				P1=0xFF;
                  }								
                                        
                                       
r1=1;r2=1;r3=1;r4=0;								 //#
if(c1==0 && r4==0){
lcddata('#');P1=0xF7;delay(10000);	
        P1=0xFF;
                  }
                        
r1=1;r2=1;r3=1;r4=0;									//0,_," "
if(c2==0 && r4==0){
lcddata('0');P1=0xF7;delay(10000);
     if(c2==0 && r4==0){
     cmd(0x10); lcddata('_');P1=0xF7;delay(10000);
     if(c2==0 && r4==0){
     cmd(0x10); lcddata(' ');P1=0xF7;delay(10000);
                                    }
                       }	
       P1=0xFF;
                  }									
                                        
r1=1;r2=1;r3=1;r4=0;									//*
if(c3==0 && r4==0){
lcddata('*');P1=0xF7;delay(10000);
         P1=0xFF;
                  }

r1=1;r2=1;r3=1;r4=0;									//rot_scr
if(c4==0 && r4==0)
	{
		c='e';
		P1=0xFF;delay(10000);
	}
	

 }
}