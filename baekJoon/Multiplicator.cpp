#include <iostream>

int Multiplicator(int num1, int num2) {
    return num1 * num2;
}

int main(void) {
    int var1;
    int var2;
    std::cin>>var1;
    std::cin>>var2;

    int result = Multiplicator(var1, var2);
    std::cout<<result<<std::endl;
    return 0;
}