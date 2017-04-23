/* Function Prototypes */
struct house
{
    int stno;
    char stname;
    float price;
};
struct house InputHouse(int* no, char* name, float* price);
void PrintHouse(char *name, struct house h);
int ComparePrices(int comparison, struct house firstHouse, struct house secondHouse);
