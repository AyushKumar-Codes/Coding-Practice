#include<stdio.h>
struct criket
{
    char Name[11][20];
    int Run[11];
};
int main()
{
    struct criket player;
    for(int i=0;i<11;i++){
        printf("Enter Player %d Name:",i+1);
        scanf("%s",player.Name[i]);
        printf("Enter Run Made:");
        scanf("%d",&player.Run[i]);
    }
    int sum;
    for(int i=0;i<11;i++){
        printf("Name Of Player %d : %s\n",i+1,player.Name[i]);
        printf("Runs Made by Player %d : %d\n",i+1,player.Run[i]);
    }
    for(int i=0;i<11;i++){
        sum+=player.Run[i];
    }
    printf("Total Run is: %d",sum);
}