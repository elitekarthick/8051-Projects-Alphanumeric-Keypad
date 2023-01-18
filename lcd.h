void cmd(char c);

void delay(int num);

void lcdinit();

void lcddata(char c);

sfr dataport=0xA0;        //16x2 lcd connected to port-2
sbit rs=P3^7;sbit rw=P3^5;
sbit en=P3^6;

void lcddata(char c)
{
dataport=c;
rw=0;                
rs=1;               
en=1;
delay(50);       
en=0;
delay(50);
}
                                   //COMMAND FUNCTION
void cmd(char c)
{
dataport=c;
rw=0;        
rs=0;       
en=1;
delay(50);     
en=0;
delay(50);
}

void delay(int num)
{
unsigned int i,j;
for(i=0;i< num;i++)
for(j=0;j<0x05;j++);
}
                                   //LCD INITIALIZATION
void lcdinit()
{
delay(15000);cmd(0x30);
delay(4500); cmd(0x30);
delay(300);  cmd(0x30);
delay(600);  cmd(0x38);
cmd(0x0F);   cmd(0x01);
cmd(0x06);   cmd(0x80);
dataport=0x00;
P1=0xFF;
P3=0x00;
}