/**
 * @file    observable-intf.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of the Observable interface.
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef _OBSERVABLE_
#define _OBSERVABLE_

/**
 * @brief Interface for a observable class or a subject class.
 */
class Observable {
  protected:
    Observable() = default;

  public:
    virtual ~Observable() = default;

    /**
     * @brief Add/register observer to pool of observers.
     * @param null
     * @return null
     */
    virtual void registerObserver() = 0;

    /**
     * @brief Remove observer from pool of observers.
     * @param null
     * @return null
     */
    virtual void removeObserver() = 0;

    /**
     * @brief Notify all observers of change to observable class.
     * @param null
     * @return null
     */
    virtual void notifyObservers() const = 0;
};

#endif /* _OBSERVABLE_ */
