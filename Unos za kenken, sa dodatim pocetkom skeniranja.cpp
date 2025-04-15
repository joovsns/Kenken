#include <bits/stdc++.h>

using namespace std;
int t;
bool imapromene;
struct KAVEZ {
    char operacija;
    int cilj;           // broj u kavezu koji treba dostici
    vector <pair<int, int> > coord;
    bool moguci[10];
}pom;

int tabela[12][12];
vector<KAVEZ> kavezi; // najvise moze biti 81 kavez, u slucaju table dimenzija 9*9 gde je svako polje zaseban kavez
int sx, sy;
string s;

void ispisikaveze(){

  for(int i=0; i<kavezi.size(); i++){
    cout << kavezi[i].operacija << " " << kavezi[i].cilj << " ";
    for(int j=0; j<kavezi[i].coord.size(); j++){
      cout << "[ " << kavezi[i].coord[j].first << ", " << kavezi[i].coord[j].second << " ]" ;
    }
    cout << endl;
  }

}

void UCITAJ_IZ_FAJLA() {

    while (cin >> s){
      int y=s.find("ggSDK.embed");
      if (y==0) break;
    }
    while (cin >> s){
      if (s=="sx:") break;
    }
    cin >> s;
    sx=s[0]-48;
    if (s[1]!=',') sx=sx*10+s[1]-48;
    while (cin >> s){
      if (s=="p:") break;
    }
    cin >> s;
    int cnt=0;
    while(true){
      //cout << s << endl;
      int t=s.find(":");
      if (t<0 or t>=s.size())break;
      s.erase(0,t+1);

      pom.operacija=s[1];
      t=s.find(":");
      s.erase(0,t+1);
      //cout << s << endl;
      int broj=0;
      t=s.find(",");
      for(int i=0; i<t; i++)
        broj=broj*10+s[i]-48;
      pom.cilj=broj;

      s.erase(0,t+3);
      t=s.find(":");
      s.erase(0,t+1);
      t=s.find("[[");
      s.erase(0,t+2);
      t=s.find("]]");
     // cout << t << endl;
      pom.coord.clear();

      for(int i=0; i<(t+3); i+=6){
         int x = s[i+0]-48;
         int y = s[i+2]-48;
         pom.coord.push_back({x, y});
      }

      s.erase(0,t);
      kavezi.push_back(pom);
      cnt++;
      ispisikaveze();

    }

  }

int main() {
    freopen("code1.html", "r", stdin);
    UCITAJ_IZ_FAJLA();
    for(int i=0; i<kavezi.size(); i++){
        memset(kavezi[i].moguci, true, 10);
        if(kavezi[i].operacija == '/'){

        }
        if(kavezi[i].operacija == '+'){

        }
        if(kavezi[i].operacija == '-'){

        }
        if(kavezi[i].operacija == '*'){

        }
    }
    imapromene=true;
    while(imapromene){
        imapromene=false;
    }
    //upisiMatricuUFajl();
   // ispisiMatricu();
    return 0;
}

