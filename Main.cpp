#include <iostream>
#include <vector>
// custom class
#include "Cell.h"
#include "Chunk.h"
#include "Map.h"
#include "Point.h"

int main()
{
    Map world;

    world.get_cell(100, 50).set_type('w');
    std::cout << "World cell at 100, 50 type: "
              << world.get_cell(100, 50).get_type() << "\n";

    world.get_cell(100, 50).set_type('#');
    std::cout << "World cell at 100, 100 type: "
              << world.get_cell(200, 100).get_type() << "\n";

    return 0;
}