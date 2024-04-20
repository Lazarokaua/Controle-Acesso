#include <stdio.h>
#include <string.h>

int main(void){

  char user[20], password[20] ;

// pedindo ao colaborador o seu nome de usuario
printf("digite seu usuario para acessar o sistema: \n");
scanf("%s", user);

// pedindo ao colaborador sua senha
printf("digite sua senha para acessar o sistema: \n");
scanf("%s", password);

// teste condicional para verificar se o usuario e senha estão corretos
if (strcmp(user, "admin") == 0 && strcmp(password, "admin123") == 0) {
  printf("acesso total\n");
} else if (strcmp(user, "usuario1") == 0 && strcmp(password, "senha123") == 0) {
  printf("Funcionario regular\n");
} else if (strcmp(user, "visitante") == 0 && strcmp(password, "visitante123") == 0) {
  printf("visitante\n");
  // caso o usuario e senha não sejam iguais, o programa retorna a mensagem de acesso negado
} else {
  printf("acesso negado\n");
}
  return 0;
};