/************
Lab 2b: Program to convert Kilometres to meters and centimetres

Aim: 
Write a C program to convert Kilometres to meters and centimetres
Theory:
As per the equation, 1Km = 1000 meters.  So n_meteters = 1000* n
1 meter = 100 Cm.  So n_cms = 100 * n_meters
Algorithm:
1.	START
2.	Define km, cm and m as float
3.	Request user to enter the km value and Read kilometres, km, as float
4.	Calculate meters as m = 1000 * km
5.	Calculate centimetres as cm= 100*m
6.	Print m and cm as float
7.	STOP
Program:
*********/
/***********************
program to convert kilometres to meters and centimetres
Input:  km as float from keyboard
Output: meters and centimetres on the screen
Calls: None
Returns: None
***********************************************/
#include<stdio.h>
 int main()
{
float km,m,cm ;    // Define the km, meter and cm as float
	printf("enter the kilometer value:");  
	scanf("%f",&km) ;  // read input from the user
	m= 1000*km ; // convert km to meter
	cm = 100 * m ; // convert meter to centimetres
	printf("Kilemeters = %f, meters = %f and centimeters = %f\n",km,m,cm); // display results
	return 0;
}

