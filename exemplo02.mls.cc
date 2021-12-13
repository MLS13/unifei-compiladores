#include<iostream.h>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(int argc, char *argv[]){
char palavra_a;
int num_a;
int num_b;
float soma;
cout << 'Digite seu nome' << endl; 
cin >> palavra_a;
soma = 0;
num_a = 0;
num_b = 5;
while (num_a < num_b){
float nota_a;
cout << 'Digite sua nota' << endl; 
cin >> nota_a;
soma = soma + nota_a;
num_a = num_a + 1;
}
float result;
result = soma / 5;
cout << palavra_a << endl; 
cout << 'SUA MEDIA E' << endl; 
cout << result << endl; 
}