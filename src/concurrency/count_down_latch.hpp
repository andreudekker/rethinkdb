#ifndef __CONCURRENCY_COUNT_DOWN_LATCH_HPP__
#define __CONCURRENCY_COUNT_DOWN_LATCH_HPP__

#include "concurrency/signal.hpp"

/* A count_down_latch_t pulses its signal_t only after its count_down() method has
been called a certain number of times. It is safe to call the cound_down() method
on any thread. */

class count_down_latch_t : public signal_t {
public:
    count_down_latch_t(size_t _count) : count(_count) { }

    void count_down();
private:
    void do_count_down();

    size_t count;
    DISABLE_COPYING(count_down_latch_t);
};

#endif // __CONCURRENCY_COUNT_DOWN_LATCH_HPP__
