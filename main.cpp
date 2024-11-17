
double my_pow(double base, unsigned int exponent) {
    double result = base;
    for (unsigned int i = 1; i < exponent; ++i) {
        result *= base;
    }
    return result;
}