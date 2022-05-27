#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

	 bool sortByVal(const pair<string, int> &a,
					const pair<string, int> &b)
	{
		return (a.second < b.second);
	}

int main(){//Kreiranje na mapa

	map<string,int> mapa = {{"Skopje", 22},{"Kumanovo", 4},{"Struga", 3},{"Veles", 3},{"Prilep", 3},{"Bitola", 1}, {"Krushevo", 0}, {"Shtip", 0}, {"Ohrid", 0}, {"Dojran", 0}};
	vector<pair<string, int>> vec;
	string str;
	int golemina = 0;
	int broj = 0;

        cout<<"Pecatenje na mapata: "<<endl;
        for (auto i : mapa){
		std::cout << '{' << i.first << ", "
				<< i.second << "}\n";
			}

		map<string, int> :: iterator it;
		for (it=mapa.begin(); it!=mapa.end(); it++)
		{
			vec.push_back(make_pair(it->first, it->second));
		}

		sort(vec.begin(), vec.end(), sortByVal); //sortiranje

		golemina = vec.size();
		cout<<endl;
		cout << "Pecatenje na sortirana mapa: " << endl;
		for (int i = 0; i < golemina; i++)
		{
			cout << vec[i].first << ": " << vec[i].second << endl;
		}
            //Vnesuvanje na Ime i spoen datum
			cout<<"Vnesete indeks"<<endl;
			cout<<"INKI/IKT: ";
			cin>>str;
			cout<<"Broj: ";
			cin>>broj;
			mapa.insert(pair<string, int>(str, broj));
			cout<<endl;

			cout<<"Vnesete Ime i Spoen Datum"<<endl;
			cout<<"Ime: ";
			cin>>str;
			cout<<"Spoen Datum: ";
			cin>>broj;
			mapa.insert(pair<string, int>(str, broj));
}
