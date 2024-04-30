#include <stdbool.h> 
#include <stdio.h> 
#include <string.h> 
  
// Retorna verdadeiro se a string for pangram, caso contrário, falso 
bool checkPangram(char str[]) 
{ 
    // Crie uma tabela hash para marcar os caracteres 
    // Presente na string 
    bool mark[26]; 
    for (int i = 0; i < 26; i++) 
        mark[i] = false; 
  
    // Para indexação em mark[] 
    int index; 
  
    // Percorra todos os personagens 
    size_t size = strlen(str); 
    for (int i = 0; i < size; i++) { 
  
        // Se for maiúsculo, subtraia 'A' 
        // Para encontrar index. 
        if ('A' <= str[i] && str[i] <= 'Z') 
            index = str[i] - 'A'; 
  
        // Se for caractere minúsculo, subtraia 'a' 
        // Para encontrar index. 
        else if ('a' <= str[i] && str[i] <= 'z') 
            index = str[i] - 'a'; 
  
        // Se este caractere for diferente do inglês 
        // Caracteres minúsculos e maiúsculos. 
        else
            continue; 
  
        mark[index] = true; 
    } 
  
    // Retorne falso se algum caractere estiver desmarcado 
    for (int i = 0; i <= 25; i++) 
        if (mark[i] == false) 
            return (false); 
  
    // Se todos os personagens estivessem presentes
    return (true); 
} 
  
// Programa Driver para testar as funções acima 
int main() 
{ 
    char str[] 
        = "A rápida raposa marrom salta sobre o cachorro preguicoso"; 
    if (checkPangram(str) == true) 
        printf(" %s  
é um pangrama", str); 
    else
        printf(" %s  
não é um pangrama", str); 
    return (0); 
} 