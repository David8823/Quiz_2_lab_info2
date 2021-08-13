#include <iostream>

using namespace std;

int main()
{

    char a[8]={" "};
    cout << "escriba una cadena de 8 caracteres" << endl;
    cin >> a;
    char b[8]={" "};
    char c[8]={" "};
    int g=0;
    int k = 0,t = 0;
    for(int i=0 ; i<8 ; i++){

        g=a[i];
        if(g>47 && g<58){

            b[k]=g;
            k=k+1;

        }
        else{

            c[t]=g;
            t=t+1;

        }
    }

    cout << "numeros: " << b << endl << "letras y otros caracteres: " << c << endl;

    return 0;
}
