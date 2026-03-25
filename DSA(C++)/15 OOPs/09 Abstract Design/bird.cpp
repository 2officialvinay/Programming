#include<bits/stdc++.h>
#include "bird.h"
using namespace std;

void birdWork(Bird *&bird){
    bird -> eat();
    bird -> fly();
}

int main(){
    Bird *bird = new eagle();
    birdWork(bird);

    return 0;
}