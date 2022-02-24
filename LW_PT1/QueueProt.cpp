#include "QueueProt.h"
#include <iostream>
using namespace std;
int queueProt::getrange(queueProt& q)
{
	if (!q.getCount())
	{
		cout << "Queue is empty;" << endl;
		return 0;
	}
	elem* ptr = q.head;
	int i = 0;
	int min = ptr->val;
	int max = min;
	while (ptr)
	{
		if (i % 2)
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