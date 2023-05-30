#include <chrono>
#include <thread>

namespace sleepx
{
    /// @brief Sleeps for (x) hours
    /// @param hours
    void hour(int hours)
    {
        std::chrono::hours duration(hours);
        std::this_thread::sleep_for(duration);
    }

    /// @brief Sleeps for (x) minutes
    /// @param mins
    void minutes(int mins)
    {
        std::chrono::minutes duration(mins);
        std::this_thread::sleep_for(duration);
    }

    /// @brief Sleeps for (x) seconds
    /// @param secs
    void seconds(int secs)
    {
        std::chrono::seconds duration(secs);
        std::this_thread::sleep_for(duration);
    }
    
    /// @brief Sleeps for (x) milliseconds
    /// @param millisecs
    void milliseconds(int millisecs)
    {
        std::chrono::milliseconds duration(millisecs);
        std::this_thread::sleep_for(duration);
    }
    
    /// @brief Sleeps for (x) hours
    /// @param microsecs
    void microseconds(int microsecs)
    {
        std::chrono::microseconds duration(microsecs);
        std::this_thread::sleep_for(duration);
    }

    /// @brief Sleeps for (x) hours
    /// @param nanosecs
    void nanoseconds(int nanosecs)
    {
        std::chrono::nanoseconds duration(nanosecs);
        std::this_thread::sleep_for(duration);
    }
    
    /// @brief Sleeps for (x) secs but you can add a decimal point to make it sleep (x) millisecs
    /// @param secs
    void seconds(double secs)
    {
        int value = static_cast<int>(secs * 1000);

        sleepx::milliseconds(value);
    }
}

