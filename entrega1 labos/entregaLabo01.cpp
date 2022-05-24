#include <iostream>

using namespace std;

// Funcion de fibonacci que calcula n-esimo termino
int fibonacci(int n){
    int F_0 = 0;
    int F_1 = 1;
    int res = 0;
    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else if (n > 1){
        int i = 2;
        while (i <= n){
            i += 1;
            res = F_0 + F_1;
            F_0 = F_1;
            F_1 = res;
        }
    } return res;
}
int main() 
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;    
    return 0;
}