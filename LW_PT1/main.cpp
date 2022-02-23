#include <iostream>
#include "Queue.h"
using namespace std;
int main(void)
{
	int sw;
	queue ob;
	int val;
	cout << "Mode: 0-quit, 1-add element, 2-eject element, 3-list queue;" << endl;
	cin >> sw;
	while (sw)
	{
		cout << endl;
		switch (sw)
		{
		case 1:
			cout << "Enter value:" << endl;
			cin >> val;
			ob.addElem(val);
			break;
		case 2:
			ob.ejectElem();
			break;
		case 3:
			ob.listQueue();
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