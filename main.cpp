#include <iostream>
#include <sstream>
using namespace std;

int main() {
    srand(time(0)); 
    int i, p, N, imax, imin, indiceminimo, valoreminimo, indicemassimo, valoremassimo;
    cout << "Inserisci il numero degli elementi del vettore" << endl;
    cin >> N;
    vector <int> V(N);
    for (i=0; i <= N-1 ; i++){
        V[i]=rand () % 1001;
        cout << "Valore:" << V[i] << endl;
    }
    p = 0;
    for (i=0; i <= N-1 ; i++){
        if ((V[i] % 2) == 0) {
           p=p+1;
        }
    }
    indiceminimo=0;
    valoreminimo=V[0];
    indicemassimo=0;
    valoremassimo=V[0];
    for (i=0; i <= N-1 ; i++){
        if(V[i] > valoreminimo){
            indiceminimo=i;
            valoreminimo=V[i];
        }
        if(V[i] < valoremassimo){
            indicemassimo=i;
            valoremassimo=V[i];
        }      
    }
cout << "Il valore più piccolo contenuto nel vettore ha valore" << valoreminimo << " e posizione" << indiceminimo << endl;
cout << "Il valore più grande contenuto nel vettore ha valore" << valoremassimo << " e posizione" << indicemassimo << endl;









}


