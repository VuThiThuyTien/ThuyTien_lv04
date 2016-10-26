#include<stdio.h>
#include<math.h>
main()
{
    int n,m,i,j; float a[100][100],max;
    printf("Nhap cap ma tran n hang va m cot: ");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("Nhap a[%d][%d]= ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    max=a[1][1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]>max)
            max=a[i][j];
        }
    }
    printf("Max=%0.2f",max);

}
