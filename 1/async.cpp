#include "async.h"
#include <fstream>
#include <bits/stdc++.h>

void Async::load_data(std::string file_name){
    std::ifstream data_file(file_name);
    std::string line;
    while (std::getline(data_file, line))
        values.push_back(std::stoi(line));
    sort();
}

void Async::sort(){
    std::sort(values.begin(), values.end());
}

float Async::average(){
    float sum = 0;
    for (int value : values)
        sum += value;
    average_val = sum / values.size();
    std::cout << "Average: " <<  average_val << std::endl;
    return average_val;
}

float Async::median(){
    int idx = values.size() / 2;
    if (values.size() % 2 == 0)
        median_val = (values[idx - 1] + values[idx]) / 2;
    else
        median_val = values[idx];
    std::cout << "Median: " << median_val << std::endl;
    return median_val;
}

void Async::print(){
    for (int value : values)
        std::cout << value << std::endl;
}

float Async::get_average_val(){
    return average_val;
}

float Async::get_median_val(){
    return median_val;
}
