#include<stdio.h>
#include<math.h>
main()
{
    int i,n,a[100],min,max;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Nhap so nguyen a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    max=a[1];
    for(i=2;i<=n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    min=a[1];
    for(i=2;i<=n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("max=%d\n",max);
    printf("min=%d\n",min);
}
