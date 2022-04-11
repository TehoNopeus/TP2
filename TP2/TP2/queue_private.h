#pragma once

#include "queue.h"
class queue_private : private Queue
{
public:
	Node* firstPriv = 0;
	Node* lastPriv = 0;
	Node* pPriv = 0;
public:
	queue_private() {};
	~queue_private() {};
	bool is_empty_priv();
	void push_priv(int _val)
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
	void show_all_priv();
	void first_out_priv();
	void q_copy_priv();
	int show_min_priv();
	void merge_priv(queue_private a, Queue b);
};