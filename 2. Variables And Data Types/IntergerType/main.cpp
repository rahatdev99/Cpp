#include <iostream>

int main() {
    //Braced Initializers
    //Variable may contain ramdom grabage value...

    int elephent_count;
    int lino_count{}; //Auto Initializers to zero
    int dog_count{10}; //Initializers to 10
    int cat_count{15}; //Initializers to 15

    //Can use expression ass Initializers
    int domesticated_enimals {dog_count + cat_count};

    // int narrowing_conversion{2.9};

    std::cout<<"elephent_count: "<<elephent_count<<std::endl;
    std::cout<<"lione_count: "<<lino_count<<std::endl;
    std::cout<<"dog_count: "<<dog_count<<std::endl;
    std::cout<<"cat_count: "<<cat_count<<std::endl;
    std::cout<<"domesticated_enimals: "<<std::endl;


    //Functional Initializers
    int apple_count(5);
    int orange_counte(10);
    int fruit_count(apple_count+orange_counte);
    
    //Informition lost. less safe than braced inirializers
    int narrowing_conversion(1.9);

    std::cout<<"Apple count: "<<apple_count<<std::endl;
    std::cout<<"Orange count: "<<orange_counte<<std::endl;
    std::cout<<"Fruit count: "<<fruit_count<<std::endl;
    std::cout<<"Narrowing conversion: "<<narrowing_conversion<<std::endl;

    //Assignment Notation

    int bike_count = 2;
    int truck_count = 7;
    int vehical_count = bike_count+truck_count;
    int narroing_conversion_assignment = 2.33;

    std::cout<<"Bike count: "<<bike_count<<std::endl;
    std::cout<<"Truck count: "<<truck_count<<std::endl;
    std::cout<<"Vehical count: "<<vehical_count<<std::endl;
    std::cout<<"Narroing conversion assignment: "<<narroing_conversion_assignment<<std::endl;
    
    //Chaeck the size with sizeof
    std::cout<<"Sizeof int: "<<sizeof(int)<<std::endl;
    std::cout<<"Sizeof truck_count: "<<sizeof(truck_count)<<std::endl;

    return 0;
}