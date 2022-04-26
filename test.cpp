 #include <iostream>
#include <vector>

int main{
std::vector<double> test_vec(10,7);
for(auto &obj:test_vec) std::cout<<"value is "<<obj<<std::endl;
}