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
	elem* head;
	elem* tail;
	int elCount;
protected:
	///Something...
public:
	queue(void);
	~queue(void);
	void addElem(int);
	void ejectElem(void);
	void listQueue(void);

};



#endif
