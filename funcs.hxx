#include <fstream>
using namespace std;

struct row{
	int num;
	char time[5];		
	char target[250];
}; 

*row read_table(fstream fs);
void write_table(fstream fs, row *tab);
*row make_table();
row make_row();
*row insert_row(row *tab);
*int filter(row *tab, targer); //массив интов
 show(*int, *row);
