#include <iostream>

using namespace std;

class agenda

{
    string nome;
    string telefone;
    public:
        void setNome (string nome);
        void setTelefone (string telefone);
        string getNome();
        string getTelefone();
        void printAgenda ();
        void printTelefone ();
};   


void agenda::setNome(string nome)
{
    this-> nome= nome;
    
};


string agenda::getNome()
{
    return nome;
};


void agenda::setTelefone(string telefone)
{
    this -> telefone = telefone;
};


string agenda::getTelefone()
{
    return telefone;
};

void agenda::printTelefone(){
    cout<<telefone<<"\n";
}

void agenda::printAgenda ()
{
    cout << nome << "," << telefone << "\n";
}
int main()
{
    agenda a;
    a.setNome("Clara");
    a.setTelefone("61984356273");
    a.printAgenda();
    a.printTelefone();
    
    return 0;
}
