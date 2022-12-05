#include<stdlib.h>
#include <stdio.h>
     
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
 
 
struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int main()     
{
        int choice;
        while(1){
               
                printf("\n                MENU                             \n");
                printf("\n 1.Stworz     \n");
                printf("\n 2.Wyswietl    \n");
                printf("\n 3.Wprowadz na poczatek listy    \n");
                printf("\n 4.Wprowadz na koniec listy  \n");
                printf("\n 5.Wprowadz na wybrana pozycje       \n");
                printf("\n 6.Usun z poczatku      \n");
                printf("\n 7.Usun z konca        \n");
                printf("\n 8.Usun z wybranej pozycji    \n");
                printf("\n 9.Wyjscie       \n");
                printf("\n--------------------------------------\n");
                printf("Wprowadz swoj wybor:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        
                        case 9:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("n Wybierz prawidlowa instrukcje:n");
                                        break;
                }
        }
        return 0;
}
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nAlokowanie pamieci zakonczone niepowodzeniem:\n");
                exit(0);
        }
        printf("\nWprowadz wartosc :\t");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nLista jest pusta:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nElementy listy:\n");
                while(ptr!=NULL)
                {
                        printf("%d\t",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nAlokowanie pamieci zakonczone niepowodzeniem:\n");
                return;
        }
        printf("\nWprowadz wartosc :\t" );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nAlokowanie pamieci zakonczone niepowodzeniem:\n");
                return;
        }
        printf("\nWprowadz wartosc:\t" );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nAlokowanie pamieci zakonczone niepowodzeniem:\n");
                return;
        }
        printf("\nWprowadz pozycje dla nowego elementu:\t");
        scanf("%d",&pos);
        printf("\nWprowadz wartosc dla nowego elementu:\t");
        scanf("%d",&temp->info) ;
  
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nWybrana pozycja nie zostala znaleziona:\n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}
void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nLista jest pusta:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nUsuniety element :%d\t",ptr->info);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nLista jest pusta:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nUsuniety element:%d\t",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nUsuniety element:%d\t",ptr->info);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nLista jest pusta:\n");
                exit(0);
        }
        else
        {
                printf("\nWprowadz pozycje elementu do usuniecia:\t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\nUsuniety element:%d\t",ptr->info  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPodana pozycja nie znaleziona:\n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\nUsuniety element:%d\t",ptr->info );
                        free(ptr);
                }
        }
}
