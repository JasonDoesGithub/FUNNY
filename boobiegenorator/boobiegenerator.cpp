#include<iostream>
#include<string>
#include<ctime>

using namespace std;

string generateBoobs(){

    string shape[3] = {"()","[]","{}"};
    string size[3] = {"", " ", "  "};
    string nipple[3] = {".",",","~"};
    int random1 = rand()%3;
    int random2 = rand()%3;
    int random3 = rand()%3;
    int sizeposition1;
    int sizeposition2;
    if(random3 == 0){
        sizeposition1 = 1;
        sizeposition2 = 2;
    }else if(random3 == 1){
        sizeposition1 = 1;
        sizeposition2 = 3;
    }else if(random3 == 2){
        sizeposition1 = 1;
        sizeposition2 = 4; 
    }
    string boobs = "";
    boobs.insert(0, shape[random1]);
    boobs.insert(1, nipple[random2]);
    boobs.insert(sizeposition1, size[random3]);
    boobs.insert(sizeposition2, size[random3]);
    return boobs;



    
}


int main(){
    srand(time(0));
    
    cout<<"Welcome to the best program to ever be written in c++!!! The bOOb Generator!"<<endl;
    while(true){
    string boob = generateBoobs();
    string boob1 = generateBoobs();
    string boob2;
    if(rand()%8 == 3){
        boob2 = boob1;
    }else{
        boob2 = boob;
    }
    cout<<"\n"<<boob<<boob2<<"\n"<<endl;
    system("pause");
    }
    return 0;
}