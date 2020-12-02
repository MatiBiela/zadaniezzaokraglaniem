#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
long liczba1;
ifstream input;
ofstream output;

input.open("C:\\Users\\Amd\\Documents\\Programowanie C++\\zaokraglanie\\zaokraglic.txt");
output.open("C:\\Users\\Amd\\Documents\\Programowanie C++\\zaokraglanie\\plikwynikowy.txt");
    
if(input.good()){
    while(!input.eof()){
        input >> hex >> liczba1;
        cout << dec << liczba1 << endl;
        cout << dec << (liczba1 & 1110);
        liczba1 >> output;
    	}
    }
input.close();
output.close()
	return 0;
}
