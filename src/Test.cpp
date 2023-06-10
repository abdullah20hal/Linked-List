/** 
* @file Dosya adı:Test.cpp
* @description Programınızın açıklaması ne yaptığına dair. fonksiyonlar çağırdım ve dosyadan okudum .
* @course Dersi aldığınız eğitim türü ve grup:1.Ögretim A
* @assignment Kaçıncı ödev olduğu:1.Ödev
* @date Kodu oluşturduğunuz Tarih:14/11/2021
* @author Gruptakilerin yazar adları ve mail adresleri:ABDULLAH HALLAK , abdullah.hallak@ogr.sakarya.edu.tr
*/

#include <fstream>
#include <windows.h>
#include <stdio.h>
#include <string>
#include "List.hpp"

int main (){
	
	string data;
	int len = 0;
	string pos = "";
	string name = "";
	bool kom = true;
	ifstream myFile;
	char path[]="veri.txt";
	myFile.open(path);
	while (!myFile.eof())
	{
		kom = true;
		pos = "";
		name = "";
		getline(myFile, data);
			for (int i = 2; i < data.length(); i++)
			{
				if (data[i] == '#')
				{
					kom = false;
				}
				else if (kom)
				{
					if(data[i]!=')'){
					pos += data[i];

					}
				}
				else
				{
					if (data[i] != ')')
					{
						name += data[i];
					}
				}
			}
		if (data[0] =='E')
		{
			int ap=stoi(pos);
			list1->Insert(ap+1, name);
		}
		else if(data[0]=='S')
		{	
	       
	        int si=stoi(pos);
		   list1->Remove(si);
			
		}
}

     list1->Show();
	 myFile.close(); 
}
	