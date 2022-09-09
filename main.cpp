//Alejandro Hidalgo Badillo A01423412
// 8 de septiembre del 2022

#include <iostream>
using namespace std;

//https://www.youtube.com/watch?v=_IhTp8q0Mm0




// un nodo está compuesto de un dato y dos direcciones (a las cuales ban conectadas sus ramas o los siguientes nodos)
struct Node{
    int data;
    Node* left;
    Node* right;
};


// esta funcion sirve para crear un nodo dentro de otro nodo
//por así decirlo inicializas el arbol y puedes crearle muchas ramas.
Node* createNode(int data){
Node* newNode = new Node();
newNode-> data = data;
newNode-> left = newNode -> right = nullptr;
return newNode;
}

void printTree_pre_order(Node* root){
    if (root == nullptr){
        return;
    }
    cout<< root->data<<" ";
    printTree_pre_order(root->left);
    printTree_pre_order(root->right);
}

void printTree_in_order(Node* root){
    if (root == nullptr){
        return;
    }

    printTree_in_order(root->left);
    cout<< root->data<<" ";
    printTree_in_order(root->right);
}
//im
void printTree_post_order(Node* root){
    if (root == nullptr){
        return;
    }

    printTree_post_order(root->left);
    printTree_post_order(root->right);
    cout<< root->data<<" ";
    
}

int main(){

    //level 1
    Node* root= createNode(1);
    //level 2 
    root->left=createNode(2);
    root->right=createNode(3);
    //level 3 
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);


    root->left ->right->left = createNode(9);
    root->right->right->left = createNode(15);

    cout<<"printing trees by diferent order of reading it"<<endl;
    cout<<endl;
    
    cout<<"print a tree by a pre order: "<<endl;
    printTree_pre_order(root);
    cout<<endl;
    cout<<"print a tree in order: "<<endl;
    printTree_in_order(root);
    cout<<endl;
    cout<<"print a tree in post order "<<endl;
    printTree_post_order(root);
    cout<<endl;

    //cin.get();
        

    
}