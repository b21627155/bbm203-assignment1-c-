//
// Created by Mustafa on 2.11.2021.
//

#ifndef ASSIGNMENT1_TABLO_H
#define ASSIGNMENT1_TABLO_H

#endif //ASSIGNMENT1_TABLO_H

using namespace std;

class Baloon{

public:
    vector<vector<int>> arrayList;
    void creatTablo(vector<int> balooonID,vector<int> row,vector<int> coloum,int size){ // create table with all cells 0
        for(int i =0; i < size; i++){
            vector<int> temp;
            for (int j = 0; j < size; ++j) {
                temp.insert(temp.begin()+j,0);

            }
            arrayList.insert(arrayList.begin(),temp);
        }


    }
    void game(vector<int> balooonID,vector<int> row,vector<int> coloum,int size){   // start game and place balloons then when link is created between three
        for (int i = 0; i < balooonID.size(); ++i) {        //or more balloons of the same type, increase the value of the link balloon by 1 and reset the others
            arrayList[row[i]][coloum[i]] = balooonID[i];
            checkCell(balooonID, row, coloum, size, i);
        }

    }
    void checkCell(vector<int> balooonID, vector<int> row, vector<int> coloum, int size, int i){    // When a balloon is placed, it controls all the cells around it and that may be
        if(row[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]]){  // connected one by one. if any increase the value of the link balloon by 1 and reset the others
            if(row[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]-2][coloum[i]]){
                if(row[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]]){
                    if(row[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]+2][coloum[i]]){
                        if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                            if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                                if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                    if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]-2][coloum[i]] = 0;
                                        arrayList[row[i]-2][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]-2][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]-2][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]][coloum[i]-2] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                            else{
                                if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                    if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]-2][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);

                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]-2][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]-2][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                        }
                        else{
                            if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]-2][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]][coloum[i]+2] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]-2][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                            else{
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]-2][coloum[i]] = 0;
                                arrayList[row[i]+1][coloum[i]] = 0;
                                arrayList[row[i]+2][coloum[i]] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                        }
                    }
                    else{
                        if((coloum[i] != 0 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]-1]){
                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                            arrayList[row[i]-1][coloum[i]] = 0;
                            arrayList[row[i]-2][coloum[i]] = 0;
                            arrayList[row[i]+1][coloum[i]] = 0;
                            arrayList[row[i]+1][coloum[i]-1] = 0;
                            checkCell(balooonID, row, coloum, size, i);
                        }
                        else{
                            if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]-2][coloum[i]] = 0;
                                arrayList[row[i]+1][coloum[i]] = 0;
                                arrayList[row[i]+1][coloum[i]+1] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                            else{
                                if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                                    if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                                        if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]-2][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]-2] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                arrayList[row[i]][coloum[i]+2] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]-2][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]-2] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                        else{
                                            if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]-2][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]-2] = 0;
                                                arrayList[row[i]+1][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                               arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                               arrayList[row[i]-1][coloum[i]] = 0;
                                               arrayList[row[i]-2][coloum[i]] = 0;
                                               arrayList[row[i]+1][coloum[i]] = 0;
                                               arrayList[row[i]][coloum[i]-1] = 0;
                                               arrayList[row[i]][coloum[i]-2] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                    }
                                    else{
                                        if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]-1][coloum[i]] = 0;
                                            arrayList[row[i]-2][coloum[i]] = 0;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]+1][coloum[i]+11] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                                if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                    arrayList[row[i]-1][coloum[i]] = 0;
                                                    arrayList[row[i]-2][coloum[i]] = 0;
                                                    arrayList[row[i]+1][coloum[i]] = 0;
                                                    arrayList[row[i]][coloum[i]-1] = 0;
                                                    arrayList[row[i]][coloum[i]+1] = 0;
                                                    arrayList[row[i]][coloum[i]+2] = 0;
                                                    checkCell(balooonID, row, coloum, size, i);
                                                }
                                                else{
                                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                    arrayList[row[i]-1][coloum[i]] = 0;
                                                    arrayList[row[i]-2][coloum[i]] = 0;
                                                    arrayList[row[i]+1][coloum[i]] = 0;
                                                    arrayList[row[i]][coloum[i]-1] = 0;
                                                    arrayList[row[i]][coloum[i]+1] = 0;
                                                    checkCell(balooonID, row, coloum, size, i);
                                                }
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]-2][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                    }
                                }
                                else{
                                    if((coloum[i] != 0 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]-1]){
                                        if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]-2][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                arrayList[row[i]][coloum[i]+2] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]-2][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                        else{
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]-1][coloum[i]] = 0;
                                            arrayList[row[i]-2][coloum[i]] = 0;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]+1][coloum[i]-1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }

                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]-2][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                            }
                        }
                    }
                }
                else{
                    if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                        if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                            if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]-2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]][coloum[i]-2] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]][coloum[i]+2] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    if((coloum[i] != size-1 && row[i]!= size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]-2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]+1][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]-2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }

                                }
                            }
                            else{
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]-2][coloum[i]] = 0;
                                arrayList[row[i]][coloum[i]-1] = 0;
                                arrayList[row[i]][coloum[i]-2] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                        }
                        else{
                            if((coloum[i] != 0 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]-1]){
                                if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                    if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]-2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]+1][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        if((coloum[i]+1 != size-1 && row[i]+1 != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]-1][coloum[i]] = 0;
                                            arrayList[row[i]-2][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]+1][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]+1][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]-1][coloum[i]] = 0;
                                            arrayList[row[i]-2][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]+1][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                    }
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]-2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]+1][coloum[i]-1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                            else{
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]-2][coloum[i]] = 0;
                                arrayList[row[i]][coloum[i]-1] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                        }
                    }
                    else{
                        if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]-2][coloum[i]] = 0;
                                arrayList[row[i]][coloum[i]+1] = 0;
                                arrayList[row[i]][coloum[i]+2] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                            else{
                                if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]-2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]+1][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]-2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                        }
                        else{
                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                            arrayList[row[i]-1][coloum[i]] = 0;
                            arrayList[row[i]-2][coloum[i]] = 0;
                            checkCell(balooonID, row, coloum, size, i);
                        }
                    }
                }
            }
            else{
                if(row[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]]){
                    if(row[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]+2][coloum[i]]){
                        if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                            if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                                if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                    if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]][coloum[i]-2] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                            else{
                                if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                    if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);

                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                        }
                        else{
                            if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]][coloum[i]+2] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                            else{
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]+1][coloum[i]] = 0;
                                arrayList[row[i]+2][coloum[i]] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                        }
                    }
                    else{
                        if((coloum[i] != 0 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]-1]){
                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                            arrayList[row[i]-1][coloum[i]] = 0;
                            arrayList[row[i]+1][coloum[i]] = 0;
                            arrayList[row[i]+1][coloum[i]-1] = 0;
                            checkCell(balooonID, row, coloum, size, i);
                        }
                        else{
                            if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]+1][coloum[i]] = 0;
                                arrayList[row[i]+1][coloum[i]+1] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                            else{
                                if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                                    if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                                        if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]-2] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                arrayList[row[i]][coloum[i]+2] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]-2] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                        else{
                                            if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]-2] = 0;
                                                arrayList[row[i]+1][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]-2] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                    }
                                    else{
                                        if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]-1][coloum[i]] = 0;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]+1][coloum[i]+11] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                                if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2] ){
                                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                    arrayList[row[i]-1][coloum[i]] = 0;
                                                    arrayList[row[i]+1][coloum[i]] = 0;
                                                    arrayList[row[i]][coloum[i]-1] = 0;
                                                    arrayList[row[i]][coloum[i]+1] = 0;
                                                    arrayList[row[i]][coloum[i]+2] = 0;
                                                    checkCell(balooonID, row, coloum, size, i);
                                                }
                                                else{
                                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                    arrayList[row[i]-1][coloum[i]] = 0;
                                                    arrayList[row[i]+1][coloum[i]] = 0;
                                                    arrayList[row[i]][coloum[i]-1] = 0;
                                                    arrayList[row[i]][coloum[i]+1] = 0;
                                                    checkCell(balooonID, row, coloum, size, i);
                                                }
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                    }
                                }
                                else{
                                    if((coloum[i] != 0 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]-1]){
                                        if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                arrayList[row[i]][coloum[i]+2] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]-1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]+1][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                        else{
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]-1][coloum[i]] = 0;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]+1][coloum[i]-1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }

                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                            }
                        }
                    }
                }
                else{
                    if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                        if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                            if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]][coloum[i]-2] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]][coloum[i]+2] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    if((coloum[i] != size-1 && row[i]!= size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]+1][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }

                                }
                            }
                            else{
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]][coloum[i]-1] = 0;
                                arrayList[row[i]][coloum[i]-2] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                        }
                        else{
                            if((coloum[i] != 0 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]-1]){
                                if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                    if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]-1][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]+1][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        if((coloum[i]+1 != size-1 && row[i]+1 != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]-1][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]+1][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]+1][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]-1][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]+1][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                    }
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]+1][coloum[i]-1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                            else{
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]][coloum[i]-1] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                        }
                    }
                    else{
                        if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]-1][coloum[i]] = 0;
                                arrayList[row[i]][coloum[i]+1] = 0;
                                arrayList[row[i]][coloum[i]+2] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                            else{
                                if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]-1][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]+1][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                        }
                    }
                }
            }
        }
        else{
            if(row[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]]){
                if(row[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]+2][coloum[i]]){
                    if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                        if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                            if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]][coloum[i]-2] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]][coloum[i]+2] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]-1][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                            }
                            else{
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]+1][coloum[i]] = 0;
                                arrayList[row[i]+2][coloum[i]] = 0;
                                arrayList[row[i]][coloum[i]-1] = 0;
                                arrayList[row[i]][coloum[i]-2] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                        }
                        else{
                            if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                    if((coloum[i] != 0 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]-1]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        arrayList[row[i]-1][coloum[i]-1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+2][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                                else{
                                    if((coloum[i] != 0 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]-1]){
                                        if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]+2][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]-1][coloum[i]-1] = 0;
                                            arrayList[row[i]-1][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]+2][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]-1][coloum[i]-1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }

                                    }
                                    else{
                                        if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]+2][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]-1][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]+2][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                    }
                                }
                            }
                            else{
                                if((coloum[i] != 0 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]-1]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]-1][coloum[i]-1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                        }
                    }
                    else{
                        if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]+1][coloum[i]] = 0;
                                arrayList[row[i]+2][coloum[i]] = 0;
                                arrayList[row[i]][coloum[i]+1] = 0;
                                arrayList[row[i]][coloum[i]+2] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                            else{
                                if((coloum[i]+1 != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]-1][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+2][coloum[i]] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                        }
                        else{
                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                            arrayList[row[i]+1][coloum[i]] = 0;
                            arrayList[row[i]+2][coloum[i]] = 0;
                            checkCell(balooonID, row, coloum, size, i);
                        }
                    }
                }
                else{
                    if((coloum[i] != 0 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]-1]){
                        if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]+1][coloum[i]] = 0;
                                arrayList[row[i]+1][coloum[i]-1] = 0;
                                arrayList[row[i]][coloum[i]+1] = 0;
                                arrayList[row[i]][coloum[i]+2] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                            else{
                                if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]-1] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]-1][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]-1] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                        }
                        else{
                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                            arrayList[row[i]+1][coloum[i]] = 0;
                            arrayList[row[i]+1][coloum[i]-1] = 0;
                            checkCell(balooonID, row, coloum, size, i);
                        }

                    }
                    else{
                        if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                            if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                                if((coloum[i] != 0 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]-1]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]+1][coloum[i]] = 0;
                                    arrayList[row[i]+1][coloum[i]+1] = 0;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]-1][coloum[i]-1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]+1][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                            }
                            else{
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]+1][coloum[i]] = 0;
                                arrayList[row[i]+1][coloum[i]+1] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                        }
                        else{
                            if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                                if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                                    if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                        if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]-2] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]][coloum[i]+2] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]-2] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                arrayList[row[i]-1][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]-2] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                                else{
                                    if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                                if((coloum[i] != 0 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]-1]){
                                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                    arrayList[row[i]+1][coloum[i]] = 0;
                                                    arrayList[row[i]][coloum[i]-1] = 0;
                                                    arrayList[row[i]][coloum[i]+1] = 0;
                                                    arrayList[row[i]][coloum[i]+2] = 0;
                                                    arrayList[row[i]-1][coloum[i]-1] = 0;
                                                    checkCell(balooonID, row, coloum, size, i);
                                                }
                                                else{
                                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                    arrayList[row[i]+1][coloum[i]] = 0;
                                                    arrayList[row[i]][coloum[i]-1] = 0;
                                                    arrayList[row[i]][coloum[i]+1] = 0;
                                                    arrayList[row[i]][coloum[i]+2] = 0;
                                                    checkCell(balooonID, row, coloum, size, i);
                                                }
                                            }
                                            else{
                                                if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                                    if((coloum[i] != 0 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]-1]){
                                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                        arrayList[row[i]+1][coloum[i]] = 0;
                                                        arrayList[row[i]][coloum[i]-1] = 0;
                                                        arrayList[row[i]][coloum[i]+1] = 0;
                                                        arrayList[row[i]-1][coloum[i]+1] = 0;
                                                        arrayList[row[i]-1][coloum[i]-1] = 0;
                                                        checkCell(balooonID, row, coloum, size, i);
                                                    }
                                                    else{
                                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                        arrayList[row[i]+1][coloum[i]] = 0;
                                                        arrayList[row[i]][coloum[i]-1] = 0;
                                                        arrayList[row[i]][coloum[i]+1] = 0;
                                                        arrayList[row[i]-1][coloum[i]+1] = 0;
                                                        checkCell(balooonID, row, coloum, size, i);
                                                    }
                                                }
                                                else{
                                                    if((coloum[i] != 0 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]-1]){
                                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                        arrayList[row[i]+1][coloum[i]] = 0;
                                                        arrayList[row[i]][coloum[i]-1] = 0;
                                                        arrayList[row[i]][coloum[i]+1] = 0;
                                                        arrayList[row[i]-1][coloum[i]-1] = 0;
                                                        checkCell(balooonID, row, coloum, size, i);
                                                    }
                                                    else{
                                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                        arrayList[row[i]+1][coloum[i]] = 0;
                                                        arrayList[row[i]][coloum[i]-1] = 0;
                                                        arrayList[row[i]][coloum[i]+1] = 0;
                                                        checkCell(balooonID, row, coloum, size, i);
                                                    }
                                                }
                                            }
                                        }
                                    else{
                                            if((coloum[i] != 0 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]-1]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]-1][coloum[i]-1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]+1][coloum[i]] = 0;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                }
                            }
                            else{
                                if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                    if((coloum[i] != 0 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]-1]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]+1][coloum[i]] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]+1][coloum[i]-1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]][coloum[i]+2] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]+1][coloum[i]] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                    }
                                }
                            }
                        }

                    }
                }
            }
            else {
                if(coloum[i] != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-1]){
                    if(coloum[i]-1 != 0 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]-2]){
                        if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                            if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]][coloum[i]-1] = 0;
                                arrayList[row[i]][coloum[i]-2] = 0;
                                arrayList[row[i]][coloum[i]+1] = 0;
                                arrayList[row[i]][coloum[i]+2] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                            else{
                                if((coloum[i] != size-1 && row[i]!= size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]][coloum[i]-2] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]+1][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    if((coloum[i] != size-1 && row[i]!= 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]-1][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]-2] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                }
                            }
                        }
                        else{
                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                            arrayList[row[i]][coloum[i]-1] = 0;
                            arrayList[row[i]][coloum[i]-2] = 0;
                            checkCell(balooonID, row, coloum, size, i);
                        }
                    }
                    else{
                        if((coloum[i] != 0 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]-1]){
                            if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]+1][coloum[i]-1] = 0;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]][coloum[i]+2] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                                else{
                                    if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]+1][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]+1][coloum[i]+1] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]+1][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]-1][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]+1][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                    }
                                }
                            }
                            else{
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]][coloum[i]-1] = 0;
                                arrayList[row[i]+1][coloum[i]-1] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                        }
                        else{
                            if((coloum[i] != 0 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]-1]){
                                if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                    if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]-1][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]-1][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]+1][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]-1][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                arrayList[row[i]-1][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]-1][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                    }
                                }
                                else{
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]][coloum[i]-1] = 0;
                                    arrayList[row[i]-1][coloum[i]-1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                            else{
                                if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                                    if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                                        arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                        arrayList[row[i]][coloum[i]-1] = 0;
                                        arrayList[row[i]][coloum[i]+1] = 0;
                                        arrayList[row[i]][coloum[i]+2] = 0;
                                        checkCell(balooonID, row, coloum, size, i);
                                    }
                                    else{
                                        if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                            arrayList[row[i]][coloum[i]-1] = 0;
                                            arrayList[row[i]][coloum[i]+1] = 0;
                                            arrayList[row[i]+1][coloum[i]+1] = 0;
                                            checkCell(balooonID, row, coloum, size, i);
                                        }
                                        else{
                                            if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                arrayList[row[i]-1][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                            else{
                                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                                arrayList[row[i]][coloum[i]-1] = 0;
                                                arrayList[row[i]][coloum[i]+1] = 0;
                                                checkCell(balooonID, row, coloum, size, i);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else{
                    if(coloum[i] != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+1]){
                        if(coloum[i]+1 != size-1 && arrayList[row[i]][coloum[i]] == arrayList[row[i]][coloum[i]+2]){
                            arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                            arrayList[row[i]][coloum[i]+1] = 0;
                            arrayList[row[i]][coloum[i]+2] = 0;
                            checkCell(balooonID, row, coloum, size, i);
                        }
                        else{
                            if((coloum[i] != size-1 && row[i] != size-1) && arrayList[row[i]][coloum[i]] == arrayList[row[i]+1][coloum[i]+1]){
                                arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                arrayList[row[i]][coloum[i]+1] = 0;
                                arrayList[row[i]+1][coloum[i]+1] = 0;
                                checkCell(balooonID, row, coloum, size, i);
                            }
                            else{
                                if((coloum[i] != size-1 && row[i] != 0) && arrayList[row[i]][coloum[i]] == arrayList[row[i]-1][coloum[i]+1]){
                                    arrayList[row[i]][coloum[i]] = arrayList[row[i]][coloum[i]] +1;
                                    arrayList[row[i]][coloum[i]+1] = 0;
                                    arrayList[row[i]-1][coloum[i]+1] = 0;
                                    checkCell(balooonID, row, coloum, size, i);
                                }
                            }
                        }
                    }
                }

            }
        }
    }

};