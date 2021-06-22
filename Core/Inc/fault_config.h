/*
 * Configuration file controlling which kinds of simulated USB faults to include.
 *
 *	Author: Scott Mudge
 *
 * */

#ifndef FAULT_CONFIG_H_
#define FAULT_CONFIG_H_

// Includes
//==========================================================
#include <stdint.h>

// Fault types
//==========================================================
typedef enum {
	USBFault_None,
	USBFault_SlowDataLines 		= (1 << 0),
	USBFault_RandomLongDelays	= (1 << 1),
	USBFault_LongInit					= (1 << 2)
} USBFaultType_t;


// Constants
//==========================================================
static const uint16_t c_DataLineDelayMs = 10;
static const uint16_t c_RandomLongDelayMS = 5000;
static const uint16_t c_InitDelayMS = 5000;


// Variables
//==========================================================
// Defined in main.c
extern USBFaultType_t g_ActiveFault;

#endif // FAULT_CONFIG_H_
