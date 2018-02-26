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
    int conto[13] = {0, 1};
    int rand1, rand2, sum;

    for(int i = 0;i < 36000;i++){
        rand1 = rand() % 6 + 1;
        rand2 = rand() % 6 + 1;
        sum = rand1 + rand2;
        ++conto[sum];
    }

    cout << "Somma dei due dadi    " << "Numero uscite" << endl;

    for(int i = 2;i < 13;i++){

        cout << setw(10) << i << setw(20)  << conto[i] << endl;
    }

    cout << endl;

}





