//
// Created by Mustafa on 7.11.2021.
//

#ifndef ASSIGNMENT1_BOMB_H
#define ASSIGNMENT1_BOMB_H

#endif //ASSIGNMENT1_BOMB_H

using namespace std;

class Bomb{
public:
    int totalPoint = 0; //final score earned from the bomb game
    vector<int> puan;
    vector<vector<int>> bombArrayListFinal;
    void putBomb(vector<vector<int>> bombList, vector<int> row, vector<int> coloum, int size){  // place bombs and detonate bombs
        bombArrayListFinal = bombList;
        for(int i = 0; i < row.size(); i++){
            north(row,coloum,i);
            south(row,coloum,i,size);
            east(row,coloum,i,size);
            west(row,coloum,i);
            northeast(row,coloum,i,size);
            northwest(row,coloum,i,size);
            southeast(row,coloum,i,size);
            southwest(row,coloum,i,size);
            puan.push_back(bombArrayListFinal[row[i]][coloum[i]]);
            bombArrayListFinal[row[i]][coloum[i]] = 0;
        }
        finalPoint();
    }
    void north(vector<int> row, vector<int> coloum, int i){ //check the same numbers in the north direction
        int y = row[i];
        while(y >0){
            if (y != 0 && bombArrayListFinal[row[i]][coloum[i]] == bombArrayListFinal[y-1][coloum[i]]) {
                puan.push_back(bombArrayListFinal[y-1][coloum[i]]);
                bombArrayListFinal[y-1][coloum[i]] = 0;
            }
            y--;
        }
    }
    void south(vector<int> row, vector<int> coloum, int i , int size){  //check the same numbers in the south direction
        int y = row[i];
        while(y < size){
            if (y != size-1  && bombArrayListFinal[row[i]][coloum[i]] == bombArrayListFinal[y+1][coloum[i]]) {
                puan.push_back(bombArrayListFinal[y+1][coloum[i]]);
                bombArrayListFinal[y+1][coloum[i]] = 0;
            }
            y++;
        }
    }
    void east(vector<int> row, vector<int> coloum, int i , int size){   //check the same numbers in the east direction
        int x = coloum[i];
        while(x < size){
            if (x != size-1  && bombArrayListFinal[row[i]][coloum[i]] == bombArrayListFinal[row[i]][x+1]) {
                puan.push_back(bombArrayListFinal[row[i]][x+1]);
                bombArrayListFinal[row[i]][x+1] = 0;
            }
            x++;
        }
    }
    void west(vector<int> row, vector<int> coloum, int i){  //check the same numbers in the west direction
        int x = coloum[i];
        while(x >0){
            if (x != 0 && bombArrayListFinal[row[i]][coloum[i]] == bombArrayListFinal[row[i]][x-1]) {
                puan.push_back(bombArrayListFinal[row[i]][x-1]);
                bombArrayListFinal[row[i]][x-1] = 0;
            }
            x--;
        }
    }
    void northeast(vector<int> row, vector<int> coloum, int i, int size){   // check the same numbers in the northeast direction
        int y = row[i];
        int x = coloum[i];
        while(y > 0){
            if ((y != 0 && x != size-1) && bombArrayListFinal[row[i]][coloum[i]] == bombArrayListFinal[y-1][x+1]) {
                puan.push_back(bombArrayListFinal[y-1][x+1]);
                bombArrayListFinal[y-1][x+1] = 0;
            }
            y--;
            x++;
        }
    }
    void northwest(vector<int> row, vector<int> coloum, int i, int size){   // check the same numbers in the northwest direction
        int y = row[i];
        int x = coloum[i];
        while(y > 0){
            if ((y != 0 && x != 0) && bombArrayListFinal[row[i]][coloum[i]] == bombArrayListFinal[y-1][x-1]) {
                puan.push_back(bombArrayListFinal[y-1][x-1]);
                bombArrayListFinal[y-1][x-1] = 0;
            }
            y--;
            x--;
        }
    }
    void southeast(vector<int> row, vector<int> coloum, int i, int size){   //check the same numbers in the southeast direction
        int y = row[i];
        int x = coloum[i];
        while(y < size){
            if ((y != size-1 && x != size-1) && bombArrayListFinal[row[i]][coloum[i]] == bombArrayListFinal[y+1][x+1]) {
                puan.push_back(bombArrayListFinal[y+1][x+1]);
                bombArrayListFinal[y+1][x+1] = 0;
            }
            y++;
            x++;
        }
    }
    void southwest(vector<int> row, vector<int> coloum, int i, int size){   //check the same numbers in the southwest direction
        int y = row[i];
        int x = coloum[i];
        while(y < size){
            if ((y != size-1 && x != 0) && bombArrayListFinal[row[i]][coloum[i]] == bombArrayListFinal[y+1][x-1]) {
                puan.push_back(bombArrayListFinal[y+1][x-1]);
                bombArrayListFinal[y+1][x-1] = 0;
            }
            y++;
            x--;
        }
    }
    void finalPoint(){  // calculate final point
        for(int j=0; j < puan.size();j++){
            totalPoint += puan[j];
        }
    }
};