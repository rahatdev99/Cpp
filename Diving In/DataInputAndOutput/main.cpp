#include <iostream>
#include <string>

int main() {
    //Printing data
    std::cout<<"Hello c++20"<<std::endl;

    int age {18};
    std::cout<<"age: "<<age<<std::endl;
    std::cerr<<"Error message: Something is wrong"<<std::endl;
    std::clog<<"Log message: Somthing happened"<<std::endl;

    int age1;
    std::string name;

    std::cout<<"Please type your name and age: "<<std::endl;
    // std::cin>>name;
    // std::cin>>age1;

    // std::cin>>name>>age1;

    std::cout<<"Hello "<<name<<" you are "<<age1<<" year old!"<<std::endl;

    std::string full_name;
    int age2;

    std::cout<<"Please type your full name and your age: "<<std::endl;
    //full string input
    std::getline(std::cin,full_name);
    std::cin>>age2;
    std::cout<<"Hello "<<full_name<<" you are "<<age2<<" year old!"<<std::endl;
    
    return 0;
}