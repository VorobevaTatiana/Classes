
#include <iostream>
class Calculator {
    
private:
    double num1;
    double num2;
public:
      Calculator( double num1_, double num2_) {
        num1 = num1_;
        num2 = num2_;
    }
  
        double add() {
            return (num1 + num2);
        }
        double multiply() {
            return (num1 * num2);
        }
        double subtract_1_2() {
            return (num1 - num2);
        }
        double subtract_2_1() {
            return (num2 - num1);
        }
        double divide_1_2() {
            return (num1 / num2);
        }
        double divide_2_1() {
            return (num2 / num1);
        }
        bool set_num1() {
            if (num1 != 0) {
                this->num1 = num1;
                return true;
            }
            else return false;
        }
        bool set_num2() {
            if (num2 != 0) {
                this->num2 = num2;
                return true;
            }
            else return false;
        }
};

    int main()
    {
        setlocale(LC_ALL, "Russian");
        system("chcp 1251");
             double num1, num2;
        std::cout << "Enter First Number: ";
        std::cin >> num1;
        std::cout << "Enter Second Number: ";
        std::cin >> num2;
        Calculator obj(num1,num2);
              
    if (obj.set_num1() == false) {
        std::cout << "Не верный ввод! \n" << " Введите num1: \n";
        std::cin >> num1;
    }
    
    if (obj.set_num2() == false) {
        std::cout << "Не верный ввод! \n" << " Введите num2: \n";
        std::cin >> num2;
    }
   std::cout<< "num1 + num2="<<obj.add()<<"\n";
   std::cout << "num1 * num2=" << obj.multiply()<<"\n";
   std::cout << "num1 - num2=" << obj.subtract_1_2()<<"\n";
   std::cout << "num2 - num1=" << obj.subtract_2_1()<< "\n";
   std::cout << "num1 / num2=" << obj.divide_1_2()<<"\n";
   std::cout << "num2 / num1=" << obj.divide_2_1()<<"\n";
   
    }

