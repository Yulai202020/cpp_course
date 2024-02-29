#include <iostream>

int main() {
    int n = 2;
    int students = 20;

    //// add
    /// 1st method (adds how many u want)
    // students = students + n;
    /// 2nd method (adds how many u want)
    // students += n;
    /// 3rd methed (adds just 1)
    // students++;

    //// minus
    /// 1st method
    // students = students - n;
    /// 2nd method
    // students -= n;
    /// 3rd methed
    // students--;

    //// /
    /// 1st method
    // students = students / n;
    /// 2nd methed
    // students /= n;

    //// *
    /// 1st method
    // students = students * n;
    /// 2nd method
    // students *= n;

    // % its like / but in int
    int remainer = students % 2;

    std::cout << remainer << "\n";

    //
    // first of all parenthesis
    // second of all multiplication and division
    // third of all addition and subtraction

    return 0;
}