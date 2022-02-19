#include <stdio.h>

int main() {
/*int n,m;
printf("ente");
scanf("%d %d",&n,&m);*/
  int values[4][6]={2,3,4,5,7,8,9,4,6,8};

  //printf("Enter ntegers: ");

  // taking input and storing it in an array
 // for(int i = 0; i <4; ++i) {
//for(int j=0;j<6;++j)
/*{
     scanf("%d", &values[i][j]);
  }
}
  printf("Displaying integers: ");

  // printing elements of an array*/
  for(int i =0; i<4; i++) {
for(int j=0;j<6;j++){
     printf("%d", values[i][j]);
  }
}
  return 0;
}