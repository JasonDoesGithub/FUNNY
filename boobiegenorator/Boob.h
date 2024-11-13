#ifndef BOOB_H
#define BOOB_H

class Boobs{
    private:
    
    string _shape[3] = {"()","[]","{}"};
    string _size[3] = {"", " ", "  "};
    string _nipple[3] = {".",",","~"};

    public:
    Boobs();
    Boobs(int size, char nipple, char shape);
    string randomBoobie();



}
