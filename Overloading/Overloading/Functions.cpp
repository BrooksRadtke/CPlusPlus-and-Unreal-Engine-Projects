double add(double x, double y)
{
    return x + y;
}

// Example of overloading the 'add' method
double add(double a, double b, double c)
{
    return a + b + c;
    // or: return add(add(a,b),c);
}

bool test(bool x)
{
    return x;
}

bool test(double x)
{
    return x > 0;
}