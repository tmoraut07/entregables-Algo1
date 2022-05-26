#include <iostream>
#include <string>

using namespace std;

int cantidadApariciones (string s1, char x){
    int suma = 0;
    for(int i = 0; i < s1.size(); i++){
        if(s1[1] == x){
            suma += i;
        }
    } return suma;
}


bool subsecuencia(string s1, string s2) {
	int cont = 0;
    bool esSubSeq = true;
    if (s1.size() <= s2.size()) {
        while (cont < s1.size()) {
            for (int j = 0; j < s2.size(); j++) {
                esSubSeq = s1[cont] = s2[j];
            }
            if (esSubSeq == true &&
            (cantidadApariciones(s1, s1[cont]) <= cantidadApariciones(s2, s2[cont]) )) {
                cont++;
            } else break;
        }
        return esSubSeq;
    } else return false;
}

int main()
{
    /* No hace falta modificar el main */
    // Leo la entrada
    string s, t;
    cin >> s >> t;
    
    bool res = subsecuencia(s, t);
    cout << (res ? "true" : "false");
    return 0;
}

