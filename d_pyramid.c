#include <stdio.h>

void pyramid(void);
int size(void);
void build_pyramid(int Order_of_Pyramid);

int main(void)
{
    int order = size();
    build_pyramid(order);

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////FUNCTIONS - implementation//////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////

/*Function to implement the symbol*/
void pyramid(void)
{
  printf("#");
}

/*Function to obtain pyramid order*/
int size(void)
{   
  int a;  
  printf("Height: ");
  scanf("%d", &a);
  return a;
}

/*Function to build the pyramid*/
void build_pyramid(int Order_of_Pyramid)
{
    int New = (Order_of_Pyramid * 2) + 2; //Novo tamanho das colunas
    int counter = 0; // decremento para cada linha da pirâmide
    int Counter = Order_of_Pyramid + 2; //inicio da contagem na 2a pirâmide

    for (int i = 0; i < Order_of_Pyramid; i++) // For para cada linha
    {
        counter++;
        Counter++;
        for (int j = 0; j < New; j++)// For para cada coluna -> New variable N to represent the extended size of matrix (offset => 2 because of the gaps between the pyramids)
        {
                if (j < Order_of_Pyramid - counter)
                {
                    printf(" ");
                }
                else if (j < Order_of_Pyramid)
                {
                    pyramid();
                }

            while(j == Order_of_Pyramid || (j > Order_of_Pyramid && j < New))// This loop is for the first matrix (n represents the order of the matrix)
            {
                if (j >= Counter) //parte para os gaps
                {
                    printf(" ");
                }
                else if (j == Order_of_Pyramid  || j == Order_of_Pyramid + 1)// parte para o offset de 2
                {
                    printf(" ");
                }
                else
                {
                    pyramid();
                }

                j++;
            }
        }
        
        printf("\n");
    }
}
