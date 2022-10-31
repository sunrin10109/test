#include<stdio.h>
/*
void write_file()
{
	FILE* fp = fopen("test.txt", "w");
	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fclose(fp);
}
void read_file()
{
	char c;
	FILE* fp = fopen("test.txt", "r");
	for (int i = 0; i < 3; i++) {
		c = fgetc(fp);
		printf("%c", c);
	}
	fclose(fp);
}
int main() {
	write_file();
	read_file();
}
*/

/*void write_file()
{
	char str[] = "Hello World";
	FILE* fp = fopen("test.txt", "w");
	fputs(str, fp);
	fclose(fp);
}
void read_file() {
	char str[100];
	FILE* fp = fopen("test.txt", "r");

	fgets(str, sizeof(str), fp);
	fclose(fp);
	printf("%s", str);
}
int main() {
	write_file();
	read_file();
}
*/
/*
void write_file() {
	int a = 1, b = 2, c = 3;
	FILE* fp = fopen("test.txt", "w");
	fprintf(fp, "%d %d %d", a, b, c);
	fclose(fp);
}

void read_file() {
	int a, b, c;
	FILE* fp = fopen("test.txt", "r");
	fscanf(fp, "%d %d %d", &a, &b, &c);
	fclose(fp);
	printf("%d %d %d", a, b, c);
}
int main() {
	write_file();
	read_file();
}*/
void write_score(int score) {
	FILE* fp = fopen("score.txt", "w");
	fprintf(fp, "%d", score);
	fclose(fp);
}
int read_score() {
	int score
	FILE* fp = fopen("score.txt", "r");
	fscanf(fp, "%d", &score);
	fclose(fp);
	return score;
}
int main() {
	int score = read_score();
	printf("%d", score);
}
