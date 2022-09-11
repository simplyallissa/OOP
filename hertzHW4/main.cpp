#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>


using namespace std;
static vector<vector<int> > createGrid(int gridX, int gridY);
static void printGrid(vector<vector<int> > gridOne);
static vector<vector<int> > compareVectors(vector<vector<int> > gridOne, vector<vector<int> > gridTwo);


int main() {
    int gridX, gridY;
    cout << "Enter a width for the grids: " << endl;
    cin >> gridX;
    cout << "Enter a length for the grids: " << endl;
    cin >> gridY;
    vector<vector<int> > gridOne = createGrid(gridX, gridY);
    vector<vector<int> > gridTwo = createGrid(gridX, gridY);
    printGrid(gridOne);
    cout << endl;
    printGrid(gridTwo);
    cout << endl;
    vector<vector<int> > gridThree = compareVectors(gridOne, gridTwo);
    printGrid(gridThree);
    return 0;
}

static vector<vector<int> > createGrid(int gridX, int gridY){

    vector<vector<int> > vec_2d;
    for(int i=0; i<gridY; i++)
    {
        vector<int> a;
        for (int j=0;j<gridX;j++)
        {
            int randInt = rand() % 3;
            if(randInt == 2) {
                a.push_back(1);
            }
            else {
                a.push_back(0);
            }
        }
        vec_2d.push_back(a);
    }
    return vec_2d;
}

static void printGrid(vector<vector<int> > gridOne) {
    for (vector<int> line: gridOne) {
        for (int cell: line) {
            cout << cell;
        }
        cout << endl;
    }
}

static vector<vector<int> > compareVectors(vector<vector<int> > gridOne, vector<vector<int> > gridTwo) {
    vector<vector<int> > vec_2d;
    for(int i=0; i<gridOne.size();i++)
    {
        vector<int> c;
        for(int j=0; j<gridOne[i].size();j++) {
            if (gridOne[i][j] == 1 && gridTwo[i][j] == 1) {
                c.push_back(1);
            } else {
                c.push_back(0);
            }
        }
        vec_2d.push_back(c);
    }
    return vec_2d;
}