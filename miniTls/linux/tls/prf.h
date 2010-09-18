/*
 * hash_common.h
 * Common variables for md5 and sha1
 *  Created on: Jul 19, 2009
 *      Author: alex
 */

#ifndef PRF_H_
#define PRF_H_

#include "target.h"
#include "md5.h"
#include "sha1.h"

#define SEED_LEN 77

/* hashing algorithms*/
#define SHA1 1
#define MD5 2

/* number of bytes in digest */
#define MD5_SIZE 16
#define SHA1_SIZE 20

struct secret {

	uint8_t bytes[48]; 		  /* premaster or master secret */
	uint8_t length; 		  /* secret length */
};



/* common blocksize for both hashing algo */
#define HMAC_BLOCKSIZE 64

/* pseudorandom function that calculates master secret */
void hmac(uint8_t,uint8_t*,uint8_t, uint8_t *, uint16_t, uint8_t *);
void prf(uint8_t*, uint8_t , uint8_t *, uint8_t,uint8_t*,uint8_t);

#endif /* RC4_H_ */