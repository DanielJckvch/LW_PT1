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
	friend void copy(queue& sou, queue& dest);
	friend void merge(queue& sou1, queue& sou2, queue& dest);

};
void copy(queue& sou, queue& dest);
void merge(queue& sou1, queue& sou2, queue& dest);


#endif
