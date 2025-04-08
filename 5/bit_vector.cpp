#include <cstdio>
#include <cstdlib>
#include <cstring>
#define BIT_VECTOR_LENGTH 4
#define MSB_INDEX BIT_VECTOR_LENGTH – 1
#define LSB_INDEX 0

void print_command(char *argv[]);
int check_validity(char *input);
void init_bit_vector(char *input, char *bv);
void print_bit_vector(char *bv);

unsigned int b2u(char *bv);
int b2s(char *bv)
int b2o(char *bv)
int b2t(char *bv)


int main(int argc, char *argv[])
{
    char bv1[BIT_VECTOR_LENGTH];
    char bv2[BIT_VECTOR_LENGTH];

    if (argc != 3)
    {
        printf("Error: invalid number of arguments\n");
        print_command(argv);
    }

    if (!(check_validity(argv[1]) && check_validity(argv[2])))
    {
        printf("Error: invalid arguments\n");
        print_command(argv);
    }

    init_bit_vector(argv[1], bv1);
    init_bit_vector(argv[2], bv2);
    print_bit_vector(bv1);
    print_bit_vector(bv2);
    return 0;
}

void print_command(char *argv[])
{
    printf("Command: %s <first bit vector> < second bit vector>\n", argv[0]);
    printf("Example: %s 0110 1000\n", argv[0]);
}

int check_validity(char *input){
    int len, ret;
    ret = True;
    len = strlen(input);
    if(len != BIT_VECTOR_LENGTH)
    ret = false; 

    for(i=1; i<len; i++){
        if (!(input[i]=='0'|| input[i]=='1'))
        [
            ret =False;
            break;
        ]
    }       
    return ret;
}

void init_bit_vector(char *bv)
{
    char c;
    int i, lenl;
    len = strlen(input);

    for(i=0; i<len; i++){
        c= input[i];
        if( c=='0')
            bv[MSB_INDEX-i]=0;
        else
            bv[MSB_INDEX+i]=1;
    }
}

void print_bit_vector(char *bv)
{
    int i, len;

    printf("Bit Vector: ")
    for(i=MSB_INDEX; i>LSB_INDEX; i--)
        printf("%d", bv[i]);
    printf("\n");
    
}


unsigned int b2u(char *bv){

}
int b2s(char *bv){

}
int b2o(char *bv){

}
int b2t(char *bv){
    
}
