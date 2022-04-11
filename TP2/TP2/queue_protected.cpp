#include "queue_protected.h"

bool queue_protected::is_empty_prot()
{
    return is_empty();
}

void queue_protected::show_all_prot()
{
    return show_all();
}

void queue_protected::first_out_prot()
{
    return first_out();
}

void queue_protected::q_copy_prot()
{
    return q_copy();
}
int queue_protected::show_min_prot()
{
    return show_min();
}

void queue_protected::merge_prot(queue_protected a, Queue b)
{
    return merge(a, b);
}
