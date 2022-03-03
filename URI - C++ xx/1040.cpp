#include<iostream>

using namespace std;

///precisa mostrar uma casa decimal

int main(){

///leia quatro numeros
float n1,n2,n3,n4,n_exame;
float media, nova_media;

cin >> n1 >> n2 >> n3 >> n4;

media = ((n1*2)+(n2*3)+(n3*4)+n4)/10.0;

cout << "Media: " << media << " ";

if(media >= 7.0){
    cout << "Aluno aprovado." << endl;
}
else if(media < 5.0){
    cout << "Aluno reprovado." << endl;
}
else{
    cout << "Aluno em exame." << endl;
    cin >> n_exame;
    nova_media = (media+n_exame)/2.0;
    cout << "Nota do exame." << n_exame << endl;
    if(nova_media >=7.0){
        cout << "Aluno aprovado." << endl;
        cout << nova_media;
    }
    else if(nova_media <=4.9){
        cout << "Aluno reprovado." << endl;
        cout << nova_media;
    }
}


return 0;
}
