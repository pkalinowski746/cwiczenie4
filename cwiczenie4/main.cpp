#include <iostream>
#include <fstream>
# include <vector>
#include <string>
#include <stdexcept>
#include <sstream>
using namespace std;
struct Probka
{ double t;
double x;
Probka (double _t,double _x)
{ t=_t;
  x=_x;

}

};
  vector <Probka> wczytaj(string n)
  {
      vector <Probka> tablica ;
      ifstream plik (n);
      string line;
      while (getline(plik,line))
      {
          stringstream ss(line);

        double _t, _x;
       ss >> _t;
       ss.ignore();
       ss >> _x;
    tablica.push_back(Probka(_t,_x));
      }
      plik.close();
      return tablica;
  }
void Wyswietl(vector <Probka> dane)
{
    for (int i=1; i< dane.size(); ++i)
        cout << dane[i].t << ", " << dane[i].x <<endl;
}

int main(int arg,char* argv[])
{

    vector <Probka> dane=wczytaj(argv[1]);
    Wyswietl(dane);
    return 0;
}
