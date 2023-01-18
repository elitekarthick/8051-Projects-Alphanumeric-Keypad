# 8051-Projects-Alphanumeric-Keypad
Interfacing Alphanumeric keypad (4x4 Matrix) and Scroll the typed Text
Pins configuration
  datapins are connected to p2 ports 
  matrix pins are connected to p1 ports
  register, read & write, enable pins are connected into p3 ports
  
Pins connections
  ie:if we pressed row1 column1 pin to we get like an outputs a,b,c and 1 also
  
command codes and matrix keypad (4X4)
  rows are r1,r2,r3,r4 and columns are c1,c2,c3,c4
  //r1,c1 - a,b,c,1   //r1,c2 - d,e,f,2   //r1,c3 - g,h,i,3   //r1,c4 - cursor move backward
  //r2,c1 - j,k,l,4   //r2,c2 - m,n,o,5   //r2,c3 - p,q,r,6   //r2,c4 - cursor move forward
  //r3,c1 - s,t,u,7   //r3,c2 - v,w,x,8   //r3,c3 - y,z,9     //r3,c4 - cursor forward single move 
  //r4,c1 - #         //r4,c2 - 0,_," "   //r4,c3 - *         //r4,c4 - display rotation

Video Link: https://youtu.be/qOfnWfn8CGo
