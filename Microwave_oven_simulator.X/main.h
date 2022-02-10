/* 
 * File:   main.h
 * Author: SANJU
 *
 * Created on 13 December, 2021, 8:09 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#define START_MODE                       0XAF

#define SUCCESS                          0XFF
#define COOKING_MODE_DISPLAY             0x01
#define MICRO_MODE                       0x02
#define GRILL_MODE                       0x03
#define CONVECTION_MODE                  0x04
#define TIME_DISPLAY                     0x05
#define STOP                             0X06
#define PAUSE                            0x07
#define START                            0X08
#define SET_TEMP                         0X09
#define SET_TIME                         0X0A
#define MODE_RESET                       0x10
#define RESET_TEMP                       0x11
#define RESET_NOTHING                    0x0F


#define FAN                              RC2
#define FAN_DDR                          TRISC2

#define DOOR                             RB3
#define DOOR_DDR                         TRISB3

#define BUZZER                           RC1
#define BUZZER_DDR                       TRISC1
#define ON                                1
#define OFF                               0
#define OPEN                              0

void power_on_screen(void);
void cooking_mode_display(void);
void clear_clcd(void);
void set_time(unsigned char key);
void time_display_screen(void);
void set_temp(unsigned char key);

#endif	/* MAIN_H */

