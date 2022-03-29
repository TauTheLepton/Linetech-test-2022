template<class n>
class MyTemplateClass{
private:
    n x;
public:
    MyTemplateClass(n new_x);
    MyTemplateClass(const MyTemplateClass<n>& other);
    MyTemplateClass(MyTemplateClass<n>&& other);
    n get_x();
    void operator= (const MyTemplateClass<n> &other);
};

template<class n>
MyTemplateClass<n>::MyTemplateClass(n new_x){
    std::cout << "Created!" << std::endl;
    x = new_x;
}

template<class n>
MyTemplateClass<n>::MyTemplateClass(const MyTemplateClass<n>& other){
    std::cout << "Copied!" << std::endl;
    x = other.x;
}

template<class n>
MyTemplateClass<n>::MyTemplateClass(MyTemplateClass<n>&& other){
    std::cout << "Moved!" << std::endl;
    x = (n&&)other.x;
}

template<class n>
n MyTemplateClass<n>::get_x(){
    return x;
}

template<class n>
void MyTemplateClass<n>::operator= (const MyTemplateClass<n> &given){
    std::cout << "Assigned!" << std::endl;
    x = given.x;
}
