#pragma once
#include "Queue.h"
#include <stdio.h>
#ifndef QueuePubH
#define QueuePubH

class queuePub : public queue
{
public:
	int getrange();
	void callMeth( int sw, int x = 0);
	void callMeth(queuePub* des, queuePub* sou1 = NULL);
	
};


#endif

