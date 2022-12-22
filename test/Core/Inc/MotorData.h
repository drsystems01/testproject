/*
 * MotorData.h
 *
 *  Created on: 15 déc. 2022
 *      Author: setup game
 */

#ifndef INC_MOTORDATA_H_
#define INC_MOTORDATA_H_

typedef struct MotorData MotorData ;
struct MotorData {
				unsigned char on_off;
				DirectionType direction ;
				unsigned int speed ;
				unsigned char errorStatus;
				unsigned char noPowerError;
				unsigned char noTorqueError;
				unsigned  char BITError;
				unsigned char overTemperatureError;
				unsigned char reservedError1 ;
				unsigned char reservedError2;
				unsigned char unknowError;
			};





#endif /* INC_MOTORDATA_H_ */
