
/*******************************************************************************
*
* Dynojet Research Inc.
* (c) Copyright 2015 Dynojet Research, Inc.
* ALL RIGHTS RESERVED.
*
********************************************************************************
*
* FILE NAME: PID.h
*
* AUTHOR:    Drew Fowler
*
* DATE:      August 2018
*
*******************************************************************************/
#ifndef PID_H_
#define PID_H_

/*******************************************************************************
*                      		I N C L U D E S
*******************************************************************************/

/*******************************************************************************
*                      S T R U C T U R E S
*******************************************************************************/
typedef struct PIDvars {
	double input,setpoint,ouput;
	double Kp,Ki,Kd;
	int Outmax,Outmin;
	double error,integral,derivative;
	double lastError,lastInput;
} PID;

/*******************************************************************************
*                      	 D E F I N I T I O N S
*******************************************************************************/

/*******************************************************************************
*                      P U B L I C   M E T H O D S
*******************************************************************************/
void PID_Init(PID *self, double kp,double ki,double kd,int min, int max);
void PID_Compute(PID *self);
#endif /* PID_H_ */
