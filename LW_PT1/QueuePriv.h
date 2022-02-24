#pragma once
#include "Queue.h"
#include <stdio.h>
#ifndef QueuePrivH
#define QueuePrivH
class queuePriv : private queue
{
public:
	int getrange();
	void callMeth(int sw, int x = 0);
	void callMeth(queuePriv* des, queuePriv* sou1 = NULL);

};

#endif

