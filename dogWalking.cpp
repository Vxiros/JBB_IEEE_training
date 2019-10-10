#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main() {
    int testcases;
    cin >> testcases;
    
    for (int i=0; i<testcases; i++) {    
        int N, K;
        cin >> K >> N;
        
        int* X;
        X = new int [K];
        for(int j=0; j<K; j++){
            cin >> X[j];
        }
        qsort (X, K, sizeof(int), compare);
        int* Dif = new int [K-1];
        for(int j=0; j<(K-1); j++){
            Dif[j] = X[j+1] - X[j];
        }
        qsort (Dif, K-1, sizeof(int), compare);
        int sum = 0;
        for (int j=0; j<(K-N); j++) {
            sum += Dif[j];
        }
        cout << sum << endl;
    }
        
    
    return 0;
}
