#include iostream

int main(){
    iny x{};
    std::cout << "Enter a number: ";
    std::cin>> x;

    if (x>=0){
        std::cout << "pos" <<std::endl;
    }else{
        std::cout << "neg" << std::endl;
    }
    return 0;
}