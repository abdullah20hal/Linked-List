/** 
* @file Dosya adı:Node.hpp
* @description Programınızın açıklaması ne yaptığına dair: Bir construct Node adına tanımladım
* @course Dersi aldığınız eğitim türü ve grup:1.Ögretim A
* @assignment Kaçıncı ödev olduğu:1.Ödev
* @date Kodu oluşturduğunuz Tarih:14/11/2021
* @author Gruptakilerin yazar adları ve mail adresleri:ABDULLAH HALLAK,abdullah.hallak@ogr.sakarya.edu.tr
*/
#include<string>
#include "Node.hpp"
using namespace std;

Node::Node(string name, Node* prev, Node* next){
	this->name=name;
	this->prev=prev;
	this->next=next;
}
Node::Node(){
	
}



