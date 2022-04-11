#pragma once
#include <new>
#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node* next;
    Node(int _val) : val(_val), next(0) {};
};

class Queue
{
protected:
    Node* first = 0;
    Node* last = 0;
	Node* p = 0;

public:
virtual bool is_empty();
void push(int _val)
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
virtual void show_all();
virtual void first_out();
virtual int first_sout();
virtual void q_copy();
virtual void merge(Queue a, Queue b);
virtual int show_min();
};
