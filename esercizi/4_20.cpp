#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

void Menu(int arr[]);
void Fumatori(int arr[]);
void NonFumatori(int arr[]);
void CartaImbarco(int arr[]);
void NuovaPrenotazione(int arr[]);

int main()
{

    int volo[10];

    for(int i = 0;i < 10;i++){
        volo[i] = 0;
    }

    Menu(volo);

}

void Menu(int arr[]){
    int menu;

    cout << "Digitare 1 per *fumatori*\nDigitare 2 per *non fumatori*\n";
    cin >> menu;

    if(menu == 1){
        cout << "Molto bene! Ha scelto un posto per fumatori." << endl;
        Fumatori(arr);
    }
    else if(menu == 2){
        cout << "Molto bene! Ha scelto un posto per non fumatori." << endl;
        NonFumatori(arr);
    }
    else{
        Menu(arr);
    }
}

void Fumatori(int arr[]){
    int a;
    for(int i = 0;i < 5;i++){
        if(arr[i] == 0){
            arr[i] = 1;
            cout << "Le e' stato assegnato il posto N." << i + 1 << endl;
            break;
        }

        else if(arr[4] == 1 && arr[9] == 1){
            cout << "Posti finiti!" << endl;
            exit(0);
        }

        else if(arr[4] == 1){
            cout << "I posti da Fumatore sono finiti, le va bene andare tra i Non Fumatori? (1 se si, qualsiasi altro tasto se no)\n";
            cin >> a;
            if(a == 1){
                NonFumatori(arr);
                break;
            }
            else{
                cout << "Il prossimo volo sara' tra 3 ore!\n";
                break;
            }

        }




    }

    CartaImbarco(arr);
    NuovaPrenotazione(arr);


}

void NonFumatori(int arr[]){
    int a;
    for(int i = 5;i < 10;i++){
        if(arr[i] == 0){
            arr[i] = 1;
            cout << "Le e' stato assegnato il posto N." << i + 1 << endl;
            break;
        }

        else if(arr[4] == 1 && arr[9] == 1){
            cout << "Posti finiti!" << endl;
            exit(0);
        }

        else if(arr[9] == 1){
            cout << "I posti da Non Fumatore sono finiti, le va bene andare tra i Fumatori? (1 se si, qualsiasi altro tasto se no)\n";
            cin >> a;
            if(a == 1){
                Fumatori(arr);
                break;
            }
            else{
                cout << "Il prossimo volo sara' tra 3 ore!\n";
                break;
            }
        }

    }
    CartaImbarco(arr);
    NuovaPrenotazione(arr);

}

void CartaImbarco(int arr[]){
    cout << "Al momento i posti occupati sono i seguenti\n";
    for(int i = 0;i < 10;i++){
        if(i < 5){
            if(arr[i] == 1){
                cout << "Posto N." << i + 1<< " per Fumatori - Occupato - \n";
            }

        }
        else{
            if(arr[i] == 1){
                cout << "Posto N." << i + 1 << " per Non Fumatori - Occupato - \n";
            }

        }
    }


}

void NuovaPrenotazione(int arr[]){
    int sel;
    cout << "Vuole prenotare degli altri posti? (1 per continuare, qualsiasi altro tasto per uscire)\n";
    cin >> sel;
    if(sel == 1){
        Menu(arr);
    }
    else{
        exit(0);
    }
}

