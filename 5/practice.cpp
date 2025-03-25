#include <iostream>
#define BUFLEN 10
using namespace std;

int main(int argc, char *argv[])
{
    char str1[6] = {'h','e','l','l','o',0};
    char str2[6] = {'w','o','r','l','d',0};
    char *p;
    p= str2;
    *(p-1) = ',';
    cout << str1 <<endl;
    
    return 0;
}