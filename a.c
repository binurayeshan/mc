void main() {
unsigned long volt;
unsigned long new_volt;

 TRISD=0;
 TRISA=1;

 while(1)
 {
  PORTD=0;
  volt=Adc_Read(0);
  new_volt=(volt*5000)/1024;
    if(new_volt >= 0 && new_volt <= 1000) //between 0 - 1 V
  {
   PORTD.RD0=1; // D1 LED lights up.
  }
  else if(new_volt > 1000 && new_volt <= 2000) //between 1 - 2 V
  {
    PORTD.RD1=1; //D2 LED lights up
  }
  else if(new_volt > 2000 && new_volt <= 3000) //between 2 - 3 V
  {
    PORTD.RD2=1;  //D3 LED lights up
  }
  else if(new_volt > 3000 && new_volt <= 4000) //between 3 - 4 V
  {
    PORTD.RD3=1;  //D4 LED lights up
  }
  else if(new_volt > 4000 && new_volt <= 5000) //between 4 - 5 V
  {
    PORTD.RD4=1; //D5 LED lights up
  }
  Delay_ms(10);

 }

}