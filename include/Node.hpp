/** 
* @file Dosya adı:Node.hpp
* @description Programınızın açıklaması ne yaptığına dair: Bir class Node adına tanımladım
* @course Dersi aldığınız eğitim türü ve grup:1.Ögretim A
* @assignment Kaçıncı ödev olduğu:1.Ödev
* @date Kodu oluşturduğunuz Tarih:14/11/2021
* @author Gruptakilerin yazar adları ve mail adresleri:ABDULLAH HALLAK,abdullah.hallak@ogr.sakarya.edu.tr
*/
#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
#include <string>

using namespace std;


class Node{
	
	public:
	
	string name;
	Node* prev;
	Node* next;
	
	Node(string name, Node* prev, Node* next);
	Node();
};

#endif