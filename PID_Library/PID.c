/*******************************************************************************
*
* Dynojet Research Inc.
* (c) Copyright 2015 Dynojet Research, Inc.
* ALL RIGHTS RESERVED.
*
********************************************************************************
*
* FILE NAME: SpeedMatch.c
*
* AUTHOR:    Drew Fowler
*
* DATE:      September 2018
*
*******************************************************************************/

/*******************************************************************************
*                      		I N C L U D E S
*******************************************************************************/
#include <stdio.h>
#include "PID.h"

/*******************************************************************************
*                      P R I V A T E  G L O B A L S

*******************************************************************************
*                         C O N S T A N T S
*******************************************************************************/


/*******************************************************************************
*                      		M E T H O D S
*******************************************************************************/
/*******************************************************************************
** Function name:		PID_Init
**
** Description:			Initiallizes pid values for controller
**
** Parameters:			none
** Returned value:		none
**
*******************************************************************************/
void PID_Init(PID *self, double kp,double ki,double kd,int min, int max)
{
	self->Kp = kp;
	self->Ki = ki;
	self->Kd = kd;
	self->Outmin = min;
	self->Outmax = max;
}
/*******************************************************************************
** Function name:		PID_Compute
**
** Description:			Computes the pid values
**
** Parameters:			none
** Returned value:		none
**
*******************************************************************************/
void PID_Compute(PID *self)
{
	//Find all error variables
	self->lastError = self->error;
	double input = self->input;							//Only so input can't change during compute
	self->error = self->setpoint - input;
	self->integral += self->error;
	double derivative = self->error - self->lastError;

	//Calculate PID
	self->ouput = (self->Kp*self->error) + (self->Ki * self->integral) + (self->Kd * derivative);

	//Set limits
	if(self->ouput > self->Outmax)
		self->ouput = self->Outmax;
	else if(self->ouput < self->Outmin)
		self->ouput = self->Outmin;
}
