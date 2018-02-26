#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    srand(time(NULL));
    int arrai[20];
    int a, var;

    for(int i = 0;i < 20;i++){
        arrai[i] = rand() % 90 + 11;
        cout << arrai[i] << " ";
    }

    cout << endl;

    for(a = 0;a < 20;a++){
        var = arrai[a];
        for(int b = a + 1;b < 20;b++){
            if(var == arrai[b]){
                cout << arrai[b] << " ";
            }
        }
    }


cout << endl;

}





