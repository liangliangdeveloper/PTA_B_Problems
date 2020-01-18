#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main(){
      vector<vector<string> > v;
      for(int i=0;i<3;i++){
            vector<string> s;
            string str;  getline(cin,str);
            int j=0,k=0;
            while(j<str.length()){
                  if(str[j]=='['){
                        while(k++<str.length()){
                              if(str[k]==']'){
                                    s.push_back(str.substr(j+1,k-j-1));
                                    break;
                              }
                        }
                  }
                  j++;
            }
            v.push_back(s);
      }
      int n;      cin>>n;
      for(int i=0;i<n;i++){
            int a,b,c,d,e;    cin>>a>>b>>c>>d>>e;
            if(a>v[0].size()||b>v[1].size()||c>v[2].size()||d>v[1].size()||e>v[0].size()||a<1||b<1||c<1||d<1||e<1)
                {
                	cout<<"Are you kidding me? @\\/@"<<endl;
                	continue;
				  }  
            else  cout << v[0][a-1] << "(" << v[1][b-1] << v[2][c-1] << v[1][d-1] << ")" << v[0][e-1] << endl;
      }
      return 0;
}
