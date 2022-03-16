//
// Created by Mustafa on 3.11.2021.
//

#ifndef ASSIGNMENT1_READFILE_H
#define ASSIGNMENT1_READFILE_H

#endif //ASSIGNMENT1_READFILE_H

using namespace std;

class ReadFile{

public:
    int size;   // size of array or vector
    string line;
    vector<int> balooonID;  // type of balloon
    vector<int> coloum; // column in which the balloon will be placed
    vector<int> row;    // row in which the balloon will be placed
    vector<int> bombrow;    // row in which the bomb will be placed
    vector<int> bombcoloum; // coloum in which the bomb will be placed
    vector<vector<int>> bombArrayList;  //type of bomb


    void readFile(string input) {   // read data from input1.txt
        ifstream inputFile(input);
        int count = 1;

        while (getline(inputFile, line)) {

            istringstream ss(line);
            string word;

            if (count == 1) {
                ss >> word;
                stringstream convert(word);
                convert >> size;
            }
            else {
                int count2 = 1;
                while (ss >> word) {
                    if (count2 == 1) {
                        int lorem = 0;
                        stringstream convert(word);
                        convert >> lorem;
                        balooonID.insert(balooonID.begin() + count - 2,lorem);
                    }
                    else if (count2 == 2) {
                        int lorem2 = 0;
                        stringstream convert(word);
                        convert >> lorem2;
                        row.insert(row.begin() + count - 2,lorem2);
                    }
                    else {
                        int lorem3 = 0;
                        stringstream convert(word);
                        convert >> lorem3;
                        coloum.insert(coloum.begin() + count - 2,lorem3);
                    }
                    count2++;
                }
                count2 = 1;
            }
            count++;
        }
        inputFile.close();
    }

    void readFile2(string input){   // read data from input2.txt
        ifstream inputFile(input);
        int count = 1;
        while (getline(inputFile, line)) {
            istringstream ss(line);
            string word;

            if(count == 1){
                ss >> word;
                int x = stoi(word);
                size = x;
            }
            else if(count < size +2){
                int k =0;
                vector<int> temp;
                while (ss >> word) {
                    int x = stoi(word);
                    temp.insert(temp.begin()+k, x);
                    k++;
                }
                bombArrayList.insert(bombArrayList.begin() +count-2,temp);
            }
            else {
                int counter = 1;
                while (ss >> word) {
                    int x = stoi(word);
                    if (counter == 1) {
                        bombrow.insert(bombrow.begin() + count - size - 2, x);
                        counter++;
                    }
                    else {
                        bombcoloum.insert(bombcoloum.begin() + count - size - 2, x);
                    }
                }
            }
            count++;
        }
        inputFile.close();
    }
};