

#include <iostream>
using std::cout;

template <typename T>
void swap(T& a_swap, T& b_swap) 
{
    T temp = a_swap;
    a_swap = b_swap;
    b_swap = temp;
}



template <typename T>
void print(T* pa, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(pa + i) << ' ';
    }
    cout << '\n';
}




int main()
{
    
    //----------------------------------- 1. swap ----------------------------------- 
    int a = 1;
    int b = 2;

    cout << "Before swap (int): a = " << a << ", b = " << b << "\n";
    swap(a, b);
    cout << "After swap (int): a = " << a << ", b = " << b << "\n\n";

    double a1 = 1.1;
    double b1 = 2.1;

    cout << "Before swap (double): a = " << a1 << ", b = " << b1 << "\n";
    swap(a1, b1);
    cout << "After swap (double): a = " << a1 << ", b = " << b1 << "\n\n\n";


    //----------------------------------- 2. print ----------------------------------- 

    
    int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "Array of integer: ";
    print(numbers, sizeof(numbers)/sizeof(numbers[0]));

    double numbers_double[10] = { 1.1,2.2,3.3,4.3,5.5,6.54,7.5,8.4,9.4,10.4 };
    cout << "Array of double: ";
    print(numbers_double, sizeof(numbers) / sizeof(numbers[0]));
}