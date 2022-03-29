#include <iostream>
#include "my_template_class.h"

int main(){
    // make first object
    MyTemplateClass<std::string> obj1("test");
    std::cout << obj1.get_x() << std::endl;

    // make a copy of first object in second object
    MyTemplateClass<std::string> obj2 = obj1;
    std::cout << obj2.get_x() << std::endl;
    std::cout << obj1.get_x() << std::endl;

    // move first object into third object
    MyTemplateClass<std::string> obj3 = std::move(obj1);
    std::cout << obj3.get_x() << std::endl;
    std::cout << obj1.get_x() << std::endl;

    // make object 4 and then copy object 2 to object 4
    MyTemplateClass<std::string> obj4("test3");
    std::cout << obj4.get_x() << std::endl;
    obj4 = obj2;
    std::cout << obj4.get_x() << std::endl;
    return 0;
}
