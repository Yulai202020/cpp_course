#include <iostream>

int main() {
    int n = 2;
    int students = 20;

    //// add
    /// 1st method (adds how many u want)
    students = students + n;
    std::cout << students << "\n"; // 22

    /// 2nd method (adds how many u want)
    students += n;
    std::cout << students << "\n"; // 24

    /// 3rd methed (adds just 1)
    students++;
    std::cout << students << "\n"; // 25

    //// minus
    /// 1st method
    students = students - n;
    std::cout << students << "\n"; // 23
    /// 2nd method
    students -= n;
    std::cout << students << "\n"; // 21
    /// 3rd methed
    students--;
    std::cout << students << "\n"; // 20

    //// /
    /// 1st method
    students = students / n;
    std::cout << students << "\n"; // 10

    /// 2nd methed
    students /= n;
    std::cout << students << "\n"; // 10

    //// *
    /// 1st method
    students = students * n;
    std::cout << students << "\n"; // 10

    /// 2nd method
    students *= n;
    std::cout << students << "\n"; // 20

    // % its like / but in int
    int remainer = students % 2;

    std::cout << remainer << "\n"; // its 0 cuz students its divide by 2

    int x = 5;
    float y = 2; // yes divisor gotta be float or double
    float result = x / y; // result gotta be float or double

    std::cout << result << "\n";

    //
    // first of all parenthesis
    // second of all multiplication and division
    // third of all addition and subtraction

    return 0;
}