/**
 * @file    observable-intf.h
 * @author  Mustafa Siddiqui
 * @brief   Definition of the Observable interface.
 *
 * @copyright Copyright (c) 2023
 *
 */

/**
 * @brief Interface for a observable class or a subject class.
 */
class Observable {
    /**
     * @brief Add/register observer to pool of observers.
     * @param null
     * @return null
     */
    void registerObserver();

    /**
     * @brief Remove observer from pool of observers.
     * @param null
     * @return null
     */
    void removeObserver();

    /**
     * @brief Notify all observers of change to observable class.
     * @param null
     * @return null
     */
    void notifyObservers();
};
