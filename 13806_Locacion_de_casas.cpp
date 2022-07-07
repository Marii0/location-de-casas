#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl "\n"

int main(){
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    int Tc,n,num,pres,contt=0;
    vector <int> vec;

    cin>>Tc;
    while(Tc--){
        contt++;
        cin>>n;
        cin>>pres;
        vec.clear();
        for (int i = 0; i < n; i++)
        {
            cin>>num;
            vec.push_back(num);
        }
        sort(vec.begin(),vec.end());
        
        int cont=0;
        for (int j:vec)
        {
            if(pres>=j){
                cont++;
                pres= pres-j;
            }
            else{
                break;
            }
        }
        cout<<"Caso #"<<contt<<": "<<cont<<endl;

        

    }

}