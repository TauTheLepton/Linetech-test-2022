#include <iostream>
#include "async.h"
#include <future>

int main(){
    Async async;
    async.load_data("data.txt");
    auto f_average = std::async(std::launch::async, &Async::average, &async);
    auto f_median = std::async(std::launch::async, &Async::median, &async);
    float average_val = f_average.get();
    float median_val = f_median.get();
    std::string message;
    if (average_val > median_val)
        message = "Average is bigger than median";
    else if (average_val < median_val)
        message = "Median is bigger than average";
    else
        message = "Average and median have the same value";
    std::cout << message << std::endl;
    return 0;
}
