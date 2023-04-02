/**
 * @file    observer-intf.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of the Observer interface.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _OBSERVER_
#define _OBSERVER_

/**
 * @brief Interface for an observer class.
 */
class Observer {
  protected:
    Observer() = default;

  public:
    virtual ~Observer() = default;

    /**
     * @brief Update observer of change notified by the observable class.
     * @param null
     * @return null
     */
    virtual void update() = 0;
};

#endif /* _OBSERVER_ */
