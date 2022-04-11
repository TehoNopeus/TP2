#include "queue_private.h"

bool queue_private::is_empty_priv()
{
    return is_empty();
}

void queue_private::show_all_priv()
{
    return show_all();
}

void queue_private::first_out_priv()
{
    return first_out();
}

void queue_private::q_copy_priv()
{
    return q_copy();
}

int queue_private::show_min_priv()
{
    return show_min();
}

void queue_private::merge_priv(queue_private a, Queue b)
{
    return merge(a, b);
}
