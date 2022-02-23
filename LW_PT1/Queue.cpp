#include <stdio.h>
#include <iostream>
#include "Queue.h"
using namespace std;
queue::queue(void)
{
	head = new elem;
	tail = head;
	head->prev = NULL;
	elCount = 0;
}
queue::~queue(void)
{
	elem* del;
	while (head!=NULL)
	{
		del = head;
		head = head->prev;
		delete del;
	}
}
void queue::addElem(int x)
{
	if (elCount)
	{
		tail->prev = new elem;
		tail = tail->prev;
	}
	tail->val = x;
	tail->prev = NULL;
	elCount++;
	
}
void queue::ejectElem(void)
{
	if (!elCount)
	{
		return;
	}
	elem* del;
	del = head;
	head = head->prev;
	cout << "Deleting element 1  with value " << del->val << endl;
	cout << endl;
	delete del;
	elCount--;
	if (head == NULL)
	{
		head = new elem;
		tail = head;
		head->prev = NULL;
	}
}
void queue::listQueue(void)
{
	if (!elCount)
	{
		cout << "Queue is empty!" << endl;
		cout << endl;
		return;
	}
	elem* ptr = head;
	int i = 1;
	while (ptr)
	{
		cout << "Element " << i << endl;
		cout << "Value: " << ptr->val << endl;
		cout << endl;
		ptr = ptr->prev;
		i++;
	}
}

void copy(queue& sou, queue& dest)
{
	elem* ptr = sou.head;
	while (ptr)
	{
		dest.addElem(ptr->val);
		ptr = ptr->prev;
	}
}
void merge(queue& sou1, queue& sou2, queue& dest)
{
	elem* ptr = sou1.head;
	while (ptr)
	{
		dest.addElem(ptr->val);
		ptr = ptr->prev;
	}
	ptr = sou2.head;
	while (ptr)
	{
		dest.addElem(ptr->val);
		ptr = ptr->prev;
	}
}