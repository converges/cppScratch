#include <iostream>

int Divider(int num1, int num2) {
    return (float)num1 / (float)num2;
}

int main(void) {
    int var1;
    int var2;
    std::cin>>var1;
    std::cin>>var2;

    float result = Divider(var1, var2);
    std::cout<<result<<std::endl;
    return 0;
}