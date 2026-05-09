// PIC16F877A Servo Motor Control
// mikroC Code
// Crystal = 8MHz

void servo_0()
{
   unsigned int i;

   for(i = 0; i < 50; i++)
   {
      PORTB.F0 = 1;
      Delay_us(600);

      PORTB.F0 = 0;
      Delay_us(19400);
   }
}

void servo_90()
{
   unsigned int i;

   for(i = 0; i < 50; i++)
   {
      PORTB.F0 = 1;
      Delay_us(1500);

      PORTB.F0 = 0;
      Delay_us(18500);
   }
}

void servo_180()
{
   unsigned int i;

   for(i = 0; i < 50; i++)
   {
      PORTB.F0 = 1;
      Delay_us(2400);

      PORTB.F0 = 0;
      Delay_us(17600);
   }
}

void main()
{
   TRISB.F0 = 0;   // RB0 Output
   PORTB.F0 = 0;

   while(1)
   {
      servo_0();      // 0 degree
      Delay_ms(2000);

      servo_90();     // 90 degree
      Delay_ms(2000);

      servo_180();    // 180 degree
      Delay_ms(2000);
   }
}