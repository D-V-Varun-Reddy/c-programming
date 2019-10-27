#include<stdio.h>
#include<stdlib.h>
int draw(char a[3][3])
{
    int i,j,c=0;
    for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            if(a[i][j]=='0'||a[i][j]=='X')
                c++;
        }
        }
return c;
}
void display(char a[3][3])
{
    int i=0,j=0;
    for(i=0;i<3;i++)
        {
            printf("\n");
        for(j=0;j<3;j++)
        printf("%c ",a[i][j]);
        }
}
int check(char a[3][3])
{
            if(a[0][0]==a[0][1]&&a[0][0]==a[0][2])
        return 1;
       else if(a[1][0]==a[1][1]&&a[1][0]==a[1][2])
        return 1;
        else if(a[2][0]==a[2][1]&&a[2][0]==a[2][2])
        return 1;
        else if(a[0][0]==a[1][0]&&a[0][0]==a[2][0])
        return 1;
        else if(a[0][1]==a[1][1]&&a[0][1]==a[2][1])
        return 1;
        else if(a[0][2]==a[1][2]&&a[0][2]==a[2][2])
        return 1;
        else if(a[0][0]==a[1][1]&&a[0][0]==a[2][2])
        return 1;
        else if(a[0][2]==a[1][1]&&a[0][2]==a[2][0])
        return 1;
        else
        return 0;
}
void insert(int pos,char ele,char a[3][3])
{
    int i,j;
    if(pos==1){
        i=j=0;}
    else if(pos==2){
        i=0;j=1;}
    else if(pos==3){
        i=0;j=2;}
    else if(pos==4){
        i=1,j=0;}
    else if(pos==5){
        i=1;j=1;}
    else if(pos==6){
        i=1;j=2;}
    else if(pos==7){
        i=2;j=0;}
    else if(pos==8){
        i=2;j=1;}
    else if(pos==9){
        i=2;j=2;}
    else{
        printf("invalid position\n");}
a[i][j]=ele;
}
int main()
{
    char a[3][3]={'1','2','3','4','5','6','7','8','9'};
    display(a);
while(1)
{
    int ch,pos,i;
    for(i=1;i<3;i++)
    {
    switch(i)
    {
      case 1:
      printf("\n\nPLAYER 1('0')");
      printf("\n\nEnter Position among 1-9\n");
      scanf("%d",&pos);
      insert(pos,'0',a);
      display(a);
      ch=check(a);
      if(ch==1)
      {
          printf("\n\nPLAYER '1' WINS!!!\n");
          exit(0);
      }
      ch=draw(a);
      if(ch==9)
      {
          printf("\n\nOOPS!! DRAW MATCH...\n");
          exit(0);
      }
      break;
      case 2:
      printf("\n\nPLAYER 2('X')");
      printf("\nEnter Position among 1-9\n");
      scanf("%d",&pos);
      insert(pos,'X',a);
      display(a);
      ch=check(a);
      if(ch==1)
      {
          printf("\n\nPLAYER '2' WINS!!!\n");
          exit(0);
      }
      ch=draw(a);
      if(ch==9)
      {
          printf("\n\nOOPS!! DRAW MATCH...\n");
          exit(0);
      }
      break;
    }
    }
}
return 0;
}
























