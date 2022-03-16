//
// Created by Mustafa on 7.11.2021.
//

#ifndef ASSIGNMENT1_WRITEFILE_H
#define ASSIGNMENT1_WRITEFILE_H

#endif //ASSIGNMENT1_WRITEFILE_H
using namespace std;

class WriteFile{

public:
    void writeFile(string output, vector<vector<int>> arrayList, int size){ // write the data to output.txt from input1.txt

        ofstream outputFile(output);
        outputFile << "PART 1:" << "\n";

        for(int i = 0; i<size;i++){
            for (int j = 0; j < size; ++j) {
                outputFile << arrayList[i][j] << "  ";
            }
            outputFile << "\n";
        }
        outputFile<<endl;
        outputFile.close();
    }
    void writeFile2(string output, vector<vector<int>> bombArrayList, int point, int size){  // write the data to output.txt from input2.txt

        ofstream outputFile(output,ios::app);
        outputFile << "PART 2:" << "\n";
        for(int i = 0; i<size;i++){
            for (int j = 0; j < size; ++j) {
                outputFile << bombArrayList[i][j] << "  ";
            }
            outputFile << "\n";
        }
        outputFile << "Final Point: "<< point <<"p"<< endl;
        outputFile.close();
    }
};