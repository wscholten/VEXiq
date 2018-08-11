#pragma config(Sensor, port2,  LedLight,       sensorVexIQ_LED)
#pragma config(Sensor, port5,  rightbump,      sensorVexIQ_Touch)
#pragma config(Sensor, port8,  gyroSensor,     sensorVexIQ_Gyro)
#pragma config(Sensor, port11, colorDetector,  sensorVexIQ_ColorGrayscale)
#pragma config(Motor,  motor7,          left,          tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor12,         right,         tmotorVexIQ, PIDControl, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	int Sensor=0;
	while(1==1)
	{
		Sensor=SensorValue[rightbump];
		if(Sensor>0)
		{
			playSound(soundCarAlarm2);
			setMotorSpeed(left,0);
			setMotorSpeed(right,0);
			setTouchLEDHue(LedLight,0);
			wait1Msec(3000);
		}
		else
		{
			setMotorSpeed(left,(vexRT[ChB]+vexRT[ChA]));
			setMotorSpeed(right,(vexRT[ChD]-vexRT[ChC]));
			setTouchLEDHue(LedLight,355);
		}
	}
}
