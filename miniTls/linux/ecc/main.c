#include "ecc.h"
#include <stdio.h>
//#include <stdint.h>


 //Base Point X Coordinate
static uint8_t ec_base_X[] = {
	0x6B,0x17,0xD1,0xF2,0xE1,0x2C,0x42,0x47,0xF8,0xBC,0xE6,0xE5,
	0x63,0xA4,0x40,0xF2,0x77,0x03,0x7D,0x81,0x2D,0xEB,0x33,0xA0,
	0xF4,0xA1,0x39,0x45,0xD8,0x98,0xC2,0x96
};

 //Base Point Y Coordinate
static uint8_t ec_base_Y[] = {

	0x4F,0xE3,0x42,
	0xE2,0xFE,0x1A,0x7F,0x9B,0x8E,0xE7,0xEB,0x4A,0x7C,0x0F,0x9E,
	0x16,0x2B,0xCE,0x33,0x57,0x6B,0x31,0x5E,0xCE,0xCB,0xB6,0x40,
	0x68,0x37,0xBF,0x51,0xF5
};

static uint8_t prv[] = {
	0xe4,0x23,0xe2,0x97,0x40,0x72,0x00,0x0d,0xdb,0x96,0xc3,0x62,0xe4,0xfb,0x9c,0xed,0x46,0x52,0xc5,0x7c,
	0xe1,0x92,0xf5,0xbe,0x23,0x4a,0x99,0x17,0xe6,0x79,0xb9,0xf2

};


int main(){

	
	uint32_t result[8];
	uint32_t gx[8];
	uint32_t gy[8];

	//bytes_to_big(ec_base_X,gx);
	//bytes_to_big(ec_base_Y,gy);



	gfp_point_mult((uint32_t*)prv,ec_base_X,ec_base_Y,result);	
	PRINT_BIG(result,"r=");

}
