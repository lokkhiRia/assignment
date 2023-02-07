 #include<stdio.h>
 int main()
 {


  int m[]={1,1,0,0,1,0,1,0,1,1,0};
  int k[]={1,0,0,1,1,1,0,0,0,1,1};

  int c[11];

  printf("Cipher text= ");


for(int i=0;i<=10;i++){
  if(m[i]==k[i])
  {
      c[i]=1;
  }
  else


    {

        c[i]=0;
    }



  printf("%d",c[i]);
}

int p[11];

printf("\nPlain text= ");
for(int i=0;i<=10;i++){
  if(k[i]==c[i])
  {
      p[i]=1;
  }
  else


    {

        p[i]=0;
    }



  printf("%d",p[i]);
}

 }





