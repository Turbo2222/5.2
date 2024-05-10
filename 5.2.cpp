#include <iostream>
#include<string>

class shapes {

public:
    std::string name;
    int side_a=0;
    int side_b =0;
    int side_c =0;
    int side_d=0;

    int cornerA =0;
    int cornerB =0;
    int cornerC =0;
    int cornerD =0;
   

    shapes(int a, int b, int c, int cA, int cB, int cC) : side_a(a), side_b(b), side_c(c),
        cornerA(cA), cornerB(cB), cornerC(cC) {
       
        this->side_a = a;
        this->side_b = b;
        this->side_c = c;

        this->cornerA = cA;
        this->cornerB = cB;
        this->cornerC = cC;
        
    }
    virtual void print_info() {
       std::cout << name << std::endl << "Стороны: a=" << side_a << " b=" << side_b << " c=" << side_c <<
       std::endl << "Углы: A=" << cornerA << " B=" << cornerB << " C=" <<cornerC<<std::endl << std::endl;
    }


    shapes(int a, int b, int c, int d, int cA, int cB, int cC, int cD) :side_a(a), side_b(b), side_c(c), side_d(d),
        cornerA(cA), cornerB(cB), cornerC(cC), cornerD(cD) {
 
        this->side_d = d;
        this->cornerD = cD;

    }

    virtual void print_info_two() {
        std::cout << name << std::endl << "Стороны: a=" << side_a << " b=" << side_b << " c=" << side_c << " d=" << side_d <<
            std::endl << "Углы: A=" << cornerA << " B=" << cornerB << " C=" << cornerC << " D=" << cornerD <<
            std::endl << std::endl;
    }

};




class triangle :public shapes {
public:

    triangle(int a, int b, int c, int cA, int cB, int cC) :shapes( a, b, c, cA, cB, cC) {
        name = "Треугольник:";
         void print_info();
    }
   
};
     class rectangular_triangle :public shapes {
     public:
         rectangular_triangle( int a, int b, int c, int cA, int cB, int cC) :shapes( a, b, c, cA, cB, cC){
         name = "Прямоугольный треугольник:";
         cornerC = 90;
         void print_info();
     }
        
     };


     class isosceles_triangle : public shapes {
     public:
         isosceles_triangle(int a, int b, int c, int cA, int cB, int cC) : shapes(a, b, c, cA, cB, cC) {
             name = "Равнобедренный треугольник:";
             if (side_a != side_c) {
                 side_a = side_c;
             }
             if (cornerA != cornerC) {
                 cornerA = cornerC;
             }
             void print_info();

         }

     };
        
     class equilateral_triangle : public shapes{
     public:
         equilateral_triangle(int a, int b, int c, int cA, int cB, int cC) : shapes(a, b, c, cA, cB, cC) {
             name = "Равносторонний треугольник:";
             if (side_a != side_b != side_c) {
                 side_a = side_b = side_c;
             }
             
             cornerA = 60;
             cornerB = 60;
             cornerC = 60;
             void print_info();

         }

     };

     class quadrangle : public shapes {
     public:
         quadrangle(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
             name = "Четырехугольник:";
             void print_info_two();
         }
     };
      
    class rectangle : public shapes {
         public:
             rectangle(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
                 name = "Прямоугольник:";
                
                 side_a = side_c;
                  side_b = side_d ;

                  cornerA = 90;
                  cornerB = 90;
                  cornerC = 90; 
                  cornerD = 90;
                 void print_info_two();
             }

    };

    class square : public shapes {
    public:
        square(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
            name = "Квадрат:";
            side_a = side_c= side_b = side_d;

            cornerA = 90;
            cornerB = 90;
            cornerC = 90;
            cornerD = 90;
          void print_info_two();
        }

    };

    class parallelogram : public shapes {
    public:
        parallelogram(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
            name = "Параллелограмм:";
            side_a = side_c;
            side_b = side_d;

            cornerA = cornerC;
            cornerB = cornerD;
           
            
            void print_info_two();
        }

    };

    class rhomb : public shapes {
    public:
        rhomb(int a, int b, int c, int d, int cA, int cB, int cC, int cD) : shapes(a, b, c, d, cA, cB, cC, cD) {
            name = "Ромб:";
            side_a = side_c = side_b = side_d;
            cornerA = cornerC;
            cornerB = cornerD;
            void print_info_two();
        }

    };




int main()
{
    setlocale(LC_ALL, "ru");

    triangle tri(10,20,30,50,60,70);
    tri.print_info();

    rectangular_triangle rect(10,20,30,50,60,90);
    rect.print_info();

    isosceles_triangle isos(10, 20, 10, 50, 60, 50);
    isos.print_info();

    equilateral_triangle equi(30, 30, 30, 60, 60, 60);
    equi.print_info();

    quadrangle quad(10, 20, 30, 40, 50, 60, 70, 80);
    quad.print_info_two();

    rectangle rectang(10, 20, 10, 20, 90, 90, 90, 90);
    rectang.print_info_two();

    square square(20, 20, 20, 20, 90, 90, 90, 90);
    square.print_info_two();

    parallelogram paral(20,30,20,30,30,40,30,40);
    paral.print_info_two();

    rhomb rhomb(30, 30, 30, 30, 30, 40, 30, 40);
    rhomb.print_info_two();

    return 0;
}

