/** 
* @file Dosya adı:List.cpp
* @description Programınızın açıklaması ne yaptığına dair:  fonksiyonlar oluşturdum.
* @course Dersi aldığınız eğitim türü ve grup:1.Ögretim A
* @assignment Kaçıncı ödev olduğu:1.Ödev
* @date Kodu oluşturduğunuz Tarih:14/11/2021
* @author Gruptakilerin yazar adları ve mail adresleri:ABDULLAH HALLAK,abdullah.hallak@ogr.sakarya.edu.tr
*/
#include <iostream>
#include <string>
#include "List.hpp"
using namespace std;

int count=0;
Node* first1;
Node* last1;

void List::Insert(int pos , string name){
	
		if(count==0 || pos>count){
		
			InsertLast (name);
		}
		else 
		{
			InsertPosition (pos,name);
		}		
}

void List::InsertLast(string name) {
	Node* newNode = new Node;
	newNode->name = name;
	if (count == 0) {
		first1 = last1 = newNode;
		newNode->next = newNode->prev = NULL;
	}
	else {
		newNode->next = NULL;
		newNode->prev = last1;
		last1->next = newNode;
		last1 = newNode;
	}
		count++;
	}

void List::InsertPosition(int pos , string name){
    Node* newNode = new Node;
    last1->next =newNode;
    newNode->prev=last1;
    newNode->next=NULL;
    last1=newNode;
    Node *curr=newNode;
    int index =0;
    while(last1 != NULL){
	newNode->name =last1->prev->name;
	last1 =last1->prev;
	newNode=newNode->prev;
	index++;
	if(count-index==pos-1){
		last1->name=name;
		last1=curr;
		count++;
	 	break;
		}
	}
}
void List::Remove(int pos){
	
	if(pos>count)
	{
		RemoveLast();
	}
	else
	{
		RemovePosition(pos);
	}
	
}
		
void List::RemoveLast(){
	if (count == 0){
		cout << "Eleman yoktur" << endl;
	}
	else if (count == 1){
		delete first1;
		
		last1 = first1 = NULL;
		count--;
	}
	else{
		Node *current = last1;
		last1 = last1->prev;
		last1->next = NULL;
		delete current;
	}
	count--;
}
	
void List::RemovePosition(int pos){
	int positoin=0;
	Node* newNode=first1;
	while(newNode!=NULL){
		if(positoin==pos)
		{
		Node* yenisil = newNode;
		while(yenisil->next!=NULL)	{
		yenisil->name=newNode->next->name;
		yenisil=yenisil->next;
		newNode=newNode->next;
		}
		}
		positoin++;
		newNode=newNode->next;
	}
	   RemoveLast();
	
}
void List::Show(){
	
	Node* newNode=first1;
	while(newNode != NULL){
    if(newNode->next==NULL){
	cout<<newNode->name;
	
    }
    else{
	cout<<newNode->name<<"<-->";
	}	
	
	newNode=newNode->next;
	}
}	
	