// O senhor pode lançar isso no Vscode e colocar pra rodar, têm um menu completamente navegávele que 
// te permite fazer tudo o que foi pedido na atividade.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> //biblioteca para valores booleanos, sei que não estudamos mas achei bom usar

#define MAX_TASKS 100
#define MAX_TASK_LENGTH 200

// tarefa
typedef struct {
    char description[MAX_TASK_LENGTH];
    bool completed;
} Task;

// lista de tarefas
typedef struct {
    Task tasks[MAX_TASKS];
    int task_count;
} TodoList;

// protótipos das funções
void initializeTodoList(TodoList *list);
void addTask(TodoList *list, const char *description);
void markTaskCompleted(TodoList *list, int taskIndex);
void removeTask(TodoList *list, int taskIndex);
void displayTasks(TodoList *list, bool showCompleted);
void displayMenu();

// inicializa a lista de tarefas
void initializeTodoList(TodoList *list) {
    list->task_count = 0;
}

// adiciona uma nova tarefa à lista
void addTask(TodoList *list, const char *description) {
    if (list->task_count >= MAX_TASKS) {
        printf("Erro: Limite máximo de tarefas atingido.\n");
        return;
    }

    Task newTask;
    strncpy(newTask.description, description, MAX_TASK_LENGTH - 1);
    newTask.description[MAX_TASK_LENGTH - 1] = '\0';
    newTask.completed = false;

    list->tasks[list->task_count++] = newTask;
    printf("Tarefa adicionada com sucesso!\n");
}

// marca uma tarefa como concluída
void markTaskCompleted(TodoList *list, int taskIndex) {
    if (taskIndex < 0 || taskIndex >= list->task_count) {
        printf("Índice de tarefa inválido.\n");
        return;
    }

    list->tasks[taskIndex].completed = true;
    printf("Tarefa marcada como concluída!\n");
}

// remove uma tarefa da lista
void removeTask(TodoList *list, int taskIndex) {
    if (taskIndex < 0 || taskIndex >= list->task_count) {
        printf("Índice de tarefa inválido.\n");
        return;
    }

    // move todas as tarefas seguintes uma posição para trás
    for (int i = taskIndex; i < list->task_count - 1; i++) {
        list->tasks[i] = list->tasks[i + 1];
    }

    list->task_count--;
    printf("Tarefa removida com sucesso!\n");
}

// exibe as tarefas (pendentes ou concluídas)
void displayTasks(TodoList *list, bool showCompleted) {
    printf("\n--- Lista de Tarefas ---\n");
    int tasksPrinted = 0;

    for (int i = 0; i < list->task_count; i++) {
        if (list->tasks[i].completed == showCompleted) {
            printf("%d. %s - %s\n", 
                   i, 
                   list->tasks[i].description, 
                   showCompleted ? "Concluída" : "Pendente");
            tasksPrinted++;
        }
    }

    if (tasksPrinted == 0) {
        printf("Nenhuma tarefa %s encontrada.\n", 
               showCompleted ? "concluída" : "pendente");
    }
}

// exibe o menu de opções
void displayMenu() {
    printf("\n--- Menu de Tarefas ---\n");
    printf("1. Adicionar Tarefa\n");
    printf("2. Marcar Tarefa como Concluída\n");
    printf("3. Remover Tarefa\n");
    printf("4. Visualizar Tarefas Pendentes\n");
    printf("5. Visualizar Tarefas Concluídas\n");
    printf("6. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    TodoList todoList;
    initializeTodoList(&todoList);
    
    int choice;
    char description[MAX_TASK_LENGTH];
    int taskIndex;

    while (1) {
        displayMenu();
        scanf("%d", &choice);
        getchar(); // limpa o buffer do enter

        switch (choice) {
            case 1:
                printf("Digite a descrição da tarefa: ");
                fgets(description, sizeof(description), stdin);
                description[strcspn(description, "\n")] = 0; // Remove newline
                addTask(&todoList, description);
                break;
            
            case 2:
                displayTasks(&todoList, false);
                printf("Digite o índice da tarefa a ser marcada como concluída: ");
                scanf("%d", &taskIndex);
                markTaskCompleted(&todoList, taskIndex);
                break;
            
            case 3:
                displayTasks(&todoList, false);
                printf("Digite o índice da tarefa a ser removida: ");
                scanf("%d", &taskIndex);
                removeTask(&todoList, taskIndex);
                break;
            
            case 4:
                displayTasks(&todoList, false);
                break;
            
            case 5:
                displayTasks(&todoList, true);
                break;
            
            case 6:
                printf("Saindo do programa...\n");
                return 0;
            
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}