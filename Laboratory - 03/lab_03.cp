#line 1 "D:/OneDrive - University of Kelaniya/University life/Electronics and Computer Science UOK/Semester 5/BECS 31421 - Microcontrollers and Embedded Electronics Laboratory/Laboratory - 03/lab_03.c"


void knightrider(void) {
 int i;


 PORTB = 0x01;

 for (i = 1; i <= 7; i++) {
 Delay_ms(100);
 PORTB = (PORTB << 1);


 }

 for (i = 7; i >=1; i--) {
 Delay_ms(100);
 PORTB = (PORTB >>1);


 }
}
void main() {

 CMCON = 0x07;
 TRISB = 0x00;
 TRISA = 0x00;
 PORTB = 0x00 ;

 while (1) {
 knightrider();
 }
}
