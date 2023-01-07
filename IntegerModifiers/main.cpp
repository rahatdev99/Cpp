#include <iostream>

int main()
{

    signed int value1{10};
    signed int value2{-300};

    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

    unsigned int value3{4};//usigned int only positeve number deposit
    // unsigned int value4{-5}; // Compiler error. unigned int not nagitave number deposit

    // short and long
    short short_var{-32768};                 //  2 Bytes
    short int short_int{455};                //
    signed short signed_short{122};          //
    signed short int signed_short_int{-456}; //
    unsigned short int unsigned_short_int{456};

    int int_var{55};           // 4 bytes
    signed signed_var{66};     //
    signed int signed_int{77}; //
    unsigned int unsigned_int{77};

    long long_var{88}; // 4 OR 8 Bytes
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};

    long long long_long{888}; // 8 Bytes
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};
    
    //short variable value and size print
    std::cout<<"Short variable: "<<short_var<<" , size: "<<sizeof(short)<<" bytes"<<std::endl;

    //short int variable value and size print
    std::cout<<"Short int: "<<short_int<<" , size: "<<sizeof(short int)<<" bytes."<<std::endl;

    //signed short variable value ans size print
    std::cout<<"Signed short: "<<signed_short<<" , size: "<<sizeof(signed short)<<" bytes"<<std::endl;

    //signed short int vaiable value and size print
    std::cout<<"Signed short int: "<<signed_short_int<<" , size: "<<sizeof(signed short int)<<" bytes."<<std::endl;

    //unsigned short int vaiable value and size print
    std::cout<<"Unsigned short int: "<<unsigned_short_int<<" , size: "<<sizeof(unsigned short int)<<" bytes."<<std::endl;

    std::cout<<"!-------------------------------------------!"<<std::endl;

    //int variable value and size print

    std::cout<<"Int variable: "<<int_var<<" , size: "<<sizeof(int)<<" bytes."<<std::endl;

    //Signed variable value and size print
    std::cout<<"signed: "<<signed_var<<" , size: "<<sizeof(signed)<<" bytes."<<std::endl;

    //Signed int variable value and size print
    std::cout<<"signed int: "<<signed_int<<" , size: "<<sizeof(signed int)<<" bytes."<<std::endl;

    //Unsigned int variable value and size print
    std::cout<<"unsigned int: "<<unsigned_int<<" , size: "<<sizeof(unsigned int)<<" bytes."<<std::endl;

    std::cout<<"!-------------------------------------------------!"<<std::endl;

    //Long variable

    //long variable valu and size print
    std::cout<<"long: "<<long_var<<" , size: "<<sizeof(long)<<" bytes."<<std::endl;

    //long int variable valu and size print
    std::cout<<"long int: "<<long_int<<" , size: "<<sizeof(long int) <<" bytes!"<<std::endl;

    //signed long variable valu and size print
    std::cout<<"signed long: "<<signed_long<<" , size: "<<sizeof(signed long) <<" bytes!"<<std::endl;

    //signed long int variable valu and size print
    std::cout<<"signed long int: "<<signed_long_int<<" , size: "<<sizeof(signed long int)<<" bytes!"<<std::endl;

    //unsigned long int variable valu and size print
    std::cout<<"unsigned long int: "<<unsigned_long_int<<" , size: "<<sizeof(unsigned long long int)<<" , bytes."<<std::endl;

    std::cout<<"!--------------------------------------------------------!"<<std::endl;

    //Long Long variable

    //long lomg variable valu and size print
    std::cout<<"long long: "<<long_long<<" , size: "<<sizeof(long long)<<" bytes!"<<std::endl;

    //long long int variable valu and size print
    std::cout<<"long long int: "<<long_long_int<<" , size: "<<sizeof(long long int)<<" bytes!"<<std::endl;

    //signed long long variable valu and size print
    std::cout<<"signed long long: "<<signed_long_long<<" , size: "<<sizeof(signed long long) <<" bytes!"<<std::endl;

    //signed long long int variable valu and size print
    std::cout<<"signed long long int: "<<signed_long_long_int<<" , size: "<<sizeof(signed long long int) <<" bytes!"<<std::endl;

    //unsigned long long int variable valu and size print
    std::cout<<"unsigned long long int: "<<unsigned_long_long_int<<" , size: "<<sizeof(unsigned long long int)<<" bytes."<<std::endl;

    std::cout<<"!-----------------------------------------------------!"<<std::endl;
    

    return 0;
}