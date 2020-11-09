/**
 * @file Subscriber.h
 * @author Christoff Linde
 * @brief Subscriber participant in the Observer pattern
 * @version 0.1
 * @date 2020-11-08
 *
 * @copyright Copyright (c) 2020
 *
 */

#if !defined(SUBSCRIBER)
#define SUBSCRIBER

class Subscriber
{
public:
    virtual void update() = 0;
};

#endif // SUBSCRIBER