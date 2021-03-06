#pragma config(Sensor, port2,  touchLED,       sensorVexIQ_LED)
#pragma config(Sensor, port5,  bumper,         sensorVexIQ_Touch)
#pragma config(Sensor, port8,  gyro,           sensorVexIQ_Gyro)
#pragma config(Sensor, port11, lightSensor,    sensorVexIQ_ColorGrayscale)
#pragma config(Motor,  motor7,          leftMotor,     tmotorVexIQ, PIDControl, encoder)
#pragma config(Motor,  motor12,         rightMotor,    tmotorVexIQ, PIDControl, reversed, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*------------------------------------------------------------------------------------------------
This program will drive your robot forward for a lnown distance based on motor encoder
------------------------------------------------------------------------------------------------*/

task main()
{
	while(getBumperValue(bumpSwitch) == 0)	// Instructs robot to do nothing while the touch sensor isn't pressed
	{
		//Idle Loop - Will continuously check the while loop's condition
	}

	while(getBumperValue(bumpSwitch) == 1)	// Loop while robot's bumper/touch sensor IS pressed in
	{
		setMotorSpeed(leftMotor, 50);		//Set the leftMotor (motor1) to half power (50)
		setMotorSpeed(rightMotor, 50);  //Set the rightMotor (motor6) to half power (50)
	}
}
