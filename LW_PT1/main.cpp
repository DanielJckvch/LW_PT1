#include <iostream>
#include "QueuePriv.h"
#include "QueueProt.h"
#include "QueuePub.h"
#include "Queue.h"
using namespace std;
int main(void)
{
	int sw;
	queue ob1, ob2, ob3;
	int val;
	cout << "Mode: 0-quit, 1-add element to queue1, 2-eject element from queue1, 3-list queue1; 4-copy queue1 to queue2; 5-get range;" << endl;
	cin >> sw;
	while (sw)
	{
		cout << endl;
		switch (sw)
		{
		case 1:
			cout << "Enter value:" << endl;
			cin >> val;
			ob1.addElem(val);
			cout << endl;
			break;
		case 2:
			ob1.ejectElem();
			break;
		case 3:
			ob1.listQueue();
			break;
		case 4:
			copy(ob1, ob2);
			cout << "Queue2:" << endl;
			ob2.listQueue();
			break;
		case 5:
			
			cout << "Range: " << getrange(ob1) << endl;
			//ob3.listQueue();
			break;
		default:
			cout << "Uncorrect mode" << endl;
			return 0;
		}
		cout << "Enter mode:" << endl;
		cin >> sw;
		
	}
	return 0;
}