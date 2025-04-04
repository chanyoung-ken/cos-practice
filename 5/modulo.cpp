#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int mod(int a, int b);
int slen(char *snum);
int convert(char * snum);

int main(int argc, char *argv[]){
    int a, b, c;
    if(argc!=3)
    {
        cout << "please insert two numbers" << endl;
        return 0;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = mod(a, b);

    cout << a << " mod " << b << " = " << c << endl;
    return 0;
}

int mod(int a, int b){
    if (a >= 0)
        return a % b;
    else
        return a / b * b - a;
}

int slen(char *snum){
    int ret;
    char *p;
    ret = 0;

    p = snum;
    while(*p != 0){
        ret+=1;
        p++;
    }
    return ret;
}

int convert(char * snum){
    int len = strlen(snum);
    int i, ret;
    char *p;

    ret = 0;
    p=snum;
    for(i=0; i<len; i++){
        ret *=10;
        ret = ret + (*(p+i) - 0x30);
    }
    return ret;
}