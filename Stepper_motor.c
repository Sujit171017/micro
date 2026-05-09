void main()
{
TRISD = 0b0000000; // PORT D as output port
PORTD = 0b1111111;
do
{
PORTD = 0b11000000;
Delay_ms(500); // delay of 0.5s
PORTD = 0b01100000;
Delay_ms(500);
PORTD = 0b00110000;
Delay_ms(500);
PORTD = 0b10010000;
Delay_ms(500);
// energizing two phases at a time
}while(1); // loop executed infinite times
}