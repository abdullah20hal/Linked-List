/** 
* @file Dosya adı:List.hpp
* @description Programınızın açıklaması ne yaptığına dair: fonksiyonlar tanımladım
* @course Dersi aldığınız eğitim türü ve grup:1.Ögretim A
* @assignment Kaçıncı ödev olduğu:1.Ödev
* @date Kodu oluşturduğunuz Tarih:14/11/2021
* @author Gruptakilerin yazar adları ve mail adresleri:ABDULLAH HALLAK,abdullah.hallak@ogr.sakarya.edu.tr
*/

#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>

#include <string>

#include "Node.hpp"

using namespace std;

class List{
	private:
	 Node* first;
	 Node* last;	
	
	public:
  
	void Insert(int pos , string name);
	void InsertPosition(int pos , string name);
	void InsertLast(string name);
    void Remove(int pos);
	void RemoveLast();
	void RemovePosition(int pos);
	void Show();

};

#endif