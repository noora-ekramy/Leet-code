#include <iostream>
#include <ctime>
using namespace std;

class Solution {
public:
    /**
    * daysBetweenDates - counts the number of days between two dates.
    * @date1: first date
    * @date2: second date 
    * Return: integer (the difference)
    */
    int daysBetweenDates(string date1, string date2) {
        tm tm1 = {};
        tm tm2 = {};
        istringstream ss1(date1);
        istringstream ss2(date2);
        ss1 >> std::get_time(&tm1, "%Y-%m-%d");
        ss2 >> std::get_time(&tm2, "%Y-%m-%d");
    
        // Convert struct tm to time_t
        time_t t1 = mktime(&tm1);
        time_t t2 = mktime(&tm2);
    
        // Calculate the difference in seconds
        long double difference = std::difftime(t2, t1);
    
        // Convert seconds to days and return the absolute value
        return int(abs((difference) / (60 * 60 * 24)));        
    }
};
