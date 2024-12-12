#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a ;
    long b ;
    char c ;
    float d ;
    double e ;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    
    printf("%d ", a);
    cout << "\n";
    printf("%ld", b);
    cout << "\n";
    printf("%c", c);
    cout << "\n";
    printf("%f", d);
    cout << "\n";
    printf("%lf", e);
    return 0;
}