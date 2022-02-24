#pragma once
#include "Queue.h"
#include <stdio.h>
#ifndef QueueProtH
#define QueueProtH
class queueProt : protected queue
{
public:
	int getrange(queueProt& q);
};
#endif

