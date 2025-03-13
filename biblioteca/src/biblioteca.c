#include <stdio.h>

typedef struct _book
{
    char title[100];
    char author[100];
    int publication_year;
    int quiantity;
} book_t;

typedef struct _member
{
    int id;
    char name[100];
    int bookIssued;

} member_t;

int main()
{
    int choice = 0;

    do
    {
        printf("\nMenu de sistema d emanejo de biblioteca\n");
        printf("\t1. Agregar libro\n");
        printf("\t2. Mostrar libros\n");
        printf("\t3. Agregar un miembro\n");
        printf("\t4.-Prestar libro\n");
        printf("\t5.-Salir\n");
        printf("Indica tu opcion: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // addBook();
            break;
        case 2:
            //  displayBooks();
            break;
        case 3:
            // addMember();
            break;
        case 4:
            // issueBook();
            break;
        default:
            printf("Esta opcion no es una opcion valida\n");
            break;
        }
    } while (choice != 5);
}