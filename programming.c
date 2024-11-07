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

//     if(0 > index || index >= length ){
//         printf("Wrong Index\n");
//     }

//     for(int i = index ; i < length - 1; i++){
//         a[i] = a[i + 1];
//     }

//     length--;

//     for(int i = 0; i < length; i++){
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// #include<stdio.h>

// int a[100000];
// int b[100000];

// int main()
// {
//     int length;

//     scanf("%d", &length);

//     for(int i = 0; i < length; i++){
//         scanf("%d", &a[i]);
//     }

//     for(int i = 0, j = length - 1; i < length; i++, j--){
//         b[j] = a[i];
//     }

//     for(int i = 0; i < length; i++){
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     for(int i = 0; i < length; i++){
//         printf("%d ", b[i]);
//     }

//     return 0;
// }
// #include<stdio.h>

// int a[100000];
// int b[100000];

// int main()
// {
//     int length;

//     scanf("%d", &length);

//     for(int i = 0; i < length; i++){
//         scanf("%d", &a[i]);
//     }

//     for(int i = 0, j = length - 1; i < length; i++, j--){
//         b[j] = a[i];
//     }

//     for(int i = 0; i < length; i++){
//         a[i] = b[i];
//     }

//     for(int i = 0; i < length; i++){
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     // for(int i = 0; i < length; i++){
//     //     printf("%d ", b[i]);
//     // }

//     return 0;
// }
// #include <stdio.h>

// int a[100000];

// int main()
// {
//     int n;

//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
// {
//     scanf("%d", &a[i]);
// }

// for (int i = 0, j = n - 1; i <= j; i++, j--)
// {

//     int temp = a[i];
//     a[i] = a[j];
//     a[j] = temp;
// }

// for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     printf("\n");

//     return 0;
// }

// #include <stdio.h>

// int a[100000];

// int main()
// {
//     int n, k;
//     int count = 0;
//     scanf("%d %d", &n, &k);

//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 1; i <= k; i++)
//     {
//         if (a[k] <= a[i] && a[i] > 0)
//         {
//             count++;
//         }
//     }
//     printf("%d ", count);
// }
// #include <stdio.h>

// int a[100000];

// int main()
// {
//     int n;
//     int move = 0;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] < a[i - 1])
//         {
//             move = move + a[i - 1] - a[i];
//             a[i] = a[i - 1];
//         }
//     }
//     printf("%d ", move);

//     return 0;
// }

// #include <stdio.h>

// int a[100000];

// int main()
// {
//     int n;

//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
// {
//     scanf("%d", &a[i]);
// }

// for (int i = 0, j = n - 1; i <= j; i++, j--)
// {

//     int temp = a[i];
//     a[i] = a[j];
//     a[j] = temp;
// }

// for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     printf("\n");

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[100000];

//     for(int i = 0; i < 5; i++){
//         scanf("%d", &a[i]);
//     }


//     for(int i = 0; i < 5; i++){
//         printf("%d ", a[i]);
//     }

    

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     float a[100000];

//     for(int i = 0; i < 5; i++){
//         scanf("%f", &a[i]);
//     }


//     for(int i = 0; i < 5; i++){
//         printf("%.2f ", a[i]);
//     }

    

//     return 0;
// }
#include<stdio.h>
int main()
{
    // float a[100000];

    // for(int i = 0; i < 5; i++){
    //     scanf("%f", &a[i]);
    // }


    for(int i = 0; i <= 100; i++){
        printf("a[%.2d]\n", i);
    }

    

    return 0;
}