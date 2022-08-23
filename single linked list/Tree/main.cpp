#include <iostream>
using namespace std;

// node
struct Node
{
    char label;
    Node *left
    Node *right
    Node *parent

    // Variabel
} * root, *newNode;

// createNewTree
void createNewTree(char label)
{
    if (root != NULL){
        cout << "\nTree sudah dibuat" << endl;
    }
    else{
        root = new Node();
        root->label = label;
        root->left = NULL;
        root->right = NULL;
        root->parent = NULL;
        cout << "\nNode " << label << " berhasil dibuat root." << endl;
    }
}

// insert left
Node *insertLeft(char label, Node *node){
    if (root == NULL){
        cout << "\n Buat root nya terlebih dahulu!!." << endl;
    }
    else{
        // cek apakah anak kiri ada atau tidak
        if (node->left != NULL){
            // jika ada maka munculkan
            cout << "\nNode " << node->label << " sudah ada anak kiri" << endl;
            return NULL;
        }
        else{
            newNode = new Node();
            newNode->label = label;
            newNode->left = NULL;
            newNode->right = NULL;
            newNode->parent = node;
            node->left = newNode;
            cout << "\nNode " << label << " berhasil ditambahkan ke anak kiri " << newNode->parent->label << endl;
        }
    }
    return newNode;
}

// insert right
Node *insertRight(char label, Node *node)
{
    if (root == NULL){
        cout << "\n Buat root nya terlebih dahulu!!." << endl;
    }
    else{
        // cek apakah anak kanan ada atau tidak
        if (node->right != NULL){
            // jika ada maka munculkan
            cout << "\nNode " << node->label << " sudah ada anak kanan" << endl;
            return NULL;
        }
        else{
            newNode = new Node();
            newNode->label = label;
            newNode->left = NULL;
            newNode->right = NULL;
            newNode->parent = node;
            node->right = newNode;
            cout << "\nNode " << label << " berhasil ditambahkan ke anak kanan " << newNode->parent->label << endl;
        }
    }
    return newNode;
}

// Empty
bool empty()
{
    if (root == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// update
void update(char label, Node *node)
{
    if (!root)
    {
        cout << "\n Buat root nya terlebih dahulu!!." << endl;
    }
    else
    {
        if (node == NULL)
        {
            cout << "\n Node yang ingin diganti tidak ada!!" << endl;
        }
        else
        {
            char temp = node->label;
            node->label = label;
            cout << "\nLabel " << temp << " berhasil di ubah menjadi " << label << endl;
        }
    }
}

// retrive
void retrieve(Node *node)
{
    if (!root)
    {
        cout << "\n Buat root nya terlebih dahulu!!." << endl;
    }
    else
    {
        if (node == NULL)
        {
            cout << "\n Node yang ditunjuk tidak ada!!" << endl;
        }
        else
        {
            cout << "\nLabel node: " << node->label << endl;
        }
    }
}

// find
void find(Node *node)
{
    if (!root)
    {
        cout << "\nBuat tree terlebih dahulu!!." << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\nNode yang ditunjuk tidak ada!!" << endl;
        }
        else
        {
            cout << "\nLabel Node: " << node->label << endl;
            cout << "\nRoot Node: " << root->label << endl;

            // mencari node parent
            if (!node->parent)
            {
                cout << "\nParent Node: (tidak punya orang tua)" << endl;
            }
            else
            {
                cout << "\nParent Node: " << node->parent->label << endl;
            }
            // mencari node siblings
            if (node->parent != NULL && node->parent->left != node && node->parent->right == node)
            {
                cout << "\nSaudara kiri: " << node->parent->left->label << endl;
            }
            else if (node->parent != NULL && node->parent->right != node && node->parent->left == node)
            {
                cout << "\nSaudara kanan: " << node->parent->right->label << endl;
            }
            else
            {
                cout << "\nSaudara Node: (tidak punya saudara)" << endl;
            }
            // mencari node kiri
            if (!node->left)
            {
                cout << "\nAnak kiri: (tidak punya anak kiri)" << endl;
            }
            else
            {
                cout << "\nAnak kiri node: " << node->left->label << endl;
            }
            // mencari node kanan
            if (!node->right)
            {
                cout << "\nAnak kanan: (tidak punya anak kiri)" << endl;
            }
            else
            {
                cout << "\nAnak kanan node: " << node->right->label << endl;
            }
        }
    }
}
void PostOrder(node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        cout << root->data;
    }
}

// Transversal
// preOrder
void preOrder(Node *node = root)
{

    if (!root)
    {
        cout << "\nBuat tree terlebih dahulu!!" << endl;
    }
    else
    {

        if (node != NULL)
        {
            cout << node->label << ", ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}

// preOrder
void inOrder(Node *node = root)
{

    if (!root)
    {
        cout << "\nBuat tree terlebih dahulu!!" << endl;
    }
    else
    {

        if (node != NULL)
        {
            inOrder(node->left);
            cout << node->label << ", ";
            inOrder(node->right);
        }
    }
}

int main()
{
    createNewTree('A');

    Node *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, *nodeJ;

    nodeB = insertLeft('B', root);
    nodeC = insertRight('C', root);
    nodeD = insertLeft('D', nodeB);
    nodeE = insertRight('E', nodeB);
    nodeF = insertLeft('F', nodeC);
    nodeG = insertLeft('G', nodeE);
    nodeH = insertRight('H', nodeE);
    nodeI = insertLeft('I', nodeG);
    nodeJ = insertRight('J', nodeG);

    cout << "\nTree empty? : " << empty() << endl;

    // update('Z', nodeC);
    // update('C', nodeC);

    // retrieve(nodeG);

    // find(nodeD);

    cout << "\nPreOrder: " << endl;
    preOrder();
    cout << "\n " << endl;
    cout << "\n " << endl;
    cout << "\nInOrder: " << endl;
    inOrder();

    cout << endl;
}

// Operasi pada Tree ?
// - Create : digunakan untuk membentuk binary tree baru yang masih kosong.
// - Clear : digunakan untuk mengosongkan binary tree yang sudah ada atau menghapus semua node pada
// binary tree.
// - Empty : digunakan untuk memeriksa apakah binary tree masih kosong atau tidak.
// - Insert : digunakan untuk memasukkan sebuah node kedalam tree.
// - Find : digunakan untuk mencari root, parent, left child, atau right child dari suatu node dengan syarat tree
// tidak boleh kosong.
// - Update : digunakan untuk mengubah isi dari node yang ditunjuk oleh pointer current dengan syarat tree
// tidak boleh kosong.
// - Retrieve : digunakan untuk mengetahui isi dari node yang ditunjuk pointer current dengan syarat tree
// tidak boleh kosong.
// - Delete Sub : digunakan untuk menghapus sebuah subtree (node beserta seluruh descendant-nya) yang
// ditunjuk pointer current dengan syarat tree tidak boleh kosong.
// - Charateristic : digunakan untuk mengetahui karakteristik dari suatu tree. Yakni size, height, serta average
// lenght-nya.
// - Tranverse : digunakan untuk mengunjungi seluruh node-node pada tree dengan cara tranversal.
