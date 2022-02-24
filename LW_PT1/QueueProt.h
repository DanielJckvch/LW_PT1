#pragma once
#include "Queue.h"
#include <stdio.h>
#ifndef QueueProtH
#define QueueProtH
class queueProt : protected queue
{
public:
	int getrange();
	void callMeth(int sw, int x = 0);
	void callMeth(queueProt* des, queueProt* sou1 = NULL);
};
#endif

