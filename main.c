#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    motor(1,60);   
    motor(2,100);
    msleep(1500);
    
    motor(1,100);
    motor(2,100);
    msleep(1600); 
    
    motor(1,100); 
    motor(2,0);
    msleep(2200);
    
    motor(1,100);  
    motor(2,100);
    msleep(1000);
    
    motor(1,100); 
    motor(2,-100);
    msleep(200);
    
    motor(1,100);
    motor(2,70);
    msleep(3200);
    
    motor(1,-100);
    motor(2,100);
    msleep(500);
    
    motor(1,100);
    motor(2,100);
    msleep(800);
    
    motor(1,0);
    motor(2,100);
    msleep(1300);
    
    motor(1,100);
    motor(2,100);
    msleep(3300);
    
    motor(1,100);
    motor(2,-100);
    msleep(750);
    
    motor(1,100);                                                                   //i hate this lord help me
    motor(2,75);
    msleep(3750);
    
    motor(1,-100);
    motor(2,-75);
    msleep(2700);
    
    motor(1,100);
    motor(2,-100);
    msleep(570);
    
    motor(1,100);
    motor(2,35);
    msleep(1275);
     
    motor(1,100);
    motor(2,100);
    msleep(6500);
    
    motor(1,0);
    motor(2,100);
    msleep(1000);
    
    
    return 0;
}
