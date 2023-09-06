#include <iostream>
using namespace std;

int main() {
    string a;
    int b;
    
    cout<<"Bir kelime veya bir cümle giriniz.. Ardından kaç tane ünlü harf içerdiğini öğrenebilirsiniz... \n ........................";
    
    cin>>a;
     b = a.length();
    char x[b];
    for(int i=0; i<b; i++) {
        
        x[i] = a[i];
        
        
    }
    
    int a1;
    int e;
    int i;
    int u;
    int o;
    
    for(int i=0; i<b; i++) {
        
        if(x[i] =='a')
        a1++;
        if(x[i] =='e')
        e++;
        if(x[i] =='i')
        i++;
        if(x[i] =='u')
        u++;
        if(x[i] =='o')
        o++;
        
        
    }
    
    cout<<"Girdiginiz kelimede "<<a1<<" tane a, "<<e<<" tane e, "<<i<<" tane i, "<<u<<" tane u, "<<o<<" tane o vardır. İyi günler..";
    
    return 0;
}
