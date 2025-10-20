#include <iostream>
#include <hash_map>
#include "Cell.h"
#include "Point.h"

int main()
{
    // creating a space for a game board 
    
    Cell cell;

    Point point(2,1);
    Point point2(2,1);

    if (point == point2)
    {
        //code code
        std::cout << "Points match \n";
    }
    else
    {
        std::cout << "Points don't match \n";
    }

    std::cout << "hello world \n";
    return 0;
}