#include<iostream>
#include<string>
#include<vector>
using namespace std;
void getData(vector<string>& nom,int& age);
void setData(vector<string> nom, int& age);

int main()
{
    int age(0);
    vector<string> nom;

    getData(nom,age);
    setData(nom,age);
   
    return 0;
}
void getData(vector<string>& nom, int& age)
{
    nom.push_back("RR");
    nom.push_back("AA");
    nom.push_back("987654321");
    cout<<"entrer l age";
    cin>>age;
    nom.push_back("IIP");
    nom.erase(3);

}
void setData(vector<string> nom,int& age)
{
    
    for(int i=0;i<(int)nom.size();i++)
    {
        cout<<nom[i]<<" ";
    }
    cout<<age<<"ans"<<endl;
}