#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
        create_connect ();
    enable_servos ();
    while (get_create_rbump () ==0)
    {
        create_drive_direct (120,98);
        set_servo_position (0,1000);
        set_servo_position (1,1520);
    }
    create_drive_direct (0,0);
    msleep (4000);
    set_servo_position (0,1570);
    msleep (2000);
    set_servo_position (1,600);
    msleep (2000);
    set_servo_position (0,1250);
    msleep (2000);
    create_drive_direct (0,-70);
    msleep (4000);
    create_drive_direct (140,130);
    msleep (4000);
    create_drive_direct (0,0);
    msleep (4000);
    set_servo_position (0,2047);
    msleep (2000);
    set_servo_position (1,1130);
    msleep (2000);
    set_servo_position (0,1000);
    create_drive_direct (-10,-10);
    msleep (4000);
    create_drive_direct (-80,0);
    msleep (4000);
    while (get_create_rbump () ==0)
    {
        create_drive_direct (106,100);
        set_servo_position (0,1390);
        set_servo_position (1,1520);
    }
    create_drive_direct (0,0);
    msleep (4000);
    set_servo_position (1,520);
    msleep (2000);
    set_servo_position (0,1200);
    msleep (2000);
    create_drive_direct (0,-80);
    msleep (4000);
    create_drive_direct (0,0);
    msleep (4000);
    set_servo_position (0,1840);
    msleep (2000);
    set_servo_position (1,1270);
    msleep (2000);
    set_servo_position (0,1250);
    msleep (2000);
    create_stop ();
    create_disconnect ();
    return 0;
}
