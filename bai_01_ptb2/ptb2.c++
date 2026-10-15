#include<iostream>
#include<cmath>
using namespace std;
void ptb1(float b, float c){
    if(b==0){
        if(c==0) cout<<"VSN";
        else cout<<"VN";
    }else cout<<-c/b;
}
void ptb2(float a, float b, float c){
    if(a==0){
        ptb1(b,c);
    }else{
        float delta =b*b-4*a*c;
        if(delta > 0){
            float x1=(-b+sqrt(delta))/(2*a);
            float x2=(-b-sqrt(delta))/(2*a);
            if(x1>x2){
                swap(x1,x2); 
            }
            printf("%.3f %.3f",x1,x2);
        }else{
            if(delta==0) {
                printf("%.3f",-b/(2*a));
            }else cout<<"VN";
        }
    }
}
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    ptb2(a,b,c);
    return 0;
}