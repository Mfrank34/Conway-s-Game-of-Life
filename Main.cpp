#include <iostream>
#include <vector>
#include "Cell.h"
#include "Point.h"

int main()
{
    // creating a space for a game board

    Cell cell;

    Point point(0,0);
    Point point2(2, 1);

    std::vector<Point> data = point.neighbors();

    for (int i = 0; i < data.size(); i++)
    {
        std::cout << i <<". in hash code " << data[i].hash_code() << "\n";
    }


    return 0;
}