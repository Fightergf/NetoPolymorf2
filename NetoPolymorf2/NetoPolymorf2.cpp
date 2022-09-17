#include <iostream>
class Figure
{
private:
    int FigureNumb = 0;
    std::string name;
public:
    Figure(int FigureNumb)
    {
        switch (FigureNumb)
        {
        case 1:
            name = "Треугольник: ";
            std::cout << name << std::endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        default:
            std::cout << "Неправильная фигура!!" << std::endl;
            break;
        }

    }
};

class Triangle : public Figure
{
private:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
    int tri = 1;
    void Get_abcABC()
    {
        std::cout << "Стороны: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
   
public:
    Triangle(int Value_a,int Value_b,int Value_c,int Value_A,int Value_B,int Value_C) : Figure (tri)
    {
        a = Value_a;
        b = Value_b;
        c = Value_c;
        A = Value_A;
        B = Value_B;
        C = Value_C;
    }
    void print_info()
    {
        Get_abcABC();
    }
};

class Rectangulartriangle : public Triangle
{
private:
    const int C = 90;
public:
    Rectangulartriangle(int Value_a, int Value_b, int Value_c, int Value_A, int Value_B,int Value_C) : Triangle(Value_a,Value_b,Value_c,Value_A,Value_B,Value_C = 90)
    {
        print_info();
    }
};

int main()
{
    setlocale(LC_ALL, "RU");
    Triangle TRIC(3, 3, 5, 7, 3, 8);
    TRIC.print_info();
    Rectangulartriangle RECT(5, 56, 6, 4, 3, 7);
    return 1;
}
