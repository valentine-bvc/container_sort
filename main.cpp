#include <iostream>
#include <string>

/// This is created by Valentin Bruma
//  This app is using generic programming with both template and auto deduction to sort 
//  elements using the shift and insert method
// 

template<typename T>
void print_collection(T collection [], size_t size) {
    for(size_t i {}; i < size; i++)
        std::cout << collection[i] << " ";
    
    std::cout << std::endl;
}

template<typename T>
void sort_it(T collection [],size_t size){
    for(size_t i{1}; i < size; i++){
        T key=collection[i];
        int j=i-1;
        while(j>=0 && collection[j] > key){
            collection[j+1] = collection[j];
            collection[j]=key;
            j--;
        } 
        
        collection[j+1]=key;
        
    }
    
    
} 

/// Solution without templates
///
//void print_collection(auto collection [], size_t size) {
//    for(size_t i {}; i < size; i++)
//        std::cout << collection[i] << " ";
//    
//    std::cout << std::endl;
//}
//
//
//void sort_it(auto collection [],size_t size){
//    for(size_t i{1}; i < size; i++){
//        auto key=collection[i];
//        int j=i-1;
//        while(j>=0 && collection[j] > key){
//            collection[j+1] = collection[j];
//            collection[j]=key;
//            j--;
//        } 
//        
//        collection[j+1]=key;
//        
//    }
//    
//    
//}




int main()
{
    
///// testing examples


//example using strings
   std::string names[] {"Zack", "Courtney", "Shaley", "Andrew", "Sun", "Vick"};
   
   std::cout <<  "Before sorting: " << std::endl;;
   print_collection(names, std::size(names));
   
   sort_it(names, std::size(names));
   
   std::cout <<  "\nAfter sorting: " << std::endl;;
   print_collection(names, std::size(names));
   
   std::cout << std::endl << std::endl;
   
//example using ints
   int numbers [] {20, 2, 40 , 3 , 1 , 19, 50, 14};
   
   std::cout <<  "Before sorting: " << std::endl;;
   print_collection(numbers, std::size(names));
   
   sort_it(numbers, std::size(names));
   
   std::cout <<  "\nAfter sorting: " << std::endl;;
   print_collection(numbers, std::size(names));
   
   std::cout << std::endl << std::endl;
   
    return 0;
}
