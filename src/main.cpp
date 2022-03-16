#include <iostream>
#include <sstream>
#include <fstream>
#include <bits/stdc++.h>
#include "Baloon.h"
#include "Bomb.h"
#include "ReadFile.h"
#include "WriteFile.h"

using namespace std;

int main(int x, char** argv){

    string inputFile = argv[1]; // input1.txt
    string inputFile2 = argv[2];    // input2.txt
    string outputFile = argv[3];    // output.txt

    ReadFile readFile{};
    Baloon creatBal{};
    WriteFile writeFile{};
    Bomb bomb{};


    readFile.readFile(inputFile); // read input1.txt


    creatBal.creatTablo(readFile.balooonID,readFile.row,readFile.coloum,readFile.size); //create the bubble table


    creatBal.game(readFile.balooonID,readFile.row,readFile.coloum,readFile.size); // place balloons and start game


    writeFile.writeFile(outputFile, creatBal.arrayList, readFile.size); // write data from balloons game to output.txt file


    readFile.readFile2(inputFile2); // read input1.txt


    bomb.putBomb(readFile.bombArrayList,readFile.bombrow,readFile.bombcoloum,readFile.size);    // put all bombs to cell


    writeFile.writeFile2(outputFile,bomb.bombArrayListFinal, bomb.totalPoint, readFile.size);   // write data from bombs game to output.txt

    return 0;
}