#include "queue.h"
#include <iostream>

bool Queue:: is_empty()
{
	return first == nullptr;
}

void Queue::show_all()
{
	if (is_empty()) return;
    p = first;
	while (p != nullptr) {
		cout << p->val << " ";
		p = p->next;
	};
	cout << endl;
}

 void Queue::first_out()
{
	 if (is_empty()) return;
	 Node* p = first;
	 cout << first->val<< endl;
	 first = p->next;
	 delete p;
}
 int Queue::first_sout()
 {
	 if (is_empty()) return 0;
	 Node* p = first;
	 int a = first->val;
	 first = p->next;
	 delete p;
	 return a;
 }

  void Queue::q_copy()
 {
	 Queue copyQ;
	 p = first;
	 while (p != nullptr) {
		 copyQ.push(p->val);
		 p = p->next;
	 };
	 copyQ.show_all();
 }

  void Queue::merge(Queue a, Queue b)
  {
	  if (a.is_empty()== 1) { cout << "Îøèáêà\n"; return; };
	  while (b.is_empty() != 1) {
		  a.push(b.first_sout());
	  }
  }

  int Queue::show_min()
  {
	  int m;

	  if (is_empty()) return 0;
	  p = first;
	  m = first->val;
	  while (p != nullptr) {
		  if (m > p->val) { m = p->val; };
		  p = p->next;
	  };
	  return m;
  }
