#include <iostream>

int gcd(int a, int b) // 두 양수의 최대공약수 구하기
{
   int temp;
   while (1) {
      if (b == 0)//division by zero 방지
         break;
      else if (a % b == 0)
         break;
      temp = a;
      a = b;
      b = temp % b;
   }
   return b;
}

int main(void)
{
    int case_num, num, arr[100]={0, }, gcd_sum;
    scanf("%d", &case_num);
    for(int i=0; i<case_num; i++){
        scanf("%d", &num);
        gcd_sum = 0;
        for(int j=0; j<num; j++)
            scanf("%d", &arr[j]);
        
        for(int a=0; a<num-1; a++)
            for(int b=1+a; b<num; b++)
                gcd_sum += gcd(arr[a], arr[b]);
        printf("%d\n", gcd_sum);
        
    }
   return 0;
}