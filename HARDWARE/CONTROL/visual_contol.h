#ifndef _CIRCLE_H_
#define	_CIRCLE_H_

#include "stm32f4xx.h"



 typedef struct
{
 int x,y,z;
 int x_flp,y_flp;
 u8 check;
 u8 connect,lose_cnt;
 int control[2];
 u16 r;
 float control_k_miss,control_k;
	float control_yaw;
	float forward;
	float forward_end_dj_pwm;
	u8 dj_fly_line;
	float pit,rol,yaw;
}CIRCLE;


 typedef struct
{
 int x,y;
 int x_flp,y_flp;
 u8 check;
 u8 connect,lose_cnt;
 int control[2];
 
 int pos_set[2];
 int pos_now[2];
 int angle[3];
 int Yaw_marker;
		float ero_m[2];
	float target_speed_m[2];
}MARKER;

extern CIRCLE circle,track;
extern MARKER marker;
extern float nav_circle[2],d_flow_watch[2];;
extern void circle_control(float T);
extern float Yaw_DJ,Pitch_DJ;	
#define MID_Y 152-40+14
#define MID_X 182+60-38
extern u16 Rc_Pwm_Out_mine[8];
void AUTO_LAND_FLYUP(float T);
extern float nav_land[3];
extern u8 state_v;
extern u8 mode_change;
#endif