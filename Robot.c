

task main() {
  SensorType[S1] = sensorTouch;
	SensorType[S3] = sensorColorNxtFULL;

}


void robotdraw( double & p, double time) // assuming this robot starts drawing from the top middle position of the box
{
    motor [ motorA ] = -p; // motorA for Horizontal movement and motorC for vertical
    motor [ motorC ] = -p;
    wait1Msec (time);
    
    motor [ motorA ] = p;
    motor [ motorC ] = -p;
    wait1Msec (time);
    
    motor [ motorA ] = p;
    motor [ motorC ] = p;
    wait1Msec (time );
    
    motor [ motorA ] = -p;
    motor [ motorC ] = p;
    wait1Msec (time);
    
    motor [ motorA ] = 0;
    motor [ motorC ] = 0;
    
}


void checkarr ( double power, double time)
{
    int response; 
    motor [ motorA ] = power;
    wait1Msec (250) ;
    if ( SensorType [ S3] = BLACKCOLOR )
      response = 1; 
    else  
      response = 0; 
    
}

