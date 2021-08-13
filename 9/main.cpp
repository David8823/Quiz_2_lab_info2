#include <iostream>
using namespace std;
int separar(char [],int);
int main(){
  int digitos,suma=0,adicional=0,longitud;
  cout<<"este programa recibe un numero entero n"<<endl;
  cout<<"y una cadena de caracteres numericos,"<<endl;
  cout<<"separa la cadena de caracteres numericos"<<endl;
  cout<<"en numeros de n cifras, los suma e"<<endl;
  cout<<"imprime el resultado"<<endl;
  cout<<"ingrese el numero n"<<endl;
  cin>>digitos;
  cout<<"ingrese la longitud de la cadena de caractere numericos"<<endl;
  cin>>longitud;
  char cnumeros[longitud];
  cout<<"ingrese la cadena de caracteres numericos"<<endl;
  cin>>cnumeros;
  cout<<"Original:";
  for(int k=0;k<=longitud-1;k++){
    cout<<cnumeros[k];
  }
  cout<<endl;
  while(longitud%digitos!=0){
    longitud++;
    adicional++;
  }
  char cnumeros2[longitud];
  for(int i=longitud-1;i>=0;i--){
    if(i-adicional>0){
      cnumeros2[i]=cnumeros[i-adicional];
    }
    else if((i-adicional)==0){
      cnumeros2[i]=cnumeros[0];
    }
    else{
      cnumeros2[i]='0';
    }
  }
  for(int i=longitud-1;i>=0;i=i-digitos){
    suma=suma+separar(cnumeros2,i);
  }
  cout<<"Suma: "<<suma<<endl;
}

int separar(char numero[],int pos){
  int nnum=0,unidad=1,contador=3;
  for(int j=pos;contador>=1;j--){
    nnum=(numero[j]-'0')*unidad+nnum;
    unidad=unidad*10;
    contador--;
  }
  return nnum;
}
