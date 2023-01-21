#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Node{
public:
    Node* next;
    Node* prev;
    char data;
    Node(){
        next = nullptr;
        prev = nullptr;
    }
    Node(char data){
        next = nullptr;
        prev = nullptr;
        this->data = data;
    }
};
class LinkedList{
public:
    Node* header;
    Node* tailer;
    LinkedList(){
        header = new Node();
        tailer = new Node();
        header->next = tailer;
        tailer->prev = header;
    }
    void push(char newdata,Node* curNode){
        Node* newNode = new Node(newdata);
        curNode->prev->next = newNode;
        newNode->prev = curNode->prev;
        newNode->next = curNode;
        curNode->prev = newNode;
    }
    void erase(Node* curNode){
        if(curNode->prev == header)
            return;
        else{
            Node* delNode = curNode->prev;
            curNode->prev = delNode->prev;
            delNode->prev->next = curNode;
            delete delNode;
            return;
        }
    }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string init;
    cin >> init;
    int m;
    cin >> m;
    char order;
    LinkedList linkedList;
    Node* curNode = linkedList.tailer;
    for(int i = 0; i < init.size(); i++){
        linkedList.push(init[i],curNode);
    }
    for(int i = 0; i < m; i++){
        cin >> order;
        if(order == 'L'){
            if(curNode->prev != linkedList.header)
                curNode = curNode->prev;
        }
        if(order == 'D'){
            if(curNode->next != nullptr)
                curNode = curNode->next;
        }
        if(order == 'B'){
            linkedList.erase(curNode);
        }
        if(order == 'P'){
            char newChar;
            cin >> newChar;
            linkedList.push(newChar,curNode);
        }
    }
    curNode = linkedList.header->next;
    while(curNode!=linkedList.tailer){
        cout << curNode->data;
        curNode = curNode->next;
    }
}