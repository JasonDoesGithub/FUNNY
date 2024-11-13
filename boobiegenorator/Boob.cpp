#include "Boob.h"

Boobs::Boobs()
{
}

Boobs::Boobs(int size, char nipple, char shape)
{
    string _shape[3] = {"()","[]","{}"};
    string _size[3] = {"", " ", "  "};
    string _nipple[3] = {".",",","~"};
    _size = size;
    _nipple = nipple;
    _shape = shape;
}

string Boobs::randomBoobie()
{
    string boobs = "";
    boobs.insert(0, _shape[rand%2]);
    boobs.insert(1. _nipple[rand%2]);
    return boobs;

}
