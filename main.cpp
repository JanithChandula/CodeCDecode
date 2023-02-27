#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <list>
#include <map>
#include <algorithm>
#include<bitset>
#include <vector>
#include<string.h>

int main(){

std::vector <std::pair<std::string,int>> codeFrequency;
codeFrequency.push_back({"a",1});
codeFrequency.push_back({"b",2});
codeFrequency.push_back({"c",3});
codeFrequency.push_back({"d",4});
codeFrequency.push_back({"e",5});

int i = 0;

for(auto pa: codeFrequency){
    std::cout<<pa.first<<","<<pa.second<<" i:"<<i<<std::endl;
    if(i=3){
        codeFrequency.erase(codeFrequency.begin()+i);
    }
    i+=1;
}
for(auto pam: codeFrequency){
    std::cout<<pam.first<<"--,"<<pam.second<<std::endl;}


return 0;

}
