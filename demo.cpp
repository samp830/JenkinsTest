#include<Speaker.h>
#include<iostream>
#include<fstream>
using namespace std;
using namespace Hello;

int main(int argc, char *argv[]){
Speaker* speaker = new Speaker();
speaker->sayHello();
std :: ofstream outfile ("test.txt");
outfile << "test text" << std :: endl;
outfile.close();
}
