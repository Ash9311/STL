#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>

using namespace std;
bool f(int x, int y){
    return x > y;
}


void vectorDemo(){
    vector<int> A={11,2,3,14};
    sort(A.begin(),A.end());

    bool present = binary_search(A.begin(),A.end(),3);
    present=binary_search(A.begin(),A.begin(),4);

    A.push_back(100);
    present = binary_search(A.begin(),A.end(),100);

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    
    auto it = lower_bound(A.begin(), A.end(), 100); // >=
    auto it2 = upper_bound(A.begin(), A.begin() , 100); // >

    cout<<*it<<" "<<*it2<<endl;
    cout<<it2-it<<endl;

    sort(A.begin(),A.end(),f);
    
    for(int &x : A){
        x++;
    }
     for(int x : A){
        cout << x << " ";
    }
    cout << endl;
}

    void setDemo(){
     set<int> S;
     S.insert(1);
     S.insert(2);
     S.insert(-1);
     S.insert(-10);

     for(int x : S){
         cout<< x << " ";
     }
     cout<<endl;

    auto it = S.find(-1);
    if(it == S.end()){
        cout<< "not present\n";
    }
    else{
        cout<<"present\n";
        cout<< *it << endl;
    }

    auto it2  = S.lower_bound(-1);
    auto it3 = S.upper_bound(0);
    cout<< *it2 << " "<<*it3 << endl; 

    auto it4 = S.upper_bound(2);
    if(it4 == S.end()){
        cout << "oops! sorry cant find something like that\n";
    }
    }

    void mapDemo()
    {
        map<int,int>A;
        A[1] = 100;
        A[2] = -1;
        A[3] = 200;
        A[234] = 1;

        map<char , int> cnt;
        string x = "ash mulky";

        for(char c : x){
            cnt[c]++;
        }

        cout << cnt['a'] << " " << cnt['z'] << endl;

    }

    void PowerOfStl(){
        set <pair<int , int>> S;

        S.insert({ 401 , 450 });
        S.insert({ 10 , 20 });
        S.insert({ 2 , 3 });
        S.insert({ 30 , 400 });

        int point = 50;

        auto it = S.upper_bound({ point, INT_MAX});
        it--;
        pair<int, int> current = *it;
        if(current.first <= point && point <= current.second){
            cout << "yes its present: " << current.first << " " << current.second << endl;
        }
        else{
            cout<<" the given point is not lying in any interval..\n";
        }
    }

    int main(){

    }


    
