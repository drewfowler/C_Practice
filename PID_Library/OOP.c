#include <stdio.h>
#include "PID.h"

int main(void)
{
  PID motorPID;

  PID_Init(&motorPID,1,2,3,1,2);

  motorPID.input = 2;
}
