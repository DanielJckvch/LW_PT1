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
	///Something...
public:
	queue(void);
	~queue(void);
	void addElem(int);
	void ejectElem(void);
	void listQueue(void);
	friend void copy(queue& sou, queue& dest);
	friend void merge(queue& sou1, queue& sou2, queue& dest);
	friend int getrange(queue& q);

};
void copy(queue& sou, queue& dest);
void merge(queue& sou1, queue& sou2, queue& dest);
int getrange(queue& q);

#endif
