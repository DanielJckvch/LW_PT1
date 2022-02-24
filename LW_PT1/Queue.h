#pragma once
#ifndef QueueH
#define QueueH
struct elem
{
	elem* prev;
	int val;
};

class queue
{
private:
	
	int elCount;
protected:
	elem* head;
	elem* tail;
	int getCount(void);
public:
	queue(void);
	~queue(void);
	void addElem(int);
	void ejectElem(void);
	void listQueue(void);
	void copy(queue* des);
	void merge(queue* des, queue* sou);
	

};

#endif
