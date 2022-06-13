#include <vector>
#include <iostream>

using namespace std;

int puntoFijo(vector<int> v){
    int res = 0;
    while(res < v.size()){
        if (res == v[res]){
            return res;
        } else res++;
    } if (res >= v.size()){
        res = -1;
    } return res;
}

int main() {
    /* No hace falta modificar el main */
    // Leo las entradas
    int n;
    cin >> n;
    int i = 0;
    int x;
    vector<int> v;// En v leo el vector
    while (i<n){
        cin >> x;
        v.push_back(x);
        i++;
    }

    // Calculo el punto fijo de v
    int res = puntoFijo(v);

    // Imprimo la salida
    cout << res;

    return 0;
}
