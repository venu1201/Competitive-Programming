#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};
struct date function(struct date t1,struct date t2)
{

    if (t1.year > t2.year)
        return t1;

    else if ((t1.year == t2.year) && (t1.month > t2.month))

        return t1;

    else if ((t1.year == t2.year) && (t1.month == t2.month) && (t1.day > t2.day))

        return t1;
    return t2;

    
}
int main()
{
    struct date t1, t2, buyuk;
    printf("Tarihi gun ay yil sirasina gore giriniz:\n");

    printf("Ilk tarihi giriniz: ");

    scanf("%d%d%d", &t1.day, &t1.month, &t1.year);
    printf("Ikinci tarihi giriniz: ");
    scanf("%d%d%d", &t2.day, &t2.month, &t2.year);

    buyuk = function(t1,t2);

    printf("%d/%d/%d comes later", buyuk.day, buyuk.month, buyuk.year);

    return 0;
}