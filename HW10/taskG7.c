#include <stdio.h>
 
const int line_width = 10001;                           // объявление константы размера строки 


int main(void)
{
char * input_fn = "input.txt";                        // объявление указателя на файл input.txt
char * output_fn = "output.txt";                      // объявление указателя на файл input.txt
char line[line_width];                                // объявление массива символов размером 256
char c;                                               // создание переменной char

int count_b = 0;
int count_s = 0;

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
	for (int i = 0; line[i] != '\0'; i++)
	{
		if (line[i] >= 'A' && line[i] <= 'Z')
		{
			count_b++;
		}
		else if (line[i] >= 'a' && line[i] <= 'z')
		{
			count_s++;
		}
	}
	fprintf(fp, "%d %d", count_s, count_b);


                

    fclose(fp); 	                                   // закрытие файла
    return 0;
}

