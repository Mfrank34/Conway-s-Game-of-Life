#include <iostream>
#include <vector>
// custom class
#include "Cell.h"
#include "Chunk.h"
#include "Map.h"
#include "Point.h"

int main()
{
    Chunk myChunk(2, 8);

    myChunk.get_cell(5,10).set_type('w');
 
    std::cout <<"chunk is " << "\n";
}