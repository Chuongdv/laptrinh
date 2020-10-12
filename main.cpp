#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;



int main()
{

    int n;
    int a[1001];
    int b[1001];
    srand(time(NULL));
    n = rand() % (1000 - 10 + 1) + 10;
    // m la so so am

    int m = (int) ceil(0.3*n + ((rand()%71)*0.01)*n);
    for(int i = 0; i < n; i++){
        if(i <= m){
            a[i] = -1*rand();
            b[i] = rand();
        }
        else{
            a[i] = rand();
            b[i] = rand();
            if(a[i] > b[i]){
                swap(a[i], b[i]);
            }
        }
    }
    cout << n << endl;
    for(int i = 0; i < n; i++){
        cout << "(" << a[i] << ";" << b[i] << ")" <<endl;
    }

    return 0;
}
