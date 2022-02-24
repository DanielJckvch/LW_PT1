#pragma once
#include "Queue.h"
#include <stdio.h>
#ifndef QueuePrivH
#define QueuePrivH
class queuePriv : private queue
{
	int getrange(queuePriv& q);
};

#endif

