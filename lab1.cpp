#include <iostream>
void printPyramid(int rows) {
    for (int i=1;i<=rows;i++) {
    for (int j=1; j<=rows; j++){
        std::cout<<" ";
    }
    for (int k=1; k<=i; k++){
        std::cout<<"*";  
}
for (int  l=0; l<l; l++){
        std::cout<<l;   
}
std::cout<<std::endl;
}
}
int main(){
    int rows;
    std::cout<<"Enter Number:";
    std::cin>>rows;
    printPyramid(rows);
    //Additional test case printPyramid(8);
    return 0;
}