#include <iostream>
#include "QueuePriv.h"
#include "QueueProt.h"
#include "QueuePub.h"
//#include "Queue.h"
using namespace std;
void f_QPriv(void);
void f_QProt(void);
void f_QPub(void);
int main(void)
{
	int sw;
	int val;
	cout << "Classes: 0-quit, 1-public, 2-protected, 3-private; " << endl;
	cin >> sw;
	while (sw)
	{
		cout << endl;
		switch (sw)
		{
		case 1:
			f_QPub();
			break;
		case 2:
			f_QProt();
			break;
		case 3:
			f_QPriv();
			break;
		default:
			cout << "Uncorrect class mode" << endl;
		}
		cout << "Enter class mode:" << endl;
		cin >> sw;
	}
	return 0;
}
void f_QPub(void)
{
	queuePub q1, q2, q3;
	int sw1;
	int val;
	cout << "Mode: 0-quit, 1-add element to queue1, 2-eject element from queue1, 3-list queue1; 4-copy queue1 to queue2; 5-merge; 6-get range; " << endl;
	cin >> sw1;
	while (sw1)
	{
		cout << endl;
		switch (sw1)
		{
		case 1:
			cout << "Enter value:" << endl;
			cin >> val;
			q1.callMeth(sw1, val);
			cout << endl;
			break;
		case 2:
			q1.callMeth(sw1);
			break;
		case 3:
			q1.callMeth(sw1);
			break;
		case 4:
			q1.callMeth(&q2);
			cout << "Queue2:" << endl;
			q2.callMeth(3);
			break;
		case 5:
			q1.callMeth(&q3, &q2);
			cout << "Queue3:" << endl;
			q3.callMeth(3);
			break;
		case 6:
			cout << "Range of Q1: " << q1.getrange() << endl;
			break;
		default:
			cout << "Uncorrect mode" << endl;
		}
		cout << "Enter mode:" << endl;
		cin >> sw1;

	}

}
void f_QProt(void)
{
	queueProt q1, q2, q3;
	int sw1;
	int val;
	cout << "Mode: 0-quit, 1-add element to queue1, 2-eject element from queue1, 3-list queue1; 4-copy queue1 to queue2; 5-merge; 6-get range; " << endl;
	cin >> sw1;
	while (sw1)
	{
		cout << endl;
		switch (sw1)
		{
		case 1:
			cout << "Enter value:" << endl;
			cin >> val;
			q1.callMeth(sw1, val);
			cout << endl;
			break;
		case 2:
			q1.callMeth(sw1);
			break;
		case 3:
			q1.callMeth(sw1);
			break;
		case 4:
			q1.callMeth(&q2);
			cout << "Queue2:" << endl;
			q2.callMeth(3);
			break;
		case 5:
			q1.callMeth(&q3, &q2);
			cout << "Queue3:" << endl;
			q3.callMeth(3);
			break;
		case 6:
			cout << "Range of Q1: " << q1.getrange() << endl;
			break;
		default:
			cout << "Uncorrect mode" << endl;
		}
		cout << "Enter mode:" << endl;
		cin >> sw1;

	}

}
void f_QPriv(void)
{
	queuePriv q1, q2, q3;
	int sw1;
	int val;
	cout << "Mode: 0-quit, 1-add element to queue1, 2-eject element from queue1, 3-list queue1; 4-copy queue1 to queue2; 5-merge; 6-get range; " << endl;
	cin >> sw1;
	while (sw1)
	{
		cout << endl;
		switch (sw1)
		{
		case 1:
			cout << "Enter value:" << endl;
			cin >> val;
			q1.callMeth(sw1, val);
			cout << endl;
			break;
		case 2:
			q1.callMeth(sw1);
			break;
		case 3:
			q1.callMeth(sw1);
			break;
		case 4:
			q1.callMeth(&q2);
			cout << "Queue2:" << endl;
			q2.callMeth(3);
			break;
		case 5:
			q1.callMeth(&q3, &q2);
			cout << "Queue3:" << endl;
			q3.callMeth(3);
			break;
		case 6:
			cout << "Range of Q1: " << q1.getrange() << endl;
			break;
		default:
			cout << "Uncorrect mode" << endl;
		}
		cout << "Enter mode:" << endl;
		cin >> sw1;

	}

}