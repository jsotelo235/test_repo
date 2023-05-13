static bool is_timer_expired(int *timer_ptr, int delay)
{
    bool ret_val = false;

    if(*timer_ptr >= delay)
    {
        ret_val = true;
    }
    else
    {
        (*timer_ptr)++;;
    }

    return ret_val;
}