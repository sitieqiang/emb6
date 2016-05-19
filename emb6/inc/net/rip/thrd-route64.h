/*
 * thrd-route64.h
 *
 *  Created on: 10 May 2016
 *  Author: Lukas Zimmermann <lzimmer1@stud.hs-offenburg.de>
 */

#ifndef EMB6_INC_NET_RIP_THRD_ROUTE64_H_
#define EMB6_INC_NET_RIP_THRD_ROUTE64_H_

#include "tlv.h"

// TODO Check!
#define MAX_ROUTE64_TLV_DATA_SIZE		41		// One plus ceiling (MAX_ROUTER_ID/8) plus the number of assigned router IDs.

void thrd_process_route64(uint8_t rid_sender, tlv_t *tlv);

tlv_t *thrd_generate_route64();

#endif /* EMB6_INC_NET_RIP_THRD_ROUTE64_H_ */
