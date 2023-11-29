#include <iostream>
#include<stdexcept>
void divide(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::runtime_error("The divisor is 0");
	//throw std::invalid_argument("The divisor is 0");
    }

    double result = static_cast<double>(dividend) / divisor;
    std::cout << "Result: " << result << std::endl;
}

int main() {
    try {
        divide(10, 0);
    } catch (const std::exception& e) {
        std::cout << "Error is: " << e.what() << std::endl;
    }

    return 0;
}
