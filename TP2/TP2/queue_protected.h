#pragma once
#include "queue.h"
class queue_protected : protected Queue
{
public :
	Node* firstProt = 0;
	Node* lastProt = 0;
	Node* pProt = 0;
public:
	queue_protected() {};
	~queue_protected() {};
	bool is_empty_prot();
	void push_prot(int _val)
	{
		p = new Node(_val);
		if (is_empty()) {
			first = p;
			last = p;
			return;
		}
		last->next = p;
		last = p;
	};
	void show_all_prot();
	void first_out_prot();
	void q_copy_prot();
	int show_min_prot();
	void merge_prot(queue_protected a, Queue b);
};