#include <stdio.h>

typedef struct aluno {
    int RA;
    char nome[50];
    float nota;
    int freq;
}aluno;

aluno alunos[100];
int n = 0;

aluno get_aluno() {
  int RA;
  printf("Digite o RA do aluno: ");
  scanf("%d", &RA);
  for (int i = 0; i < n; i++) {
      if (alunos[i].RA == RA) {
          return alunos[i];
      }
  }
  printf("Aluno não encontrado!\n");
  aluno a = {0, "", 0, 0};
  return a;
}

int verificar_RA(int RA){
  for (int i = 0; i < n; i++) {
      if (alunos[i].RA == RA) {
          return 1;
      }
  }
  return 0;
}

void adicionar_aluno() {
    aluno a;
    printf("Digite o RA do aluno: ");
    scanf("%d", &a.RA);
    if (verificar_RA(a.RA)) {
        printf("Aluno já cadastrado!\n");
        return;
    }
    printf("Digite o nome do aluno: ");
    scanf("%s", a.nome);
    printf("Digite a nota do aluno: ");
    scanf("%f", &a.nota);
    printf("Digite a frequência do aluno: ");
    scanf("%d", &a.freq);
    alunos[n] = a;
    n++;
}

void remover_aluno() {
    aluno a = get_aluno();
    if (a.RA) {
        for (int i = 0; i < n; i++) {
            if (alunos[i].RA == a.RA) {
                alunos[i] = alunos[n - 1];
                n--;
                printf("Aluno removido com sucesso!\n");
            }
        }
    }
}

void listar_alunos() {
    printf("Lista de alunos:\n");
    for (int i = 0; i < n; i++) {
        printf("%d - RA: %d, Nome: %s\n", i + 1, alunos[i].RA, alunos[i].nome);
    }
}

void ver_aluno() {
    aluno a = get_aluno();
    if (a.RA) {
        printf("RA: %d\nNome: %s\nNota: %.2f\nFrequência: %d\n", a.RA, a.nome, a.nota, a.freq);
    }
}

int main() {
    int opcao = 0;
    while (opcao != 5) {
        printf("\n~~~~~~~~Menu~~~~~~~~\n");
        printf("1 - Adicionar aluno\n");
        printf("2 - Remover aluno\n");
        printf("3 - Listar alunos\n");
        printf("4 - Ver aluno\n");
        printf("5 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                adicionar_aluno();
                break;
            case 2:
                remover_aluno();
                break;
            case 3:
                listar_alunos();
                break;
            case 4:
                ver_aluno();
                break;
            case 5:
                return 0;
        }
    }
}
