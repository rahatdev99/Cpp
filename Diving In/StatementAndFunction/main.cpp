#include <iostream>

int addNumber(int first_param,int second_param) {
    
    int result = first_param + second_param;

    return result;

}

int main() {

    int first_number {13}; //Statement
    int secont_number {7};

    secont_number = 99;

    std::cout<<"First number: "<<first_number<<std::endl;
    std::cout<<"Secont number: "<<secont_number<<std::endl;

    int sum = first_number + secont_number;

    std::cout<<"Sum: "<<sum<<std::endl;
    sum = addNumber(25,7);
    std::cout<<"Sum: "<<sum<<std::endl;
    sum = addNumber(13,50);
    std::cout<<"Sum: "<<sum<<std::endl;
    std::cout<<"Sum: "<<addNumber(13,42)<<std::endl;


    return 0;
}