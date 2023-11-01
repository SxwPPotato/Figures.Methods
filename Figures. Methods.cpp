#include <iostream>
#include <string>

class Figures {
protected:
    int Number_of_sides;
    std::string Name_of_figure;
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
public:
    Figures() {
        Number_of_sides = 0;
        Name_of_figure = "Фигура";
    }
    void Show_sides() {
        std::cout <<"Количество сторон: " << Number_of_sides << "\n";
    }
    void figure_correct() {
        if (Number_of_sides == 0) { std::cout << "Правильная фигура\n"; }
        else if (Number_of_sides = 3) {
            if(A + B + C == 180){ std::cout << "Правильная фигура\n"; }
            else { std::cout << "Неправильная фигура\n"; }
        }
        else if (Number_of_sides = 4) {
            if (A + B + C + D == 360) { std::cout << "Правильная фигура\n"; }
            else { std::cout << "Неправильная фигура\n"; }
        }
        else { std::cout << "Такой фигуры нет\n"; }
    }
    void Show_name() {
        std::cout <<"\n" << "\n" << Name_of_figure << ":\n";
    }
};

class Triangle : public Figures {
public:
    Triangle() {
        a = 0;
        b = 0;
        c = 0;
        A = 0;
        B = 0;
        C = 0;
        Number_of_sides = 3;
        Name_of_figure = "Треугольник";
    };
    Triangle(int a, int b, int c, int A, int B, int C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        Number_of_sides = 3;
        Name_of_figure = "Треугольник";
    }
    void Show_triangle() {
        std::cout << "Стороны: " << a << " " << b << " " << c << "\n";
        std::cout << "Углы: " << A << " " << B << " " << C;
    }
};

class Right_triangle : public Triangle {
public:
    Right_triangle(int a, int b, int c, int A, int B) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        C = 90;
        Name_of_figure = "Прямоугольный треугольник";
    }
};

class Isosceles_triangle : public Triangle {
public:
    Isosceles_triangle(int a, int b, int A, int B) {
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
        c = a;
        C = A;
        Name_of_figure = "Равнобедренный треугольник";
    }
};

class Equilateral_triangle : public Triangle {
public:
    Equilateral_triangle(int a) {
        this->a = a;
        b = c = a;
        A = B = C = 60;
        Name_of_figure = "Равностороний треугольник";
    }
};


class Quadrangle : public Figures {
public:
    Quadrangle() {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        A = 0;
        B = 0;
        C = 0;
        D = 0;
        Number_of_sides = 4;
        Name_of_figure = "Четырёхугольник";
    };
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
        Number_of_sides = 4;
        Name_of_figure = "Четырёхугольник";
    }
    void Show_quadrangle() {
        std::cout << "Стороны: " << a << " " << b << " " << c << " " << d << "\n";
        std::cout << "Углы: " << A << " " << B << " " << C << " " << D;
    }
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram() {};
    Parallelogram(int a, int b, int A, int B) {
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
        c = a;
        d = b;
        C = A;
        D = B;
        Name_of_figure = "Параллелограмм";
    }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b) {
        this->a = a;
        this->b = b;
        c = a;
        d = b;
        B = C = D = A = 90;
        Name_of_figure = "Прямоугольник";
    }
};




class Rhomb : public Parallelogram {
public:
    Rhomb() {};
    Rhomb(int a, int A, int B) {
        this->a = a;
        this->A = A;
        this->B = B;
        b = c = d = a;
        C = A;
        D = B;
        Name_of_figure = "Ромб";
    }
};


class Quadrate : public Rhomb {
public:
    Quadrate(int a) {
        this->a = a;
        b = c = d = a;
        B = C = D = A = 90;
        Name_of_figure = "Квадрат";
    }
};

int main()
{
    setlocale(LC_ALL, "russian");
    Figures figure;
    Triangle triangle(15, 25, 30, 60, 40, 80);
    Quadrangle quadrangle(10, 20, 30, 40, 80, 90, 50, 60);
    Right_triangle right_triangle(10, 20, 30, 30, 50);
    Isosceles_triangle isosceles_triangle(20, 30, 50, 60);
    Equilateral_triangle equilateral_triangle(10);
    Parallelogram parallelogram(10, 20, 30, 40);
    Rectangle rectangle(20, 30);
    Rhomb rhomb(30, 20, 30);
    Quadrate quadrate(20);

    figure.Show_name();
    figure.figure_correct();
    figure.Show_sides();
    
    triangle.Show_name();
    triangle.figure_correct();
    triangle.Show_sides();
    triangle.Show_triangle();
    
    right_triangle.Show_name();
    right_triangle.figure_correct();
    right_triangle.Show_sides();
    right_triangle.Show_triangle();
  
    isosceles_triangle.Show_name();
    isosceles_triangle.figure_correct(); 
    isosceles_triangle.Show_sides(); 
    isosceles_triangle.Show_triangle();

    equilateral_triangle.Show_name();
    equilateral_triangle.figure_correct(); 
    equilateral_triangle.Show_sides(); 
    equilateral_triangle.Show_triangle();

    quadrangle.Show_name();
    quadrangle.figure_correct(); 
    quadrangle.Show_sides();
    quadrangle.Show_quadrangle();

    rectangle.Show_name();
    rectangle.figure_correct();
    rectangle.Show_sides(); 
    rectangle.Show_quadrangle();

    quadrate.Show_name();
    quadrate.figure_correct();
    quadrate.Show_sides(); 
    quadrate.Show_quadrangle();

    parallelogram.Show_name();
    parallelogram.figure_correct();
    parallelogram.Show_sides(); 
    parallelogram.Show_quadrangle();

    rhomb.Show_name();
    rhomb.figure_correct();
    rhomb.Show_sides(); 
    rhomb.Show_quadrangle();
    std::cout << "\n";


    return 0;
}