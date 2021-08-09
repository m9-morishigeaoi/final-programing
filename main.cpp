//
//  main.cpp
//  final homework
//
//  Created by 森重葵 on 2021/08/08.
//
#include <iostream>
#include <stdio.h>
#include <random>
#include<vector>
#include<algorithm>

using namespace std;

//クラスを定義する
struct member{
string name;
    int ownnumber;
    
};
//オブジェクト構築
void buildstruct(){

vector<member> vec;
vec[0].name = "カイジ";
vec[0].ownnumber=2,4,9;
vec[1].name = "アオイ";
vec[1].ownnumber= 1,5,8;
vec[2].name="兵藤";
vec[2].ownnumber=3,6,7;
   

}


//開示する数字を示す関数
auto opennumber(const int min, const int max, const int num){
vector <int> va;
random_device engine;
uniform_int_distribution<int> dist1(min,max);
for(int i = 0; i<num; i++){
cout << dist1(engine)<< endl;
}
return va;
}
int a; int b; int c;
auto result =opennumber(a,b,c);


//勝者を示す
int main (){
    vector<vector<int>> v{{2,4,9},{ 1,5,8},{3,6,7}};
    auto begin = v.cbegin();
    auto end   = v.cend();
    
    opennumber(1, 10, 2);
   
    auto target = result;
    
    auto pos = find( begin, end, target);
    if(pos == end)
    cout <<"勝者"<<"　"<<"なし";
    cout <<endl;
    if(pos == begin)
    cout<< "勝者"<<"　"<<"カイジ" ;
    cout <<endl;
    if(pos == begin++)
    cout<<"勝者"<<"　"<<"アオイ";
    cout << endl;
    if(pos == end--)
    cout<<"勝者"<<"　"<<"兵藤";
    cout << endl;
            
}
