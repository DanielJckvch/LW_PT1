#include "QueuePriv.h"
#include <iostream>
using namespace std;
int queuePriv::getrange()
{
	if (!this->getCount())
	{
		cout << "Queue is empty;" << endl;
		return 0;
	}
	elem* ptr = this->head;
	int i = 1;
	int min = ptr->val;
	int max = min;
	while (ptr)
	{
		if (i % 2 || i == 1)
		{
			if (min > ptr->val)
			{
				min = ptr->val;
			}
			if (max < ptr->val)
			{
				max = ptr->val;
			}
		}
		i++;
		ptr = ptr->prev;
	}
	return max - min;
}


void queuePriv::callMeth(int sw, int x)
{
	switch (sw)
	{
	case 1:
		this->addElem(x);
		break;
	case 2:
		this->ejectElem();
		break;
	case 3:
		this->listQueue();
		break;
	}
}

void queuePriv::callMeth(queuePriv* des, queuePriv* sou1)
{
	if (!sou1)
	{
		this->copy(des);
		return;
	}
	this->merge(sou1, des);
}