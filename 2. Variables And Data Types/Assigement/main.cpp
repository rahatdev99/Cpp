#include <iostream>

int main() {

    int var1 {123}; //Declare and Initialize
    std::cout<<"var1: "<<var1<<std::endl;
    var1 = 50;
    std::cout<<"var1: "<<var1<<std::endl;

    std::cout<<std::endl;

    std::cout<<"!------------------------------------!"<<std::endl;

    double var2 {44.55};//Declaer and Initialize
    std::cout<<"var2: "<<var2<<std::endl;
    var2 = 99.99;//assgin
    std::cout<<"var2: "<<var2<<std::endl;

    std::cout<<"!------------------------------------!"<<std::endl;

    std::cout<<std::endl;

    bool state {true};
    std::cout<<std::boolalpha;
    std::cout<<"state: "<<state<<std::endl;
    state = false;
    std::cout<<"state: "<<state<<std::endl;

    std::cout<<std::endl;

    return 0;
}