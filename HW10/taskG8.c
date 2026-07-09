#include <stdio.h>

 
const int line_width = 1001;                           // объявление константы размера строки 


void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

int main(void)
{
char * input_fn = "input.txt";                        // объявление указателя на файл input.txt
char * output_fn = "output.txt";                      // объявление указателя на файл input.txt
char line[line_width];                                // объявление массива символов размером 256
char c;                                               // создание переменной char

int numbers[1000];

FILE *fp;                                             // насколько понял создание указателя на файл


if((fp = fopen(input_fn, "r")) == NULL)               // условие: если при открытии файла input на чтение выдается NULL - проверка 
{
   perror("Error occured while opening input file!"); // напечатать ошибку
   return 1;                                    
}


int count = 0;                                       
while(((c = getc(fp)) != EOF) && (c != '\n'))          // цикл продолжается если символы из файла считываются не доходя до конца файла И считанный символ НЕ перенос строки
        line[count++] = c;                             // запись в массив считанных с файла символов
    line[count] = '\0';                                // добавление в конец строки символа окончания строки.
  	
    fclose(fp);	


if((fp = fopen(output_fn, "w")) == NULL)               // условие с проверкой на открытие файла output на запись 
{
	perror("Error occured while opening output file!");
    return 1;
}    

	int i = 0;
	int k = 0;
	int num = 0;

	
	while (line[i] != '\0')
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			while (line[i] >= '0' && line[i] <= '9')
			{
				num = num*10 + (line[i] -'0');
				i++;
			}
			numbers[k] = num;
			k++;
			num = 0;
		}
		
		else
		{
			i++;
		}	
	}
	selectionSort(numbers,k);
	
	for (i = 0; i < k; i++)
	{
		fprintf(fp, "%d ", numbers[i]);
	}
                

    fclose(fp); 	                                   // закрытие файла
    return 0;
}

