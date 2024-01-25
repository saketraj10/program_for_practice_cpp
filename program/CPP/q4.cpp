#include<iostream>
using namespace std;
class weight{
    int KG, gram;
    public:
    weight(): KG(0), gram(0)
    {}
    weight(int kg, int g): KG(kg), gram(g)
    {}
    void input_weight(){
        cout<<"Enter KG: "<<endl;
        cin>>KG;
        cout<<"ENter gram: "<<endl;
        cin>>gram;
    }
    void show(){
        cout<<"KG: "<<KG<<endl;
        cout<<"gram: "<<gram<<endl;
    }
    void add_weight(weight, weight);
};
void weight::add_weight(weight w1, weight w2){
    gram = w1.gram + w2.gram;
    KG = w1.KG + w2.KG;
    if(gram >= 1000){
        KG += gram/1000;
        gram %= 1000;
    }
}
int main(){
    weight w1(2,500),w2, w3;
    w2.input_weight();
    w3.add_weight(w1,w2);
    cout<<"w1: "<<endl;
    w1.show();
    cout<<"w2: "<<endl;
    w2.show();
    cout<<"w3: "<<endl;
    w3.show();
}