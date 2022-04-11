#pragma once
#include "queue.h"
class queue_public : public Queue
{
public:
	Node* firstPub = 0;
	Node* lastPub = 0;
	Node* pPub = 0;
public: 
	queue_public(){};
	~queue_public(){};
};

