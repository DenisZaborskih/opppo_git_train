double my_fast_pow(double base, unsigned int exponent) {
    if (exponent == 0) return 1; 
    double result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) { 
            result *= base;
        }
        base *= base; 
        exponent /= 2; 
    }
    return result;
}
