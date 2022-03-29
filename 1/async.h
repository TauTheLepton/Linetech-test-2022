#include <vector>
#include <string>

class Async{
private:
    std::vector<int> values;
    float average_val;
    float median_val;
public:
    void load_data(std::string);
    void sort();
    float average();
    float median();
    void print();
    float get_average_val();
    float get_median_val();
};
