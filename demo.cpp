#include<Speaker.h>
#include<iostream>
#include<fstream>
using namespace std;
using namespace Hello;

int main(int argc, char *argv[]){
Speaker* speaker = new Speaker();
speaker->sayHello();
ofstream myfile;
myfile.open("test.txt");
myfile << "testtext" << endl;
myfile.close();
}
