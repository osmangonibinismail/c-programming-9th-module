// #include <stdio.h>
// int main()
// {
//     int ar[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int ar[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int ar[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ar[i]);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int ar[5] = {5, 58, 96, 789, 7};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int ar[5] = {58};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int ar[5] = {0};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     for (int i = n - 1; i >= 0; i--)
//     {
//         printf("%d\n", ar[i]);
//     }
// // }
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\n", ar[i]);
//         sum = sum + ar[i];
//     }
//     printf("%d\n", sum);
// }

// #include <stdio.h>
// #include<limits.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int min = INT_MAX;
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if(ar[i] < min){
//             min = ar[i];
//         }

//         if(ar[i] > max){
//             max = ar[i];
//         }
//     }
//     printf("Minimum = %d\nMaximum = %d\n", min,max);

// }
// #include <stdio.h>
// #include<limits.h>

// int a[100000], b[100000];

// int main()
// {
//     int length1 = 0, length2 = 0;
//     scanf("%d", &length1);
//     int a[length1];

//     for (int i = 0; i < length1; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < length1; i++)
//     {
//        printf("%d ", a[i]);
//     }
//     printf("\n");

//     for (int i = 0; i < length1; i++)
//     {
//        printf("%d ", b[i]);
//     }
//     printf("\n");
//     printf("Before array\n");

//     length2 = length1;

//     for (int i = 0; i < length1; i++)
//     {
//        b[i] = a[i];
//     }

//     for (int i = 0; i < length1; i++)
//     {
//        printf("%d ", a[i]);
//     }
//     printf("\n");

//     for (int i = 0; i < length2; i++)
//     {
//        printf("%d ", b[i]);
//     }
//     printf("\n");
//     printf("After array\n");

// }
// #include <stdio.h>
// #include <limits.h>

// int a[100000];

// int main()
// {
//     int length;
//     scanf("%d", &length);

//     for (int i = 0; i < length; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     // print input
//     for (int i = 0; i < length; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     int index, value;
//     scanf("%d %d", &index, &value);

//     length++;

//     for (int i = length - 1; i >= index; i--)
//     {
//         a[i + 1] = a[i];
//     }

//     a[index] = value;

//     // print output
//     for (int i = 0; i < length; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }

// #include <stdio.h>
// #include<limits.h>

// int a[100000];

// int main()
// {
//     int length;
//     scanf("%d", &length);

//     for(int i = 0; i < length; i++){
//         scanf("%d", &a[i]);
//     }

//     int index;
//     scanf("%d", &index);

//     for(int i = index; i < length - 1; i++){
//         a[i] = a[i + 1];
//     }

//     length--;

//     for(int i = 0; i < length; i++){
//         printf("%d ", a[i]);
//     }

//     return 0;
// }
#include <stdio.h>
#include<limits.h>

int a[100000];

int main()
{
    int length;
    scanf("%d", &length);

    for(int i = 0; i < length; i++){
        scanf("%d", &a[i]);
    }

    int index;
    scanf("%d", &index);

    if(0 > index || index >= length ){
        printf("Wrong Index\n");
    }

    for(int i = index ; i < length - 1; i++){
        a[i] = a[i + 1];
    }

    length--;

    for(int i = 0; i < length; i++){
        printf("%d ", a[i]);
    }

    return 0;
}