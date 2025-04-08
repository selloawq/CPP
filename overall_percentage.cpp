#include <iostream>
#include <string>

struct Student
{
    std::string name;;
    double marks[4];
};

double calculate_percentage(Student s)
{
    double sum = 0;
    double o_perc;

    for(int j = 0; j < sizeof(s.marks); j++)
    {
        sum += s.marks[j];
    }

    o_perc = sum * 100 / 400;
    return o_perc;
}

int main()
{
    double result = calculate_percentage({"John", {40.0, 40.0, 40.0, 40.0}});
    std::cout << result << "%";
}

