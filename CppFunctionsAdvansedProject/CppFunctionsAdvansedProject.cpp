#include <iostream>

//int sum(int, float);
//float sum(float, int);
//double sum(double, double);
//int sum(int, int);
//int sum(int, int, int);

template <typename T1, typename T2>
auto sum(T1 a, T2 b)
{
    return a + b;
}

char sum(char a, char b)
{
    return (a + b) % 128;
}

template <typename T>
void ArrayPrint(T* array, int size)
{
    for (int i{}; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";
}


int main()
{
    int n = 50;
    std::cout << sum(20, 30.7) << "\n";


    double arrx[]{ 3.6, 67.9, 23.54 };
    long arrl[]{ 654567456, 876786, 564564543 };

    ArrayPrint(arrx, 3);
    ArrayPrint(arrl, 3);
}


/*
int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int sum(int a, float b)
{
    return a + b;
}

float sum(float a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

int sum(int a, int b)
{
    return a + b;
}
*/