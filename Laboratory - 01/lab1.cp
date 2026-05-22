#line 1 "D:/OneDrive - University of Kelaniya/University life/Electronics and Computer Science UOK/Semester 5/BECS 31412 - Microcontrollers and Embedded Electronics/assignment 1/Laboratory - 01/lab1.c"
void main() {
 CMCON=0x07;
 TRISB=0x00;

 do{
 PORTB = 0xFF;
 Delay_ms(500);

 PORTB =0x00;
 Delay_ms(500);

 }
 while(1);
}
