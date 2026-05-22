#line 1 "D:/OneDrive - University of Kelaniya/University life/Electronics and Computer Science UOK/Semester 5/BECS 31421 - Microcontrollers and Embedded Electronics Laboratory/Laboratory - 02/MyProject.c"

sbit sw at RA2_bit;

void main() {

 CMCON = 0x07;
 TRISA = 0x00;
 TRISB = 0x00;
 PORTB = 0x00 ;
 RA2_bit = 0x00 ;

 do {

 if(sw == 1 ) {

 PORTB = 0X00;
 }
 else {

 PORTB = 0XFF;
 }
 } while(1);
}
