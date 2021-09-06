#include <iostream>

#define WEEK_DAY(a) DAY_##a
#define DAY_1   std::cout << "Monday" << std::endl;
#define DAY_2   std::cout << "Tuesday" << std::endl;
#define DAY_3   std::cout << "Wednesday" << std::endl;
#define DAY_4   std::cout << "Thursday" << std::endl;
#define DAY_5   std::cout << "Friday" << std::endl;
#define DAY_6   std::cout << "Saturday" << std::endl;
#define DAY_7   std::cout << "Sunday" << std::endl;

int main() {
    int number;
    std::cout << "Input the number of the day of the week: ";
    std::cin >> number;
    switch(number){
        case 1:
            WEEK_DAY(1);
            break;
        case 2:
            WEEK_DAY(2);
            break;
        case 3:
            WEEK_DAY(3);
            break;
        case 4:
            WEEK_DAY(4);
            break;
        case 5:
            WEEK_DAY(5);
            break;
        case 6:
            WEEK_DAY(6);
            break;
        case 7:
            WEEK_DAY(7);
            break;
        default:
            std::cout << "Bad number of the day of the week!" << std::endl;
    }

    return 0;
}
