#include <iostream>//input and output library
using namespace std;//standard namespace for cin and cout

int main (){
    
    float num1,num2,product;
    
    cout<<"Enter a number: ";//
    cin>>num1; 
    cout<<"Enter another number: ";
    cin>>num2;
    product = num1 * num2;
    cout<<"The product is... "<<product;
    
    return 0;
}
